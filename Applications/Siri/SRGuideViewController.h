//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUISnippetCollectionViewController.h>

@class NSCache, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSSet, NSString, SAGuidanceGuideSnippet, SRBigButtonController, UIImage;

@interface SRGuideViewController : SiriUISnippetCollectionViewController
{
    NSCache *_domainIconCache;	// 8 = 0x8
    NSDate *_startViewingTime;	// 16 = 0x10
    _Bool _showingDetails;	// 24 = 0x18
    NSSet *_siriEnabledAppList;	// 32 = 0x20
    SRBigButtonController *_bigButtonController;	// 40 = 0x28
    NSOperationQueue *_guideImageOperationQueue;	// 48 = 0x30
    NSMutableSet *_spawnedGuideImageFetches;	// 56 = 0x38
    UIImage *_fallbackImage;	// 64 = 0x40
    NSMutableArray *_enabledIntentSupportedAppSnippets;	// 72 = 0x48
    SAGuidanceGuideSnippet *_guideSnippet;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000788e
@property(retain, nonatomic, getter=_guideSnippet) SAGuidanceGuideSnippet *guideSnippet; // @synthesize guideSnippet=_guideSnippet;
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000007870
- (void)_prepareSiriEnabledAppList;	// IMP=0x00100000000075d2
- (_Bool)_hasTitle;	// IMP=0x0010000000007560
- (id)_fallbackImage;	// IMP=0x00100000000074c5
- (id)_iconImageForGuideDomainSnippet:(id)arg1;	// IMP=0x0010000000007201
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00100000000071eb
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00100000000070b7
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000006ef9
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000006ef1
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000006ee9
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000006e3f
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000000066fa
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x001000000000661b
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000006610
- (double)_heightOfRowForDomainSnippet:(id)arg1;	// IMP=0x001000000000652f
- (id)_domainSnippetForIndexPath:(id)arg1;	// IMP=0x00100000000064a0
- (id)_domainSnippetForEnabledIntentSupportedAppAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000006483
- (id)_domainSnippetForHelpDomainAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000006403
- (long long)_numberOfIntentEnabledApps;	// IMP=0x00100000000063e6
- (long long)_numberOfIntentSupportedApps;	// IMP=0x0010000000006378
- (long long)_numberOfHelpDomains;	// IMP=0x001000000000630a
- (long long)_pinAnimationType;	// IMP=0x00100000000062f4
- (_Bool)usePlatterStyle;	// IMP=0x00100000000062ec
- (_Bool)wantsToManageBackgroundColor;	// IMP=0x00100000000062e4
- (double)desiredHeightForTransparentHeaderView;	// IMP=0x001000000000621c
- (void)configureReusableTransparentHeaderView:(id)arg1;	// IMP=0x0010000000006195
- (Class)transparentHeaderViewClass;	// IMP=0x0010000000006167
- (void)_endTrackingGuideShowTimeIfNecessary;	// IMP=0x0010000000005fd3
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0010000000005de3
- (void)siriDidDeactivate;	// IMP=0x0010000000005dd1
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000005cbf
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000005b80
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000598f
- (void)loadView;	// IMP=0x00100000000057d8
- (id)_bigButtonViewController;	// IMP=0x00100000000056e5
- (void)setDelegate:(id)arg1;	// IMP=0x00100000000056a4
- (void)didReceiveMemoryWarning;	// IMP=0x001000000000565b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000000554c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
