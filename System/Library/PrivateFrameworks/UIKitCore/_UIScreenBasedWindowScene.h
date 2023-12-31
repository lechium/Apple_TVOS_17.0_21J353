//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindowScene.h"

@class NSMutableSet, UIMutableApplicationSceneSettings, UIScreen;
@protocol BSInvalidatable, NSCopying;

__attribute__((visibility("hidden")))
@interface _UIScreenBasedWindowScene : UIWindowScene
{
    id <NSCopying> _lookupKey;	// 24 = 0x18
    UIScreen *_screen;	// 32 = 0x20
    UIMutableApplicationSceneSettings *_synthesizedSettings;	// 40 = 0x28
    _Bool _invalidationEvaluatorRegistered;	// 48 = 0x30
    _Bool _needsInvalidation;	// 49 = 0x31
    id <BSInvalidatable> _screenDisconnectionPreventionAssertion;	// 56 = 0x38
    NSMutableSet *_autoInvalidationPreventionAssertions;	// 64 = 0x40
}

+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(_Bool)arg2;	// IMP=0x00600000002e40fe
+ (id)unassociationCacheAccessQueue;	// IMP=0x00600000002e40a7
+ (id)unassociationCache;	// IMP=0x00600000002e3f8d
+ (_Bool)autoInvalidates;	// IMP=0x00600000002e3f85
+ (_Bool)shouldAllowComponents;	// IMP=0x00600000002e3f7d
+ (_Bool)alwaysKeepContexts;	// IMP=0x00600000002e3f75
- (void).cxx_destruct;	// IMP=0x00000000002e64bb
- (void)_applyOverridesToHostedSceneSettings:(id)arg1;	// IMP=0x00000000002e63b8
- (void)_screenInterfaceOrientationChanged:(id)arg1;	// IMP=0x00000000002e62fe
- (void)_screenDisconnected:(id)arg1;	// IMP=0x00000000002e60e6
- (_Bool)_shouldAllowFencing;	// IMP=0x00000000002e60de
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e604c
- (void)setDelegate:(id)arg1;	// IMP=0x00000000002e6046
- (id)_displayInfoProvider;	// IMP=0x00000000002e5ff6
- (void)_detachWindow:(id)arg1;	// IMP=0x00000000002e5eab
- (void)_attachWindow:(id)arg1;	// IMP=0x00000000002e5e2c
- (id)_synthesizedSettings;	// IMP=0x00000000002e5c74
- (_Bool)_usesMinimumSafeAreaInsets;	// IMP=0x00000000002e5c6c
- (void)_setKeepContextAssociationInBackground:(_Bool)arg1;	// IMP=0x00000000002e5bd1
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;	// IMP=0x00000000002e5bb4
- (struct CGRect)_referenceBoundsForOrientation:(long long)arg1;	// IMP=0x00000000002e5b76
- (struct CGRect)_referenceBounds;	// IMP=0x00000000002e5b38
- (id)screen;	// IMP=0x00000000002e5af7
- (void)_addSubclassDebugDescriptionWithBuilder:(id)arg1;	// IMP=0x00000000002e588a
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)arg1;	// IMP=0x00000000002e57d3
- (void)_removeAutoInvalidationPreventionAssertion:(id)arg1;	// IMP=0x00000000002e51df
- (void)_invalidate;	// IMP=0x00000000002e4b50
- (id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3;	// IMP=0x00000000002e46bf

@end

