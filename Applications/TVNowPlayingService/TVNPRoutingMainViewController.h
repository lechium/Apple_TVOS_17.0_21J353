//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MPRouteLabel, NSString, PBSAssertion, TVNPGroupableRoutingController, TVNPRoutingDestinationsCollectionViewController, TVNPRoutingRoutesCollectionViewController, UILabel;
@protocol TVNPRoutingMainViewControllerDelegate;

@interface TVNPRoutingMainViewController : UIViewController
{
    _Bool _editingVolume;	// 8 = 0x8
    id <TVNPRoutingMainViewControllerDelegate> _delegate;	// 16 = 0x10
    PBSAssertion *_playPauseAssertion;	// 24 = 0x18
    MPRouteLabel *_titleView;	// 32 = 0x20
    UILabel *_hintView;	// 40 = 0x28
    TVNPRoutingDestinationsCollectionViewController *_destinationsCollectionViewController;	// 48 = 0x30
    TVNPRoutingRoutesCollectionViewController *_routesCollectionViewController;	// 56 = 0x38
    TVNPGroupableRoutingController *_routingController;	// 64 = 0x40
}

+ (id)_destinationLayout;	// IMP=0x0020000000029540
- (void).cxx_destruct;	// IMP=0x002000000002a0c0
@property(readonly, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) TVNPRoutingRoutesCollectionViewController *routesCollectionViewController; // @synthesize routesCollectionViewController=_routesCollectionViewController;
@property(readonly, nonatomic) TVNPRoutingDestinationsCollectionViewController *destinationsCollectionViewController; // @synthesize destinationsCollectionViewController=_destinationsCollectionViewController;
@property(readonly, nonatomic) UILabel *hintView; // @synthesize hintView=_hintView;
@property(readonly, nonatomic) MPRouteLabel *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) PBSAssertion *playPauseAssertion; // @synthesize playPauseAssertion=_playPauseAssertion;
@property(readonly, nonatomic) _Bool editingVolume; // @synthesize editingVolume=_editingVolume;
@property(nonatomic) __weak id <TVNPRoutingMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_routesLayout;	// IMP=0x00100000000299a0
- (void)_updateHintText;	// IMP=0x00100000000281d0
- (void)_updateTitleView;	// IMP=0x0010000000028120
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000027ff0
- (void)didPressMute:(id)arg1;	// IMP=0x0010000000027d00
- (void)didPressPlayPause:(id)arg1;	// IMP=0x0010000000027c60
- (void)didPressMenu:(id)arg1;	// IMP=0x0010000000027bc0
- (void)routingViewController:(id)arg1 shareAudioPresentationRequested:(id)arg2;	// IMP=0x0010000000027b30
- (void)routingViewControllerWillEndEditingVolume:(id)arg1;	// IMP=0x0010000000027ab0
- (void)routingViewControllerWillBeginEditingVolume:(id)arg1;	// IMP=0x0010000000027a30
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x00100000000279a0
- (id)preferredFocusEnvironments;	// IMP=0x0010000000027920
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000278b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000027840
- (void)viewDidLoad;	// IMP=0x00100000000266b0
- (void)dealloc;	// IMP=0x0010000000026530
- (id)initWithRoutingController:(id)arg1 options:(id)arg2;	// IMP=0x0010000000025bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

