//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface BiasEstimatorOutputs : NSObject
{
    NSArray *_outProbabilities;	// 8 = 0x8
    double _rawRange;	// 16 = 0x10
    double _correctedRange;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000fca3
- (void).cxx_destruct;	// IMP=0x000000000001007c
@property(nonatomic) double correctedRange; // @synthesize correctedRange=_correctedRange;
@property(nonatomic) double rawRange; // @synthesize rawRange=_rawRange;
@property(copy, nonatomic) NSArray *outProbabilities; // @synthesize outProbabilities=_outProbabilities;
- (id)populateOrderedBiasEstimatorOutputs;	// IMP=0x000000000000ff28
- (id)description;	// IMP=0x000000000000fd88
- (unsigned long long)hash;	// IMP=0x000000000000fcab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fb19
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f9d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f93f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f8f7
- (id)initWithBiasEstimatorOutputs:(id)arg1;	// IMP=0x000000000000f769
- (id)initWithOuputProbabilities:(id)arg1 rawRange:(double)arg2 correctedRange:(double)arg3;	// IMP=0x000000000000f463

@end

