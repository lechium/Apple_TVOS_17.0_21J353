//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNTrackerManager : NSObject
{
    NSDictionary *_trackerTypeToClassDictionary;	// 8 = 0x8
    NSMapTable *_trackerClassToNameMapTable;	// 16 = 0x10
    NSMutableDictionary *_liveTrackerCounter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;	// 40 = 0x28
    NSDictionary *_liveTrackerCounterLimit;	// 48 = 0x30
    NSMutableDictionary *_trackers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001148b3
- (void)_releaseTracker_NO_LOCK_DO_NOT_EXECUTE_DIRECTLY:(id)arg1;	// IMP=0x0000000000114752
- (id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001145a3
- (id)_getTracker:(id)arg1;	// IMP=0x00000000001144a5
- (long long)_maximumTrackersOfType:(id)arg1;	// IMP=0x0000000000114449
- (id)init;	// IMP=0x0000000000113fdb
- (id)_supportedComputeDeviceTypesForTrackerType:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000113ea9

@end

