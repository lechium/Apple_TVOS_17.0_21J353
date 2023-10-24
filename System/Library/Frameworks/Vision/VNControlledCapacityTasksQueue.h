//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VNControlledCapacityTasksQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    long long _maximumTasksCount;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 24 = 0x18
}

+ (long long)tasksTimeout;	// IMP=0x00400000000a162d
+ (void)setTasksTimeout:(long long)arg1;	// IMP=0x00400000000a1601
- (void).cxx_destruct;	// IMP=0x00000000000a15d9
- (id)description;	// IMP=0x00000000000a1595
@property long long maximumTasksCount;
- (_Bool)currentQueueIsSynchronizationQueue;	// IMP=0x00000000000a149f
- (void)dispatchReportBlockCompletion;	// IMP=0x00000000000a1470
- (_Bool)dispatchGroupWait:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a13b1
- (void)dispatchSyncByPreservingQueueCapacity:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a135d
- (void)dispatchGroupAsyncByPreservingQueueCapacity:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a12eb
- (id)initWithDispatchQueueLabel:(id)arg1 maximumTasksCount:(long long)arg2;	// IMP=0x00000000000a11bd

@end

