//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSMergePolicy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudTransformMergePolicy : NSMergePolicy
{
}

+ (id)logCategory;	// IMP=0x0010000000977dad
- (_Bool)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id *)arg2;	// IMP=0x000000000097790a
- (id)init;	// IMP=0x00000000009778d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

