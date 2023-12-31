//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDAudioSampleRate : HAPNumberParser
{
    unsigned long long _sampleRate;	// 8 = 0x8
}

+ (id)arrayWithRates:(id)arg1;	// IMP=0x0010000000074873
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007486b
@property(readonly, nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)initWithSampleRate:(unsigned long long)arg1;	// IMP=0x0000000000074816
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000000747bf
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000074723
- (id)description;	// IMP=0x00000000000746af
- (unsigned long long)hash;	// IMP=0x000000000007469d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007461a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000074583
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000744c6

@end

