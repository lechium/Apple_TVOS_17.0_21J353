//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDCameraRecordingAudioCodecConfiguration, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingVideoCodecConfiguration, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase
{
    HMDCameraRecordingGeneralConfiguration *_generalConfiguration;	// 8 = 0x8
    HMDCameraRecordingVideoCodecConfiguration *_videoConfiguration;	// 16 = 0x10
    HMDCameraRecordingAudioCodecConfiguration *_audioConfiguration;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006b77b6
- (void).cxx_destruct;	// IMP=0x00000000006b7774
@property(readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration; // @synthesize generalConfiguration=_generalConfiguration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006b765e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006b7539
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000006b734c
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000006b6f99
- (id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3;	// IMP=0x00000000006b6ecf

@end
