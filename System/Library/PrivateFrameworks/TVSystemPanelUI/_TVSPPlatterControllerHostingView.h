//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TVSPPlatterController, _TVSPPlatterBackgroundView;

__attribute__((visibility("hidden")))
@interface _TVSPPlatterControllerHostingView : UIView
{
    _Bool _hasConfiguredHierarchy;	// 8 = 0x8
    TVSPPlatterController *_platterController;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    _TVSPPlatterBackgroundView *_backgroundView;	// 32 = 0x20
    NSString *_accessibilityIdentifier;	// 40 = 0x28
    UIView *_lastFocusedView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000068fa0
@property(retain, nonatomic) UIView *lastFocusedView; // @synthesize lastFocusedView=_lastFocusedView;
@property(nonatomic) _Bool hasConfiguredHierarchy; // @synthesize hasConfiguredHierarchy=_hasConfiguredHierarchy;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) _TVSPPlatterBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) TVSPPlatterController *platterController; // @synthesize platterController=_platterController;
- (id)rendererHostingViewFromView:(id)arg1;	// IMP=0x0000000000068cb0
- (void)configureHierarchyIncludingPlatterBackground:(_Bool)arg1;	// IMP=0x0000000000068850
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000068510
- (id)preferredFocusEnvironments;	// IMP=0x0000000000068410
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000067f70
- (void)layoutSubviews;	// IMP=0x0000000000067e60
- (void)didActivate;	// IMP=0x0000000000067e10
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000067cd0
- (id)initWithPlattterController:(id)arg1 frame:(struct CGRect)arg2 hasPlatterBackground:(_Bool)arg3;	// IMP=0x0000000000067bc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

