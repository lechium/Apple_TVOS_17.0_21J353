//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface HKUserTrackedConceptQueryConfiguration : HKQueryServerConfiguration
{
    NSArray *_sortDescriptors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001fc540
- (void).cxx_destruct;	// IMP=0x00000000001fc6ba
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001fc61b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001fc548
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fc4c9

@end
