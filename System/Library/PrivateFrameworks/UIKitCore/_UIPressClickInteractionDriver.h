//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIGestureRecognizer, UIView, _UISimplePressGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UIPressClickInteractionDriver : NSObject
{
    _Bool _cancelsTouchesInView;	// 8 = 0x8
    id <_UIClickInteractionDriverDelegate> _delegate;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
    double _allowableMovement;	// 32 = 0x20
    NSArray *_triggers;	// 40 = 0x28
    _UISimplePressGestureRecognizer *_pressGR;	// 48 = 0x30
}

+ (_Bool)prefersCancelsTouchesInView;	// IMP=0x0010000000666295
+ (_Bool)requiresForceCapability;	// IMP=0x001000000066628d
- (void).cxx_destruct;	// IMP=0x0000000000666b31
@property(retain, nonatomic) _UISimplePressGestureRecognizer *pressGR; // @synthesize pressGR=_pressGR;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(nonatomic) _Bool cancelsTouchesInView; // @synthesize cancelsTouchesInView=_cancelsTouchesInView;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UIClickInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000666a09
- (void)_handlePressGesture:(id)arg1;	// IMP=0x00000000006667bb
- (void)_removeFromView;	// IMP=0x0000000000666726
- (void)_addToView:(id)arg1;	// IMP=0x0000000000666588
@property(nonatomic) unsigned long long driverStyle;
- (void)cancelInteraction;	// IMP=0x000000000066646a
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x00000000006662e9
@property(readonly, nonatomic) unsigned long long inputPrecision;
@property(readonly, nonatomic) double maximumEffectProgress;
@property(readonly, nonatomic) _Bool clicksUpAutomaticallyAfterTimeout;
@property(readonly, nonatomic) _Bool isCurrentlyAcceleratedByForce;
@property(readonly, nonatomic) _Bool hasExceededAllowableMovement;
@property(readonly, nonatomic) double touchDuration;
@property(readonly, nonatomic) UIGestureRecognizer *primaryGestureRecognizer;
- (id)init;	// IMP=0x0000000000666001

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

