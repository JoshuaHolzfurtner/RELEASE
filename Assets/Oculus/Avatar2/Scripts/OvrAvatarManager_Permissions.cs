﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;

namespace Oculus.Avatar2
{
    public partial class OvrAvatarManager
    {
        public static string PERMISSION_EYE_TRACKING = "com.oculus.permission.EYE_TRACKING";
        public static string PERMISSION_FACE_TRACKING = "com.oculus.permission.FACE_TRACKING";

        enum PermissionState { None, Requesting, Granted, Denied, DeniedNoAsk };
        private Queue<string> permissionQueue = new Queue<string>();
        private Dictionary<string, PermissionState> permissionCache = new Dictionary<string, PermissionState>();
        private bool permissionManagerWaiting = false;

        [Header("Permissions")]
        [SerializeField]
        public bool automaticallyRequestPermissions = true;

        private void PermissionGranted(string permission)
        {
            OvrAvatarLog.LogInfo("[GRANTED] " + permission);
            permissionCache[permission] = PermissionState.Granted;
            permissionManagerWaiting = false;
        }
        private void PermissionDenied(string permission)
        {
            OvrAvatarLog.LogInfo("[DENIED] " + permission);
            permissionCache[permission] = PermissionState.Denied;
            permissionManagerWaiting = false;
        }
        private void PermissionDeniedAndDontAskAgain(string permission)
        {
            OvrAvatarLog.LogInfo("[DENIED_NO_ASK] " + permission);
            permissionCache[permission] = PermissionState.DeniedNoAsk;
            permissionManagerWaiting = false;
        }
        public void RequestEyeTrackingPermission()
        {
            QueuePermissionRequest(PERMISSION_EYE_TRACKING);
        }
        public void RequestFaceTrackingPermission()
        {
            QueuePermissionRequest(PERMISSION_FACE_TRACKING);
        }
        public void RequestMicPermission()
        {
            QueuePermissionRequest(Permission.Microphone);
        }
        public void QueuePermissionRequest(string perm)
        {
            if (!permissionQueue.Contains(perm) && !permissionCache.ContainsKey(perm))
            {
                permissionQueue.Enqueue(perm);
            }
        }
        public void EnablePermissionRequests()
        {
            automaticallyRequestPermissions = true;
        }
        private void Permission_Update()
        {
#if UNITY_ANDROID && !UNITY_EDITOR
            if (automaticallyRequestPermissions && permissionQueue.Count>0 && !permissionManagerWaiting)
            {
                var perm = permissionQueue.Dequeue();
                if (!permissionCache.ContainsKey(perm))
                {
                    if (!Permission.HasUserAuthorizedPermission(perm))
                    {
                        permissionManagerWaiting = true;
                        OvrAvatarLog.LogInfo("Requesting: " + perm);
                        var callbacks = new PermissionCallbacks();
                        callbacks.PermissionGranted += PermissionGranted;
                        callbacks.PermissionDenied += PermissionDenied;
                        callbacks.PermissionDeniedAndDontAskAgain += PermissionDeniedAndDontAskAgain;
                        Permission.RequestUserPermission(perm, callbacks);
                    }
                    else
                    {
                        permissionCache[perm] = PermissionState.Granted;
                        OvrAvatarLog.LogInfo("Skipping Permission Request for: " + perm + " (Already requested and: " + permissionCache[perm] + ")");
                    }
                } else
                {
                    OvrAvatarLog.LogInfo("Skipping Permission Request for: "+perm+" (Already requested and: "+ permissionCache[perm] + ")");
                }
            }
#endif
        }
    }
}
