//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSString, PBPIPContainerViewControllerLayout, PBPIPSwapPortalClippingView, UIView;

@interface PBPIPSwapAnimationBaseTransaction : BSTransaction
{
    PBPIPSwapPortalClippingView *_currentFullscreenPortalView;	// 8 = 0x8
    PBPIPSwapPortalClippingView *_currentPIPPortalView;	// 16 = 0x10
    PBPIPSwapPortalClippingView *_destinationFullscreenContentPortalView;	// 24 = 0x18
    PBPIPSwapPortalClippingView *_destinationPIPContentPortalView;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    PBPIPContainerViewControllerLayout *_destinationFullscreenLayout;	// 48 = 0x30
    PBPIPContainerViewControllerLayout *_destinationPIPLayout;	// 56 = 0x38
    UIView *_backgroundView;	// 64 = 0x40
    struct CGRect _destinationFullscreenFrame;	// 72 = 0x48
    struct CGRect _destinationPIPFrame;	// 104 = 0x68
}

+ (id)_animationGroupWithAnimations:(id)arg1;	// IMP=0x00100000001ce8a2
+ (id)_cubicAnimationForKeyPath:(id)arg1;	// IMP=0x00100000001ce7c4
+ (id)_springAnimationForKeyPath:(id)arg1;	// IMP=0x00100000001ce6fb
+ (id)_springAnimationSettings;	// IMP=0x00100000001ce6b9
+ (id)_springAnimationForScaleY;	// IMP=0x00100000001ce68f
+ (id)_springAnimationForScaleX;	// IMP=0x00100000001ce665
+ (id)_springAnimationForPositionY;	// IMP=0x00100000001ce63b
+ (id)_springAnimationForPositionX;	// IMP=0x00100000001ce611
+ (id)_springAnimationForCornerRadius;	// IMP=0x00100000001ce5e7
+ (id)_cubicAnimationForOpacity;	// IMP=0x00100000001ce5bd
+ (id)_springAnimationForOpacity;	// IMP=0x00100000001ce593
+ (id)_keyPathLayer;	// IMP=0x00100000001ce58b
- (void).cxx_destruct;	// IMP=0x00200000000c46f1
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) struct CGRect destinationPIPFrame; // @synthesize destinationPIPFrame=_destinationPIPFrame;
@property(readonly, nonatomic) PBPIPContainerViewControllerLayout *destinationPIPLayout; // @synthesize destinationPIPLayout=_destinationPIPLayout;
@property(readonly, nonatomic) struct CGRect destinationFullscreenFrame; // @synthesize destinationFullscreenFrame=_destinationFullscreenFrame;
@property(readonly, nonatomic) PBPIPContainerViewControllerLayout *destinationFullscreenLayout; // @synthesize destinationFullscreenLayout=_destinationFullscreenLayout;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)_destinationPIPViewController;	// IMP=0x00100000000c4611
- (id)_destinationFullscreenViewController;	// IMP=0x00100000000c45b5
- (struct CATransform3D)_destinationPIPScaleTransform;	// IMP=0x00100000000c457f
- (struct CATransform3D)_destinationFullscreenScaleTransform;	// IMP=0x00100000000c4549
- (struct CGSize)_destinationPIPScaleFactor;	// IMP=0x00100000000c4500
- (struct CGSize)_destinationFullscreenScaleFactor;	// IMP=0x00100000000c44b7
- (void)invalidate;	// IMP=0x00100000000c41d8
- (void)_begin;	// IMP=0x00100000000c406b
@property(readonly, nonatomic) UIView *destinationPIPPortalView;
@property(readonly, nonatomic) UIView *destinationFullscreenPortalView;
@property(readonly, nonatomic) UIView *currentPIPPortalView;
@property(readonly, nonatomic) UIView *currentFullscreenPortalView;
@property(readonly, nonatomic) double defaultPIPCornerRadius;
- (void)dealloc;	// IMP=0x00100000000c38d6
- (id)initWithContainingView:(id)arg1 destinationFullscreenLayout:(id)arg2 destinationPIPLayout:(id)arg3 quadrant:(long long)arg4 currentPIPInsets:(struct UIEdgeInsets)arg5;	// IMP=0x00100000000c36db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

