//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAnimatablePropertyBase.h"

@class NSObject, UIViewInProcessAnimationState, UIViewRunningAnimationEntry, _UIViewAnimatablePropertyTransformer;
@protocol OS_dispatch_queue, UIVectorOperatable, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface UIAnimatableProperty : UIAnimatablePropertyBase
{
    _UIViewAnimatablePropertyTransformer *_transformer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_animationEntryLockingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_invalidationLockingQueue;	// 24 = 0x18
    UIViewRunningAnimationEntry *_animationEntry;	// 32 = 0x20
    id <UIVectorOperatable> _pendingTargetVelocity;	// 40 = 0x28
    id <UIVectorOperatable> _pendingVelocity;	// 48 = 0x30
    struct os_unfair_lock_s _valueLock;	// 56 = 0x38
    _Bool _invalidated;	// 60 = 0x3c
    _Bool _velocityUsableForVFD;	// 61 = 0x3d
    int _ownershipCount;	// 64 = 0x40
    id _value;	// 72 = 0x48
    id _presentationValue;	// 80 = 0x50
    id <UIViewAnimationComposing> _composer;	// 88 = 0x58
    UIViewInProcessAnimationState *_animationState;	// 96 = 0x60
    CDUnknownBlockType _invalidationCallback;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000130266d
@property(nonatomic, getter=isVelocityUsableForVFD) _Bool velocityUsableForVFD; // @synthesize velocityUsableForVFD=_velocityUsableForVFD;
@property(copy, nonatomic) CDUnknownBlockType invalidationCallback; // @synthesize invalidationCallback=_invalidationCallback;
@property(nonatomic) int ownershipCount; // @synthesize ownershipCount=_ownershipCount;
@property(nonatomic) __weak UIViewInProcessAnimationState *animationState; // @synthesize animationState=_animationState;
@property(retain, nonatomic) id <UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (id)debugDescription;	// IMP=0x00000000013024bb
- (id)transformer;	// IMP=0x00000000013024a6
- (void)setTransformer:(id)arg1;	// IMP=0x0000000001302492
- (void)invalidateAndStopImmediately:(_Bool)arg1;	// IMP=0x0000000001302322
- (void)invalidate;	// IMP=0x000000000130230b
- (_Bool)_performAnimationFromCurrentValue:(id)arg1;	// IMP=0x0000000001302092
@property(retain) id presentationValue; // @synthesize presentationValue=_presentationValue;
@property(retain) id value; // @synthesize value=_value;
- (id)velocityTarget:(_Bool)arg1;	// IMP=0x0000000001301c47
@property(nonatomic) id velocity;
- (void)setVelocity:(id)arg1 target:(_Bool)arg2;	// IMP=0x000000000130190b
@property(retain, nonatomic) UIViewRunningAnimationEntry *animationEntry;
- (void)invalidateIfPossible;	// IMP=0x00000000013016d4
- (id)initWithInvalidationCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000130160d
- (_Bool)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(CDUnknownBlockType)arg3 newValueCallback:(CDUnknownBlockType)arg4 removedCallback:(CDUnknownBlockType)arg5;	// IMP=0x0000000001301522

@end
