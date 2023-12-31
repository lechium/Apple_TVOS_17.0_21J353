//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface _UIFocusLinearMovementCache : NSObject
{
    double _lastUpdate;	// 8 = 0x8
    double _cooldownThreshold;	// 16 = 0x10
    NSArray *_linearItems;	// 24 = 0x18
    NSHashTable *_parentEnvironments;	// 32 = 0x20
    struct {
        unsigned int isInvalidated:1;
        unsigned int invalidateOnTimeout:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000008b89b6
- (void)invalidateFocusItemContainer:(id)arg1;	// IMP=0x00000000008b89a4
- (void)focusGroupPriorityDidChange:(id)arg1;	// IMP=0x00000000008b8992
- (void)environmentDidAppear:(id)arg1;	// IMP=0x00000000008b85a7
- (void)environmentWillDisappear:(id)arg1;	// IMP=0x00000000008b8521
- (void)scrollableContainerDidScroll:(id)arg1;	// IMP=0x00000000008b8495
- (void)_updateParentEnvironmentIfNecessary;	// IMP=0x00000000008b827b
- (void)updateCacheWithContext:(id)arg1;	// IMP=0x00000000008b809e
- (id)nextItemForRequest:(id)arg1;	// IMP=0x00000000008b7f3e
- (void)_invalidateOnTimeout;	// IMP=0x00000000008b7f17
- (void)_invalidate;	// IMP=0x00000000008b7f0d
- (id)initWithFocusBehavior:(id)arg1;	// IMP=0x00000000008b7ea2

@end

