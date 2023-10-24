//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface HMDSupportedRTPConfiguration : HAPTLVBase
{
    NSArray *_srtpCryptoSuites;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000077af4
- (void).cxx_destruct;	// IMP=0x0000000000077a94
@property(readonly, copy, nonatomic) NSArray *srtpCryptoSuites; // @synthesize srtpCryptoSuites=_srtpCryptoSuites;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077a13
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000778d7
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000777e4
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000000774e5
- (id)initWithCryptoSuites:(id)arg1;	// IMP=0x000000000007746b

@end

