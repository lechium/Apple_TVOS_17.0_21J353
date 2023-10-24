//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase
{
    NSNumber *_supportsComfortNoise;	// 8 = 0x8
    NSDictionary *_codecConfigurations;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006fc10
- (void).cxx_destruct;	// IMP=0x000000000006fb92
@property(readonly, copy, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property(readonly, copy, nonatomic) NSNumber *supportsComfortNoise; // @synthesize supportsComfortNoise=_supportsComfortNoise;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006fac2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f8ef
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006f790
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x000000000006f269
- (id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2;	// IMP=0x000000000006f1b4

@end

