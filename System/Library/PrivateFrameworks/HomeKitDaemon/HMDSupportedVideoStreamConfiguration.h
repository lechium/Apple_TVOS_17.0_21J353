//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDSupportedVideoStreamConfiguration : HAPTLVBase
{
    NSDictionary *_codecConfigurations;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000073f08
- (void).cxx_destruct;	// IMP=0x0000000000073ea8
@property(readonly, copy, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073e27
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073ceb
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000073bd2
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000073715
- (id)initWithCodecConfigurations:(id)arg1;	// IMP=0x000000000007369b

@end

