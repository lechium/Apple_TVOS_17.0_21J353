//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisibilityPropagationView.h"

@class FBSSceneSettings, FBSSceneSettingsDiffInspector, FBScene, NSHashTable, NSString, UIScenePresentationContext, UIView, _UISceneLayerHostContainerView, _UIScenePresenter;
@protocol UIScenePresenter;

__attribute__((visibility("hidden")))
@interface _UIScenePresentationView : _UIVisibilityPropagationView
{
    _UIScenePresenter *_presenter;	// 8 = 0x8
    FBScene *_scene;	// 16 = 0x10
    FBSSceneSettings *_effectiveSettings;	// 24 = 0x18
    UIScenePresentationContext *_currentPresentationContext;	// 32 = 0x20
    _UISceneLayerHostContainerView *_hostContainerView;	// 40 = 0x28
    UIView *_backgroundView;	// 48 = 0x30
    FBSSceneSettingsDiffInspector *_geometrySettingsDiffInspector;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    _Bool _invalidated;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000007b2b43
@property(retain, nonatomic) _UISceneLayerHostContainerView *hostContainerView; // @synthesize hostContainerView=_hostContainerView;
@property(retain, nonatomic) UIScenePresentationContext *currentPresentationContext; // @synthesize currentPresentationContext=_currentPresentationContext;
- (void)_updateFrameAndTransform;	// IMP=0x00000000007b2667
- (void)_geometryDidUpdateWithTransitionContext:(id)arg1;	// IMP=0x00000000007b25bf
- (void)_updateBackgroundColor;	// IMP=0x00000000007b2521
- (void)_updatePresentationContextFrom:(id)arg1 toContext:(id)arg2;	// IMP=0x00000000007b22e5
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000007b2179
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000007b2129
- (id)succinctDescriptionBuilder;	// IMP=0x00000000007b1e5d
- (id)succinctDescription;	// IMP=0x00000000007b1e0d
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;	// IMP=0x00000000007b1c42
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x00000000007b1c2e
- (void)sceneDidActivate:(id)arg1;	// IMP=0x00000000007b1af4
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;	// IMP=0x00000000007b19cc
- (id)presentationContextForSceneLayerHostContainerView;	// IMP=0x00000000007b19b7
- (id)identifier;	// IMP=0x00000000007b1971
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) __weak id <UIScenePresenter> presenter;
- (void)invalidate;	// IMP=0x00000000007b182b
- (id)preferredFocusEnvironments;	// IMP=0x00000000007b1790
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;	// IMP=0x00000000007b168f
- (void)didMoveToWindow;	// IMP=0x00000000007b14e1
- (void)removeObserver:(id)arg1;	// IMP=0x00000000007b1468
- (void)addObserver:(id)arg1;	// IMP=0x00000000007b1370
- (void)dealloc;	// IMP=0x00000000007b1170
- (id)initWithPresenter:(id)arg1;	// IMP=0x00000000007b0f05

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

