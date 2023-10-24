//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSOperationQueue, NSString;
@protocol HMDCoreFollowUpManagerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCoreFollowUpManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDCoreFollowUpManagerDataSource> _dataSource;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSOperationQueue *_followUpOperationQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000041d78e
+ (id)allPossibleFollowUpItemIdentifiers;	// IMP=0x001000000041d719
- (void).cxx_destruct;	// IMP=0x000000000041d42e
@property(readonly) NSOperationQueue *followUpOperationQueue; // @synthesize followUpOperationQueue=_followUpOperationQueue;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMDCoreFollowUpManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_stopAdvertising:(long long)arg1;	// IMP=0x000000000041cfad
- (void)stopAdvertising:(long long)arg1;	// IMP=0x000000000041cef0
- (void)removeAllFollowUpItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000041cd92
- (void)_startAdvertising:(long long)arg1;	// IMP=0x000000000041c86d
- (void)startAdvertising:(long long)arg1;	// IMP=0x000000000041c76d
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000041c620
- (id)init;	// IMP=0x000000000041c5e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
