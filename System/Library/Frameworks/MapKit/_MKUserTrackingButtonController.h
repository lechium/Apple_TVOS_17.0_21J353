//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIActivityIndicatorView, UIImageView, _MKUserTrackingButton;
@protocol MKUserTrackingButtonTarget, MKUserTrackingView;

__attribute__((visibility("hidden")))
@interface _MKUserTrackingButtonController : NSObject
{
    id <MKUserTrackingButtonTarget> _target;	// 8 = 0x8
    id <MKUserTrackingView> _userTrackingView;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    _MKUserTrackingButton *_button;	// 40 = 0x28
    UIActivityIndicatorView *_activityIndicatorView;	// 48 = 0x30
    unsigned long long _buttonBehavior;	// 56 = 0x38
    unsigned long long _controlSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000086dd7
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property(nonatomic) unsigned long long buttonBehavior; // @synthesize buttonBehavior=_buttonBehavior;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <MKUserTrackingView> userTrackingView; // @synthesize userTrackingView=_userTrackingView;
- (void)_updateLoading;	// IMP=0x0000000000086b8d
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000086a7a
- (id)_contentAnimation;	// IMP=0x000000000008693a
- (id)_expandAnimation;	// IMP=0x0000000000086859
- (id)_shrinkAnimation;	// IMP=0x0000000000086752
- (void)_goToNextMode:(id)arg1;	// IMP=0x00000000000865fa
- (void)_updateState;	// IMP=0x000000000008653b
- (void)_reloadState;	// IMP=0x00000000000861ab
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x0000000000086153
- (_Bool)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x000000000008611d
- (void)_authorizationStatusChanged:(id)arg1;	// IMP=0x0000000000085a91
- (id)_activityIndicatorView;	// IMP=0x00000000000859e8
- (void)dealloc;	// IMP=0x0000000000085973
- (double)_symbolPointSize;	// IMP=0x0000000000085922
- (void)_updatePreferredSymbolConfiguration;	// IMP=0x00000000000857e9
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;	// IMP=0x0000000000085628

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

