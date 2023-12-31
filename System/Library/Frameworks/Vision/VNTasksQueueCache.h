//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VNTasksQueueCache : NSObject
{
    NSMutableDictionary *_queueNameToTasksQueueDictionary;	// 8 = 0x8
    struct os_unfair_lock_s _queueNameToTasksQueueDictionaryLock;	// 16 = 0x10
    long long _maximumTasksCount;	// 24 = 0x18
}

+ (id)queueLabelWithUniqueAppendix:(id)arg1;	// IMP=0x00400000000a1b95
- (void).cxx_destruct;	// IMP=0x00000000000a1b65
- (void)releaseAllQueues;	// IMP=0x00000000000a1afa
- (void)releaseQueueWithUniqueAppendix:(id)arg1;	// IMP=0x00000000000a1a2c
@property long long maximumTasksCount;
- (id)_queueWithUniqueAppendix:(id)arg1 queueClass:(Class)arg2;	// IMP=0x00000000000a1743
- (id)queueWithUniqueAppendix:(id)arg1;	// IMP=0x00000000000a1710
- (id)init;	// IMP=0x00000000000a1661

@end

