//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVPRelatedContent, UIGestureRecognizer;
@protocol TVPRelatedContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface TVPRelatedContentViewController : UIViewController
{
    _Bool _appearingFor27640396;	// 8 = 0x8
    id <TVPRelatedContentViewControllerDelegate> _delegate;	// 16 = 0x10
    UIViewController *_primaryViewController;	// 24 = 0x18
    TVPRelatedContent *_relatedContent;	// 32 = 0x20
    long long _preferredDisplayMode;	// 40 = 0x28
    long long _displayMode;	// 48 = 0x30
    UIGestureRecognizer *_interactionGestureRecognizer;	// 56 = 0x38
    unsigned long long _numberOfAppearanceTransitions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000020e0f
@property(nonatomic, getter=isAppearingFor27640396) _Bool appearingFor27640396; // @synthesize appearingFor27640396=_appearingFor27640396;
@property(nonatomic) unsigned long long numberOfAppearanceTransitions; // @synthesize numberOfAppearanceTransitions=_numberOfAppearanceTransitions;
@property(retain, nonatomic) UIGestureRecognizer *interactionGestureRecognizer; // @synthesize interactionGestureRecognizer=_interactionGestureRecognizer;
@property(readonly, nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) long long preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
@property(retain, nonatomic) TVPRelatedContent *relatedContent; // @synthesize relatedContent=_relatedContent;
@property(retain, nonatomic) UIViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
@property(nonatomic) __weak id <TVPRelatedContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000020be1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000020a64
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000208ff
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000020764
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x000000000002075c
- (void)viewDidLoad;	// IMP=0x0000000000020483
- (void)loadView;	// IMP=0x00000000000203c9
- (id)preferredFocusEnvironments;	// IMP=0x000000000002021b
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;	// IMP=0x0000000000020128
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000001ff61
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000001ff03
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000001feea
- (void)setPreferredDisplayMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001fe43
- (void)setRelatedContent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001fdb9
- (void)_menuButtonTapRecognized:(id)arg1;	// IMP=0x000000000001fbe0
- (void)_userInteractionBegan:(id)arg1;	// IMP=0x000000000001fb5f
- (long long)_actualDisplayModeForPreferredDisplayMode:(long long)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000001fb1d
- (void)_setDisplayMode:(long long)arg1 relatedContent:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001e96a
- (id)_visibleViewControllers;	// IMP=0x000000000001e8f9
- (void)_augmentOverrideTraitCollectionForChildViewController:(id)arg1 withContentType:(long long)arg2;	// IMP=0x000000000001e7b7
- (id)_viewControllersForDisplayMode:(long long)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000001e685
- (void)_performViewAnimations:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e5a3
- (double)_heightForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(long long)arg3 parentContainerSize:(struct CGSize)arg4;	// IMP=0x000000000001e458
- (double)_widthForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(long long)arg3 parentContainerSize:(struct CGSize)arg4;	// IMP=0x000000000001e323
- (id)_viewControllerForContentType:(long long)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000001e2a3
- (long long)_contentTypeForContainer:(id)arg1 withRelatedContent:(id)arg2;	// IMP=0x000000000001e1b1
- (double)_presentationProgressForDisplayMode:(long long)arg1;	// IMP=0x000000000001e19b
- (void)_didTransitionToDisplayMode:(long long)arg1;	// IMP=0x000000000001e062
- (void)_willTransitionToDisplayMode:(long long)arg1;	// IMP=0x000000000001e000
- (void)_decrementNumberOfAppearanceTransitions;	// IMP=0x000000000001dfce
- (void)_incrementNumberOfAppearanceTransitions;	// IMP=0x000000000001df9c
- (id)_relatedContentView;	// IMP=0x000000000001df8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

