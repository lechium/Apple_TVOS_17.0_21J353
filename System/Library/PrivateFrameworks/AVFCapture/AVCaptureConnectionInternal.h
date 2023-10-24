//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureInputPort, AVWeakReference, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureConnectionInternal : NSObject
{
    NSMutableArray *inputPorts;	// 8 = 0x8
    AVCaptureDeviceInput *sourceDeviceInput;	// 16 = 0x10
    AVCaptureDevice *sourceDevice;	// 24 = 0x18
    AVWeakReference *outputWeakReference;	// 32 = 0x20
    AVWeakReference *videoPreviewLayerWeakReference;	// 40 = 0x28
    _Bool hasActiveObservers;	// 48 = 0x30
    _Bool active;	// 49 = 0x31
    _Bool enabled;	// 50 = 0x32
    int changeSeed;	// 52 = 0x34
    AVCaptureInputPort *audioInputPort;	// 56 = 0x38
    NSMutableArray *audioChannels;	// 64 = 0x40
    NSArray *audioChannelLevels;	// 72 = 0x48
    long long lastGetAudioLevelsTime;	// 80 = 0x50
    AVCaptureInputPort *videoInputPort;	// 88 = 0x58
    AVCaptureInputPort *metadataInputPort;	// 96 = 0x60
    AVCaptureInputPort *metadataItemInputPort;	// 104 = 0x68
    AVCaptureInputPort *depthDataInputPort;	// 112 = 0x70
    AVCaptureInputPort *visionDataInputPort;	// 120 = 0x78
    AVCaptureInputPort *pointCloudDataInputPort;	// 128 = 0x80
    AVCaptureInputPort *cameraCalibrationDataInputPort;	// 136 = 0x88
    _Bool videoMirroringSupported;	// 144 = 0x90
    _Bool automaticallyAdjustsVideoMirroring;	// 145 = 0x91
    _Bool videoMirrored;	// 146 = 0x92
    _Bool videoRotationSupported;	// 147 = 0x93
    double videoRotationAngle;	// 152 = 0x98
    double videoMaxScaleAndCropFactor;	// 160 = 0xa0
    double videoScaleAndCropFactor;	// 168 = 0xa8
    int videoRetainedBufferCountHint;	// 176 = 0xb0
    long long preferredVideoStabilizationMode;	// 184 = 0xb8
    _Bool videoStabilizationEnabled;	// 192 = 0xc0
    long long activeVideoStabilizationMode;	// 200 = 0xc8
    _Bool hasVideoMinFrameDurationObserver;	// 208 = 0xd0
    NSString *connectionID;	// 216 = 0xd8
    _Bool cameraIntrinsicMatrixDeliverySupported;	// 224 = 0xe0
    _Bool cameraIntrinsicMatrixDeliveryEnabled;	// 225 = 0xe1
    _Bool livePhotoMetadataWritingEnabled;	// 226 = 0xe2
    _Bool debugMetadataSidecarFileEnabled;	// 227 = 0xe3
    NSArray *supportedVideoMirroringMethodsForMovieRecording;	// 232 = 0xe8
    long long videoMirroringMethodForMovieRecording;	// 240 = 0xf0
    _Bool videoZoomSmoothingSupported;	// 248 = 0xf8
    _Bool videoZoomSmoothingEnabled;	// 249 = 0xf9
    _Bool videoGreenGhostMitigationSupported;	// 250 = 0xfa
    _Bool videoGreenGhostMitigationEnabled;	// 251 = 0xfb
    _Bool videoDeviceOrientationCorrectionSupported;	// 252 = 0xfc
    _Bool videoDeviceOrientationCorrectionEnabled;	// 253 = 0xfd
}

@end

