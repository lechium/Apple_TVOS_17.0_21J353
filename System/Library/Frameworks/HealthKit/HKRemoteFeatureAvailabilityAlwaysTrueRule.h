//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityAlwaysTrueRule : NSObject
{
}

+ (id)ruleIdentifier;	// IMP=0x0010000000117943
- (_Bool)evaluate;	// IMP=0x000000000011797f
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000117950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

