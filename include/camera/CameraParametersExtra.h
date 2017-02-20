/*
 * Copyright (C) 2015 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::FOCUS_MODE_MANUAL_POSITION[] = "manual"; \
const char CameraParameters::WHITE_BALANCE_MANUAL_CCT[] = "manual-cct"; \
const char CameraParameters::KEY_SONY_EXTENSION_VERSION[] = "sony-extension-version"; \
const char CameraParameters::KEY_SONY_MAX_VIDEO_FRAME_RATE_FOR_1920X1080[] = "sony-max-video-frame-rate-for-1920x1080"; \
const char CameraParameters::KEY_SONY_MAX_TORCH_INTENSITY[] = "sony-max-torch-intensity"; \
const char CameraParameters::KEY_SONY_TORCH_INTENSITY[] = "sony-torch-intensity"; \
const char CameraParameters::KEY_SONY_SR_ZOOM_SUPPORTED[] = "sony-sr-zoom-supported"; \
const char CameraParameters::KEY_SONY_MAX_SR_ZOOM[] = "sony-max-sr-zoom"; \
const char CameraParameters::KEY_SONY_PREFERRED_PREVIEW_SIZE_FOR_STILL[] = "sony-preferred-preview-size-for-still"; \
const char CameraParameters::KEY_SONY_EXIF_MAKER_NOTE_TYPES[] = "sony-exif-maker-note-types"; \
const char CameraParameters::KEY_SONY_OBJECT_TRACKING_SUPPORTED[] = "sony-object-tracking-supported"; \
const char CameraParameters::KEY_SONY_MAX_BURST_SHOT_FRAME_RATE[] = "sony-max-burst-shot-frame-rate"; \
const char CameraParameters::KEY_SONY_BURST_SHOT_FRAME_RATE[] = "sony-burst-shot-frame-rate"; \
const char CameraParameters::KEY_SONY_MAX_BURST_SHOT_SIZE[] = "sony-max-burst-shot-size"; \
const char CameraParameters::KEY_SONY_BURST_SHOT[] = "sony-burst-shot"; \
const char CameraParameters::KEY_SONY_SUPPORTED_VIDEO_NR[] = "sony-video-nr-values"; \
const char CameraParameters::KEY_SONY_VIDEO_NR[] = "sony-video-nr"; \
const char CameraParameters::KEY_SONY_MAX_VIDEO_HDR_SIZE[] = "sony-max-video-hdr-size"; \
const char CameraParameters::KEY_SONY_SUPPORTED_VIDEO_HDR[] = "sony-video-hdr-values"; \
const char CameraParameters::KEY_SONY_VIDEO_HDR[] = "sony-video-hdr"; \
const char CameraParameters::KEY_SONY_MAX_STILL_HDR_LEVEL[] = "sony-max-still-hdr-level"; \
const char CameraParameters::KEY_SONY_STILL_HDR_LEVEL[] = "sony-still-hdr-level"; \
const char CameraParameters::KEY_SONY_SHUTTER_SPEED_STEP[] = "sony-shutter-speed-step"; \
const char CameraParameters::KEY_SONY_MIN_SHUTTER_SPEED[] = "sony-min-shutter-speed"; \
const char CameraParameters::KEY_SONY_MAX_SHUTTER_SPEED[] = "sony-max-shutter-speed"; \
const char CameraParameters::KEY_SONY_SHUTTER_SPEED[] = "sony-shutter-speed"; \
const char CameraParameters::KEY_SONY_SUPPORTED_ISO[] = "sony-iso-values"; \
const char CameraParameters::KEY_SONY_ISO[] = "sony-iso"; \
const char CameraParameters::KEY_SONY_SUPPORTED_AE_MODES[] = "sony-ae-mode-values"; \
const char CameraParameters::KEY_SONY_AE_MODE[] = "sony-ae-mode"; \
const char CameraParameters::KEY_SONY_MULTI_FOCUS_RECTS[] = "sony-multi-focus-rects"; \
const char CameraParameters::KEY_SONY_MAX_MULTI_FOCUS_NUM[] = "sony-max-multi-focus-num"; \
const char CameraParameters::KEY_SONY_SUPPORTED_FOCUS_AREA[] = "sony-focus-area-values"; \
const char CameraParameters::KEY_SONY_FOCUS_AREA[] = "sony-focus-area"; \
const char CameraParameters::KEY_SONY_SUPPORTED_SMILE_DETECTION[] = "sony-smile-detect-values"; \
const char CameraParameters::KEY_SONY_SMILE_DETECTION[] = "sony-smile-detect"; \
const char CameraParameters::KEY_SONY_SCENE_DETECTION_APPLY_TYPES[] = "sony-scene-detect-apply-types"; \
const char CameraParameters::KEY_SONY_SCENE_DETECTION_SUPPORTED[] = "sony-scene-detect-supported"; \
const char CameraParameters::KEY_SONY_SUPPORTED_METERING_MODES[] = "sony-metering-mode-values"; \
const char CameraParameters::KEY_SONY_METERING_MODE[] = "sony-metering-mode";

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char FOCUS_MODE_MANUAL_POSITION[]; \
    static const char WHITE_BALANCE_MANUAL_CCT[]; \
    static const char KEY_SONY_EXTENSION_VERSION[]; \
    static const char KEY_SONY_MAX_VIDEO_FRAME_RATE_FOR_1920X1080[]; \
    static const char KEY_SONY_MAX_TORCH_INTENSITY[]; \
    static const char KEY_SONY_TORCH_INTENSITY[]; \
    static const char KEY_SONY_SR_ZOOM_SUPPORTED[]; \
    static const char KEY_SONY_MAX_SR_ZOOM[]; \
    static const char KEY_SONY_PREFERRED_PREVIEW_SIZE_FOR_STILL[]; \
    static const char KEY_SONY_EXIF_MAKER_NOTE_TYPES[]; \
    static const char KEY_SONY_OBJECT_TRACKING_SUPPORTED[]; \
    static const char KEY_SONY_MAX_BURST_SHOT_FRAME_RATE[]; \
    static const char KEY_SONY_BURST_SHOT_FRAME_RATE[]; \
    static const char KEY_SONY_MAX_BURST_SHOT_SIZE[]; \
    static const char KEY_SONY_SUPPORTED_BURST_SHOTS[]; \
    static const char KEY_SONY_BURST_SHOT[]; \
    static const char KEY_SONY_SUPPORTED_VIDEO_NR[]; \
    static const char KEY_SONY_VIDEO_NR[]; \
    static const char KEY_SONY_MAX_VIDEO_HDR_SIZE[]; \
    static const char KEY_SONY_SUPPORTED_VIDEO_HDR[]; \
    static const char KEY_SONY_VIDEO_HDR[]; \
    static const char KEY_SONY_MAX_STILL_HDR_LEVEL[]; \
    static const char KEY_SONY_STILL_HDR_LEVEL[]; \
    static const char KEY_SONY_SHUTTER_SPEED_STEP[]; \
    static const char KEY_SONY_MIN_SHUTTER_SPEED[]; \
    static const char KEY_SONY_MAX_SHUTTER_SPEED[]; \
    static const char KEY_SONY_SHUTTER_SPEED[]; \
    static const char KEY_SONY_SUPPORTED_ISO[]; \
    static const char KEY_SONY_ISO[]; \
    static const char KEY_SONY_SUPPORTED_AE_MODES[]; \
    static const char KEY_SONY_AE_MODE[]; \
    static const char KEY_SONY_MULTI_FOCUS_RECTS[]; \
    static const char KEY_SONY_MAX_MULTI_FOCUS_NUM[]; \
    static const char KEY_SONY_SUPPORTED_FOCUS_AREA[]; \
    static const char KEY_SONY_FOCUS_AREA[]; \
    static const char KEY_SONY_SUPPORTED_SMILE_DETECTION[]; \
    static const char KEY_SONY_SMILE_DETECTION[]; \
    static const char KEY_SONY_SCENE_DETECTION_APPLY_TYPES[]; \
    static const char KEY_SONY_SCENE_DETECTION_SUPPORTED[]; \
    static const char KEY_SONY_SUPPORTED_METERING_MODES[]; \
    static const char KEY_SONY_METERING_MODE[];
