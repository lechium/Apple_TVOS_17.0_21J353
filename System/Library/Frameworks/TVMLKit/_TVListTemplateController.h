//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVBgImageLoadingViewController.h"

@class IKAudioElement, IKCollectionElement, IKImageElement, IKViewElement, NSString, UIView, UIViewController, _TVFocusCaptureView, _TVListViewController;

__attribute__((visibility("hidden")))
@interface _TVListTemplateController : _TVBgImageLoadingViewController
{
    IKViewElement *_templateElement;	// 8 = 0x8
    IKCollectionElement *_listElement;	// 16 = 0x10
    IKViewElement *_bannerElement;	// 24 = 0x18
    IKImageElement *_bgImageElement;	// 32 = 0x20
    IKAudioElement *_bgAudioElement;	// 40 = 0x28
    IKImageElement *_heroImageElement;	// 48 = 0x30
    UIView *_overlayView;	// 56 = 0x38
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;	// 64 = 0x40
    double _impressionThreshold;	// 72 = 0x48
    UIViewController *_focusedController;	// 80 = 0x50
    _TVListViewController *_listViewController;	// 88 = 0x58
    UIViewController *_previewViewController;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000071b0e
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(retain, nonatomic) _TVListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(retain, nonatomic) UIViewController *focusedController; // @synthesize focusedController=_focusedController;
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x0000000000071897
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x00000000000716ea
- (long long)_blurEffectStyle;	// IMP=0x00000000000716af
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x0000000000071688
- (id)_backgroundImageProxy;	// IMP=0x00000000000713ff
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x000000000007139b
- (void)_configureWithListElement:(id)arg1;	// IMP=0x0000000000070ffe
- (void)_configureWithBgElement:(id)arg1;	// IMP=0x0000000000070ae5
- (id)_listTemplateView;	// IMP=0x0000000000070ad3
- (void)listViewController:(id)arg1 didScrollWithScrollView:(id)arg2;	// IMP=0x00000000000709c7
- (void)listViewController:(id)arg1 updatePreviewViewController:(id)arg2;	// IMP=0x000000000007063b
- (void)_updateView;	// IMP=0x0000000000070064
- (id)preferredFocusEnvironments;	// IMP=0x000000000006fea9
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000006fc98
- (void)loadView;	// IMP=0x000000000006fbc1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000006faed
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000006f9e7
- (_Bool)setNeedsFocusUpdateToList;	// IMP=0x000000000006f902
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000006f681

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

