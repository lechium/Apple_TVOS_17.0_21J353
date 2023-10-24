//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIView;

__attribute__((visibility("hidden")))
@interface _UIFocusCastingController : NSObject
{
    _Bool _isRememberingEntryPoint;	// 8 = 0x8
    UIFocusSystem *_focusSystem;	// 16 = 0x10
    double _entryPointMemorizationTimeout;	// 24 = 0x18
    unsigned long long _entryPointAxis;	// 32 = 0x20
    UIView *_focusMovementIndicator;	// 40 = 0x28
    UIView *_focusEntryIndicator;	// 48 = 0x30
    UIView *_focusCastingIndicator;	// 56 = 0x38
    struct CGPoint _screenEntryPoint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000e5ea48
@property(retain, nonatomic) UIView *focusCastingIndicator; // @synthesize focusCastingIndicator=_focusCastingIndicator;
@property(retain, nonatomic) UIView *focusEntryIndicator; // @synthesize focusEntryIndicator=_focusEntryIndicator;
@property(retain, nonatomic) UIView *focusMovementIndicator; // @synthesize focusMovementIndicator=_focusMovementIndicator;
@property(nonatomic) _Bool isRememberingEntryPoint; // @synthesize isRememberingEntryPoint=_isRememberingEntryPoint;
@property(nonatomic) unsigned long long entryPointAxis; // @synthesize entryPointAxis=_entryPointAxis;
@property(nonatomic) struct CGPoint screenEntryPoint; // @synthesize screenEntryPoint=_screenEntryPoint;
@property(nonatomic) double entryPointMemorizationTimeout; // @synthesize entryPointMemorizationTimeout=_entryPointMemorizationTimeout;
@property(nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void)_destroyFocusMovementIndicator;	// IMP=0x0000000000e5e81a
- (void)_positionFocusMovementIndicators;	// IMP=0x0000000000e5e276
- (void)_createFocusMovementIndicator;	// IMP=0x0000000000e5dcb1
- (void)_updateFocusMovementIndicatorDisplay;	// IMP=0x0000000000e5dc83
- (void)focusEffectsController:(id)arg1 updateMovementDirection:(struct CGVector)arg2;	// IMP=0x0000000000e5dc71
- (id)_focusEffectsControllerForFocusedItem;	// IMP=0x0000000000e5dba9
- (struct CGPoint)_movementPointInNormalizedFrame:(struct CGRect)arg1;	// IMP=0x0000000000e5db1a
- (struct CGPoint)_entryPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;	// IMP=0x0000000000e5d9bc
- (void)forgetEntryPoint;	// IMP=0x0000000000e5d8de
- (void)_startRememberingEntryPoint;	// IMP=0x0000000000e5d878
- (void)_stopRememberingEntryPoint;	// IMP=0x0000000000e5d833
- (struct CGPoint)_castingPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;	// IMP=0x0000000000e5d7ea
- (unsigned long long)_axisForHeading:(unsigned long long)arg1;	// IMP=0x0000000000e5d7d0
- (void)_updateFocusItemFromNormalizedFrame:(struct CGRect)arg1 toNormalizedFrame:(struct CGRect)arg2 withHeading:(unsigned long long)arg3;	// IMP=0x0000000000e5d33c
- (struct CGRect)_castingFrameForFocusedNormalizedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2;	// IMP=0x0000000000e5d0c0
- (id)_normalizedCoordinateSpace;	// IMP=0x0000000000e5d03c
- (void)forceUpdateFocusCastingFocusedRect:(struct CGRect)arg1 coordinateSpace:(id)arg2 heading:(unsigned long long)arg3;	// IMP=0x0000000000e5ceb8
- (struct CGRect)castingFrameForFocusedItem:(id)arg1 heading:(unsigned long long)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x0000000000e5cc98
- (void)updateFocusCastingWithContext:(id)arg1;	// IMP=0x0000000000e5ca0e
- (void)teardown;	// IMP=0x0000000000e5c9fc
- (id)init;	// IMP=0x0000000000e5c9a3

@end
