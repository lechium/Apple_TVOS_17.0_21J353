//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NAPriorityQueueingStrategy : NSObject
{
    CDUnknownBlockType _priorityComparator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001762c
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;	// IMP=0x0000000000017538
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;	// IMP=0x00000000000174b8
- (id)initWithComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000001742e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
