//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDictionary *_filterDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000020b520
- (void).cxx_destruct;	// IMP=0x000000000020b6d3
@property(copy, nonatomic) NSDictionary *filterDictionary; // @synthesize filterDictionary=_filterDictionary;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000020b634
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020b528
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020b4ca

@end

