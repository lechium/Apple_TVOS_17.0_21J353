//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, PBApplication, UIApplicationSceneSettingsDiffInspector, UIBezierPath, UIImageView, UILabel, UIVisualEffectView;
@protocol PBAppIconProviding, UIScenePresentation;

@interface PBSplitViewPresentationView : UIView
{
    _Bool _scenePresentationViewHidden;	// 8 = 0x8
    PBApplication *_application;	// 16 = 0x10
    UIView<UIScenePresentation> *_scenePresentationView;	// 24 = 0x18
    id <PBAppIconProviding> _applicationIconProvider;	// 32 = 0x20
    UIView *_backgroundView;	// 40 = 0x28
    UIVisualEffectView *_shroudView;	// 48 = 0x30
    UIImageView *_iconImageView;	// 56 = 0x38
    UILabel *_titleView;	// 64 = 0x40
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;	// 72 = 0x48
    UIBezierPath *_shadowPath;	// 80 = 0x50
    struct UIEdgeInsets _scenePresentationInsets;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000000678a
@property(nonatomic) struct UIEdgeInsets scenePresentationInsets; // @synthesize scenePresentationInsets=_scenePresentationInsets;
@property(retain, nonatomic) UIView<UIScenePresentation> *scenePresentationView; // @synthesize scenePresentationView=_scenePresentationView;
@property(retain, nonatomic) PBApplication *application; // @synthesize application=_application;
- (void)_updateShadowPath;	// IMP=0x001000000000660b
- (void)_layoutSubviewsForHiddenState:(_Bool)arg1;	// IMP=0x001000000000637b
- (void)_userInterfaceLayoutDirectionChanged:(id)arg1;	// IMP=0x0010000000006368
- (void)_updateShroudAnimated:(_Bool)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000061a4
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;	// IMP=0x0010000000005fe4
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x0010000000005fc7
- (void)layoutSubviews;	// IMP=0x0010000000005f7b
- (long long)effectiveUserInterfaceLayoutDirection;	// IMP=0x0010000000005f30
- (void)setScenePresentationViewHidden:(_Bool)arg1 animated:(_Bool)arg2 animationSettings:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005d78
- (void)dealloc;	// IMP=0x00100000000058c1
- (id)initWithApplicationIconProvider:(id)arg1;	// IMP=0x0010000000004ce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

