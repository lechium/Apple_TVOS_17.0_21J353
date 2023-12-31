//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAutoRotatingWindow.h"

@protocol _UIRemoteInputViewHostWindowDelegate;

__attribute__((visibility("hidden")))
@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow
{
    id <_UIRemoteInputViewHostWindowDelegate> _hostWindowDelegate;	// 184 = 0xb8
}

+ (_Bool)_isSecure;	// IMP=0x006000000015942e
- (void).cxx_destruct;	// IMP=0x0000000000159599
@property(nonatomic) __weak id <_UIRemoteInputViewHostWindowDelegate> hostWindowDelegate; // @synthesize hostWindowDelegate=_hostWindowDelegate;
- (_Bool)inhibitSetupOrientation;	// IMP=0x00000000001594f7
- (long long)_orientationForSceneTransform;	// IMP=0x00000000001594ec
- (long long)_orientationForRootTransform;	// IMP=0x00000000001594e1
- (long long)_orientationForViewTransform;	// IMP=0x00000000001594d6
- (_Bool)_wantsSceneAssociation;	// IMP=0x00000000001594ce
- (_Bool)_isRemoteInputHostWindow;	// IMP=0x00000000001594c6
- (_Bool)_alwaysGetsContexts;	// IMP=0x00000000001594be
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x00000000001594b6
- (_Bool)_isHostedInAnotherProcess;	// IMP=0x00000000001594ae
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x00000000001594a6
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x00000000001594a0
- (id)firstResponder;	// IMP=0x0000000000159446
- (_Bool)canBecomeKeyWindow;	// IMP=0x000000000015943e
- (_Bool)isInternalWindow;	// IMP=0x0000000000159436
- (void)_didChangeKeyplaneWithContext:(id)arg1;	// IMP=0x00000000001593f1
- (id)initWithWindowScene:(id)arg1;	// IMP=0x0000000000159365

@end

