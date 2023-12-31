//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDBitRateSetting : HAPNumberParser
{
    unsigned long long _bitrateSetting;	// 8 = 0x8
}

+ (id)arrayWithSettings:(id)arg1;	// IMP=0x001000000006d020
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006d018
@property(readonly, nonatomic) unsigned long long bitrateSetting; // @synthesize bitrateSetting=_bitrateSetting;
- (id)initWithBitRateSetting:(unsigned long long)arg1;	// IMP=0x000000000006cfc3
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006cf6c
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006ced0
- (id)description;	// IMP=0x000000000006ce5c
- (unsigned long long)hash;	// IMP=0x000000000006ce4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006cdc7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006cd30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006cc73

@end

