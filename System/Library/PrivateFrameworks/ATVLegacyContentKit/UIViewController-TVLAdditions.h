//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, TVLDocument, TVLElement;

@interface UIViewController (TVLAdditions)
@property(nonatomic) __weak UIViewController *tvl_stateRestorationParentViewController;
@property(copy, nonatomic) NSString *tvl_stateRestorationIdentifier;
- (void)tvl_saveStateWithCoder:(id)arg1;	// IMP=0x00300000000849cb
- (void)tvl_restoreStateWithCoder:(id)arg1;	// IMP=0x00300000000849c5
- (void)reloadPage;	// IMP=0x0030000000084923
- (void)reloadForRefreshInterval;	// IMP=0x0030000000084700
- (void)reloadCurrentPage;	// IMP=0x0030000000084656
- (void)reloadOriginalURL;	// IMP=0x00300000000844f1
- (void)reloadVolatile;	// IMP=0x0030000000083e7e
- (void)didUpdateFeedElementRequiringUserInterfaceUpdate:(_Bool)arg1 previousElement:(id)arg2;	// IMP=0x0030000000083e78
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x0030000000083da5
- (_Bool)updatableWithFeedElement:(id)arg1;	// IMP=0x0030000000083d0a
@property(retain, nonatomic) TVLElement *currentFeedElement;
@property(copy, nonatomic) NSString *onRefresh;
@property(nonatomic) float refreshInterval;
@property(retain, nonatomic) NSURL *originalURL;
@property(copy, nonatomic) NSString *onVolatileReload;
@property(nonatomic) _Bool isVolatile;
@property(nonatomic) _Bool wasEverActivated;
@property(retain, nonatomic) TVLDocument *feedDocument;
@property(copy, nonatomic) CDUnknownBlockType wasPushedBlock;
@property(copy, nonatomic) CDUnknownBlockType wasPoppedBlock;
@property(copy, nonatomic) CDUnknownBlockType wasBuriedBlock;
@property(copy, nonatomic) CDUnknownBlockType wasExhumedBlock;
@end

