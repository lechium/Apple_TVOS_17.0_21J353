//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKSampleCountQueryServerConfiguration : HKQueryServerConfiguration
{
    NSArray *_queryDescriptors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002458b5
- (void).cxx_destruct;	// IMP=0x0000000000245a9b
@property(copy, nonatomic) NSArray *queryDescriptors; // @synthesize queryDescriptors=_queryDescriptors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002459fc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002458bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024585f

@end
