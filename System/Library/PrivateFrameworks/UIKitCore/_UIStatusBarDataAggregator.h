//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSSet, _UIStatusBarData;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregator : NSObject
{
    _UIStatusBarData *_overlayData;	// 8 = 0x8
    CDUnknownBlockType _updateBlock;	// 16 = 0x10
    Class _dataClass;	// 24 = 0x18
    NSCountedSet *_delayedKeys;	// 32 = 0x20
    NSMutableDictionary *_pendingUpdates;	// 40 = 0x28
    NSMutableDictionary *_coalescedKeys;	// 48 = 0x30
    NSMutableDictionary *_coalescedTimers;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x0060000000f9a62f
- (void).cxx_destruct;	// IMP=0x0000000000f9bcea
@property(retain, nonatomic) NSMutableDictionary *coalescedTimers; // @synthesize coalescedTimers=_coalescedTimers;
@property(retain, nonatomic) NSMutableDictionary *coalescedKeys; // @synthesize coalescedKeys=_coalescedKeys;
@property(retain, nonatomic) NSMutableDictionary *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(retain, nonatomic) NSCountedSet *delayedKeys; // @synthesize delayedKeys=_delayedKeys;
@property(copy, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy, nonatomic) _UIStatusBarData *overlayData; // @synthesize overlayData=_overlayData;
@property(readonly, copy, nonatomic) NSSet *coalescedEntryKeys;
- (void)endCoalescingUpdatesForEntryKeys:(id)arg1;	// IMP=0x0000000000f9bb1c
- (void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2;	// IMP=0x0000000000f9b93f
- (void)_coalescedUpdateForEntryKeys:(id)arg1;	// IMP=0x0000000000f9b72d
- (void)_updateForCoalescedKeysWithData:(id)arg1;	// IMP=0x0000000000f9b3b1
@property(readonly, copy, nonatomic) NSSet *delayedEntryKeys;
- (void)endDelayingUpdatesForEntryKeys:(id)arg1;	// IMP=0x0000000000f9b0b7
- (void)beginDelayingUpdatesForEntryKeys:(id)arg1;	// IMP=0x0000000000f9af5e
- (void)_updateForDelayedKeysWithData:(id)arg1;	// IMP=0x0000000000f9aeb7
- (void)_updateForOverlayWithData:(id)arg1;	// IMP=0x0000000000f9ae61
- (void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f9aaeb
- (id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2;	// IMP=0x0000000000f9a7df
- (void)updateWithData:(id)arg1;	// IMP=0x0000000000f9a784
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f9a676

@end

