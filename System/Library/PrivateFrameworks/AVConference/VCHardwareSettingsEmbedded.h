//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsEmbedded
{
    NSString *_deviceName;	// 40 = 0x28
    long long _chipId;	// 48 = 0x30
    int _deviceClass;	// 56 = 0x38
    int _screenWidth;	// 60 = 0x3c
    int _screenHeight;	// 64 = 0x40
    unsigned long long _maxScreenEncodingSizeSupported;	// 72 = 0x48
    long long _videoEncoderType;	// 80 = 0x50
    _Bool _hasAppleNeuralEngine;	// 88 = 0x58
    _Bool _isInitialized;	// 89 = 0x59
    _Bool _hasBasebandInitialized;	// 90 = 0x5a
    _Bool _hasBaseband;	// 91 = 0x5b
    NSString *_marketingName;	// 96 = 0x60
    int _productType;	// 104 = 0x68
}

+ (long long)deviceClass;	// IMP=0x00100000002e98e9
+ (id)sharedInstance;	// IMP=0x00100000002e8d98
+ (id)virtualHardwareSettings:(id)arg1;	// IMP=0x00100000002e8aa2
@property(readonly, nonatomic) unsigned int maxHighTierMLEnhanceParticipants;
@property(readonly, nonatomic) _Bool isMLEnhanceOneToOneSupported;
@property(readonly, nonatomic) _Bool isExternalCameraSupported;
@property(readonly, nonatomic) _Bool isSmartBrakeSupported;
- (_Bool)isSmartBrakeSupportedATV;	// IMP=0x00000000002eaeb1
- (_Bool)isSmartBrakeSupportedIPad;	// IMP=0x00000000002eae50
- (_Bool)isSmartBrakeSupportedIPhone;	// IMP=0x00000000002eadf4
@property(readonly, nonatomic) _Bool isViewPointCorrectionSupported;
@property(readonly, nonatomic) _Bool isMediaRecordingSupported;
@property(readonly, nonatomic) _Bool isCellularTappingSupported;
- (long long)screenShareCapabilitiesIPod;	// IMP=0x00000000002eada9
- (long long)screenShareCapabilitiesIPad;	// IMP=0x00000000002ead39
- (long long)screenShareCapabilitiesIPhone;	// IMP=0x00000000002eacd4
@property(readonly, nonatomic) long long screenShareCapabilities;
- (_Bool)disableMLScalarDuringSharing;	// IMP=0x00000000002eac06
- (_Bool)supportsDedicatedSystemAudioStream;	// IMP=0x00000000002eab69
- (_Bool)supportsSystemAudioTap;	// IMP=0x00000000002eab48
- (_Bool)supportsScreenCapture;	// IMP=0x00000000002eab23
- (_Bool)limitCameraDownlinkBitrateDuringSharing;	// IMP=0x00000000002eaa70
@property(readonly, nonatomic) NSArray *supportedVideoPayloads;
@property(readonly, nonatomic) _Bool isPixelFormatAvailable;
- (void)addPixelFormat;	// IMP=0x00000000002ea9de
- (unsigned int)maxFpsCameraCaptureDuringSharing;	// IMP=0x00000000002ea9d3
- (unsigned int)maxRemoteParticipants30fps;	// IMP=0x00000000002ea952
@property(readonly, nonatomic) _Bool canDo1080p;
@property(readonly, nonatomic) _Bool isHEVC444DecodeSupported;
@property(readonly, nonatomic) _Bool isSecondDisplaySupportEnabled;
@property(readonly, nonatomic) _Bool isRemoteCameraSenderSupported;
- (_Bool)isRemoteCameraSenderSupportediPhone;	// IMP=0x00000000002ea382
- (_Bool)isRemoteCameraSenderSupportediPad;	// IMP=0x00000000002ea32b
@property(readonly, nonatomic) unsigned int audioPacketLossConcealmentAlgorithmAACELD;
@property(readonly, nonatomic) _Bool supportsHEIFEncoding;
@property(readonly, nonatomic) _Bool isVoiceProcessingAt24KSupported;
@property(readonly, nonatomic) _Bool isCaptionsSupported;
@property(readonly, nonatomic) _Bool hasAppleNeuralEngine;
@property(readonly, nonatomic) _Bool isDeviceLargeScreen;
@property(readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property(readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property(readonly, nonatomic) unsigned int maxDisplayRefreshRate;
- (unsigned int)maxMultiwayFramerateSupported;	// IMP=0x00000000002e9cc5
- (unsigned int)maxOneToOneFramerateSupported;	// IMP=0x00000000002e9c8f
@property(readonly, nonatomic) _Bool supportsMultiway1080pStream;
- (_Bool)deviceSupportsMultiway1080p;	// IMP=0x00000000002e9c16
- (_Bool)supportsMultiway1080pStreamEmbeddedOS;	// IMP=0x00000000002e9b9d
- (_Bool)supportsMultiway1080pStreamATV;	// IMP=0x00000000002e9b76
@property(readonly, nonatomic) _Bool supportsMultiway720pStream;
@property(readonly, nonatomic) _Bool useSoftFramerateSwitching;
@property(readonly, nonatomic) long long videoEncoderType;
@property(readonly, nonatomic) long long chipId;
@property(readonly, nonatomic) long long deviceClass;
- (unsigned int)maxFrameRateSupportedBackgroundBlur;	// IMP=0x00000000002e9845
@property(readonly, nonatomic) _Bool shouldEnforceScreenFrameRateLimit;
@property(readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property(readonly, nonatomic) _Bool allowScreenShareResolutionModuloAdjustment;
@property(readonly, nonatomic) unsigned long long maxScreenEncodingSizeSupported;
@property(readonly, nonatomic) _Bool isDisplayPortrait;
- (double)previewPreferredAspectRatio;	// IMP=0x00000000002e9662
- (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;	// IMP=0x00000000002e95be
@property(readonly, nonatomic) unsigned int screenHeight;
- (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;	// IMP=0x00000000002e94eb
@property(readonly, nonatomic) unsigned int screenWidth;
@property(readonly, nonatomic) _Bool isCaptureSIFRPreferred;
@property(readonly, nonatomic) _Bool isSpatialAudioSupported;
- (_Bool)isSpatialAudioSupportedIPod;	// IMP=0x00000000002e9298
- (_Bool)isSpatialAudioSupportedIPad;	// IMP=0x00000000002e9283
- (_Bool)isSpatialAudioSupportedAppleTV;	// IMP=0x00000000002e926e
- (_Bool)isSpatialAudioSupportedIPhone;	// IMP=0x00000000002e9259
@property(readonly, nonatomic) _Bool hasBaseband;
- (id)marketingName;	// IMP=0x00000000002e9216
@property(readonly, nonatomic) NSString *deviceName;
- (void)_initializeScreenDimension;	// IMP=0x00000000002e8f13
- (void)setupSiriSupport;	// IMP=0x00000000002e8ecf
- (void)dealloc;	// IMP=0x00000000002e8e54
- (id)initForDevice:(id)arg1;	// IMP=0x00000000002e87c5
- (id)init;	// IMP=0x00000000002e8718

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isSiriVoicePlayoutSupported;
@property(readonly, nonatomic) _Bool isSiriVoiceTapSupported;
@property(readonly) Class superclass;

@end

