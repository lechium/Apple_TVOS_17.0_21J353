//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPresentationController.h>

@class UIView;

@interface _PBOpaqueAlertPresentationController : UIPresentationController
{
    UIView *_opaqueView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000231d92
@property(readonly, nonatomic) UIView *opaqueView; // @synthesize opaqueView=_opaqueView;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;	// IMP=0x0010000000231b7a
- (void)_configureSubviews;	// IMP=0x0010000000231ab7
- (void)dismissalTransitionWillBegin;	// IMP=0x0010000000231a3c
- (void)presentationTransitionWillBegin;	// IMP=0x00100000002319be

@end
