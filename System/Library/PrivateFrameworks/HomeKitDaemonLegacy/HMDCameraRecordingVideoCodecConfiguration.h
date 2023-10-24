//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSArray, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase
{
    HMDCameraRecordingVideoCodec *_codec;	// 8 = 0x8
    HMDCameraRecordingVideoCodecParameters *_parameters;	// 16 = 0x10
    NSArray *_videoAttributes;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000081fd93
- (void).cxx_destruct;	// IMP=0x000000000081fd04
@property(readonly, copy, nonatomic) NSArray *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDCameraRecordingVideoCodecParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) HMDCameraRecordingVideoCodec *codec; // @synthesize codec=_codec;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000081fbee
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000081fa32
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000081f836
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x000000000081f454
- (id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3;	// IMP=0x000000000081f38a

@end
