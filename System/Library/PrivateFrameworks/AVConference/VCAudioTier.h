//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioTier : NSObject
{
    unsigned int networkBitrate;	// 8 = 0x8
    unsigned int audioCodecBitrate;	// 12 = 0xc
    unsigned int packetsPerBundle;	// 16 = 0x10
    unsigned int redNumPayloads;	// 20 = 0x14
    unsigned int redMaxDelay20ms;	// 24 = 0x18
    VCAudioPayloadConfig *payloadConfig;	// 32 = 0x20
    _Bool _bundlingAppliedByCodec;	// 40 = 0x28
    unsigned int _payloadSize;	// 44 = 0x2c
    unsigned int _headerSize;	// 48 = 0x30
}

+ (_Bool)bundlingAppliedByCodecForPayload:(int)arg1 mode:(int)arg2;	// IMP=0x00600000003edb09
+ (id)newAudioTierForPayloadConfig:(id)arg1 bundlingAppliedByCodec:(_Bool)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 headerSize:(unsigned int)arg6;	// IMP=0x00600000003ed9df
@property(readonly) VCAudioPayloadConfig *payloadConfig; // @synthesize payloadConfig;
@property(readonly) unsigned int redMaxDelay20ms; // @synthesize redMaxDelay20ms;
@property(readonly) unsigned int redNumPayloads; // @synthesize redNumPayloads;
@property(readonly) unsigned int packetsPerBundle; // @synthesize packetsPerBundle;
@property(readonly) unsigned int audioCodecBitrate; // @synthesize audioCodecBitrate;
@property(readonly) unsigned int networkBitrate; // @synthesize networkBitrate;
@property(readonly) unsigned int redPayloadSize;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ede40
- (id)dictionary;	// IMP=0x00000000003edcd2
- (id)description;	// IMP=0x00000000003edc0a
- (id)initWithNetworkBitrate:(unsigned int)arg1 bundlingAppliedByCodec:(_Bool)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 payloadSize:(unsigned int)arg6 headerSize:(unsigned int)arg7 payloadConfig:(id)arg8;	// IMP=0x00000000003edb3e

@end

