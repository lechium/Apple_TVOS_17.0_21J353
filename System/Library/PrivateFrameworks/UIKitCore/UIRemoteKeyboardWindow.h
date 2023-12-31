//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextEffectsWindow.h"

@class CAContext, FBSScene, FBSSceneIdentityToken, FBSSceneLayer, NSDictionary, NSString, UIScreen, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow
{
    NSDictionary *_perScreenOptions;	// 240 = 0xf0
    UIScreen *_intendedScreen;	// 248 = 0xf8
    _Bool _arePlaceholdersInitialised;	// 256 = 0x100
    FBSSceneLayer *_keyboardSceneLayer;	// 264 = 0x108
    FBSScene *_activeScene;	// 272 = 0x110
    _Bool _resetRequired;	// 280 = 0x118
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;	// IMP=0x0010000000c480a8
+ (_Bool)_isHostedInAnotherProcess;	// IMP=0x0010000000c480a0
- (void).cxx_destruct;	// IMP=0x0000000000c49475
- (void)_configureAlphaIfNecessary;	// IMP=0x0000000000c49380
- (void)dealloc;	// IMP=0x0000000000c4921f
- (long long)_orientationForClassicPresentation;	// IMP=0x0000000000c4920e
- (void)endDisablingInterfaceAutorotation;	// IMP=0x0000000000c491c0
- (void)resetScene;	// IMP=0x0000000000c4917e
- (void)_resetScene;	// IMP=0x0000000000c4911e
@property(readonly, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
- (void)detachBindable;	// IMP=0x0000000000c49088
- (_Bool)shouldDetachBindable;	// IMP=0x0000000000c48f70
- (void)attachBindable;	// IMP=0x0000000000c48d93
- (_Bool)shouldAttachBindable;	// IMP=0x0000000000c48cd7
- (id)_layerForCoordinateSpaceConversion;	// IMP=0x0000000000c48cc2
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x0000000000c48cbc
- (_Bool)_isTextEffectsWindowNotificationOwner;	// IMP=0x0000000000c48cb4
- (_Bool)_isRemoteKeyboardWindow;	// IMP=0x0000000000c48cac
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000c48c16
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;	// IMP=0x0000000000c48b18
- (void)setWindowLevel:(double)arg1;	// IMP=0x0000000000c48a6f
- (_Bool)_isFullscreen;	// IMP=0x0000000000c48a07
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x0000000000c489f5
- (long long)_orientationInSceneSpace;	// IMP=0x0000000000c4899c
- (_Bool)_canIgnoreInteractionEvents;	// IMP=0x0000000000c48994
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000000c4898c
- (_Bool)_isHostedInAnotherProcess;	// IMP=0x0000000000c48972
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x0000000000c4896a
- (_Bool)_wantsSceneAssociation;	// IMP=0x0000000000c48962
- (_Bool)_isAlwaysKeyboardWindow;	// IMP=0x0000000000c4895a
- (_Bool)isInternalWindow;	// IMP=0x0000000000c4886d
- (void)invalidate;	// IMP=0x0000000000c48851
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x0000000000c4881f
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x0000000000c486fd
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x0000000000c4850b

// Remaining properties
@property(readonly, nonatomic) CDStruct_b73e569c _bindingDescription;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

