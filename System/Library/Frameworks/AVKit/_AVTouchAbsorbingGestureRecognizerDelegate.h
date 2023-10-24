//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTouchAbsorbingGestureRecognizer, NSPointerArray, NSString;

__attribute__((visibility("hidden")))
@interface _AVTouchAbsorbingGestureRecognizerDelegate : NSObject
{
    NSPointerArray *_superViewGestureRecognizers;	// 8 = 0x8
    _Bool _shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers;	// 16 = 0x10
    AVTouchAbsorbingGestureRecognizer *_owningGestureRecognizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000124802
@property(nonatomic) __weak AVTouchAbsorbingGestureRecognizer *owningGestureRecognizer; // @synthesize owningGestureRecognizer=_owningGestureRecognizer;
@property(nonatomic) _Bool shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers; // @synthesize shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers=_shouldPreventPropagationOfTouchesToSuperViewGestureRecognizers;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;	// IMP=0x0000000000124708
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000001246b8
- (_Bool)_isSuperViewGesture:(id)arg1;	// IMP=0x00000000001244c4
- (void)cancelAllActiveSuperViewGestureRecognizersForEvent:(id)arg1;	// IMP=0x0000000000124492
- (void)cancelAllActiveSuperVuewGestureRecognizersWithoutEvent;	// IMP=0x0000000000124479
- (void)_callForEveryActiveSuperViewGestureRecognizer:(CDUnknownBlockType)arg1;	// IMP=0x000000000012439f
- (void)removeSuperviewGestureRecognizer:(id)arg1;	// IMP=0x0000000000124359
- (void)addSuperviewGestureRecognizer:(id)arg1;	// IMP=0x0000000000124300
- (long long)_indexOfGestureRecognizer:(id)arg1;	// IMP=0x0000000000124260
- (id)init;	// IMP=0x00000000001241fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

