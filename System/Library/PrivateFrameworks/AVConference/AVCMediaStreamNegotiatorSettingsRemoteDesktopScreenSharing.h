//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVCMediaStreamNegotiatorSettingsRemoteDesktopScreenSharing
{
}

- (unsigned char)featureListStringType;	// IMP=0x00000000003d4fd5
- (unsigned int)jitterBufferMode;	// IMP=0x00000000003d4fcd
- (int)connectionType;	// IMP=0x00000000003d4fc2
- (double)rtcpSendInterval;	// IMP=0x00000000003d4fb4
- (double)rtcpTimeOutInterval;	// IMP=0x00000000003d4fa6
- (_Bool)rtcpTimeOutEnabled;	// IMP=0x00000000003d4f9e
- (unsigned long long)maxBandwidth;	// IMP=0x00000000003d4f93
- (unsigned long long)minBandwidth;	// IMP=0x00000000003d4f88
- (int)operatingMode;	// IMP=0x00000000003d4f7d
- (long long)captureSource;	// IMP=0x00000000003d4f72
- (long long)videoStreamMode;	// IMP=0x00000000003d4f67
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id *)arg3;	// IMP=0x00000000003d4d66

@end
