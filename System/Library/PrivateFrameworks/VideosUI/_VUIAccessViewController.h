//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, VUIAccessView_tvOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController
{
    VUIAccessView_tvOS *_accessView;	// 8 = 0x8
    VUIAppSpinnerView *_loadingView;	// 16 = 0x10
    NSArray *_channels;	// 24 = 0x18
    NSMutableArray *_bundleIDs;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    _Bool _hasCalledCompletion;	// 48 = 0x30
    NSArray *_appInfos;	// 56 = 0x38
    NSArray *_appChannels;	// 64 = 0x40
    NSMutableArray *_channelIds;	// 72 = 0x48
    _Bool _shouldDenyOnCancel;	// 80 = 0x50
    CDUnknownBlockType _completionHandler;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000024d0b1
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)preferredFocusEnvironments;	// IMP=0x000000000024cf81
- (id)cappedTraitCollection;	// IMP=0x000000000024cd53
- (id)_watchListAppIcon;	// IMP=0x000000000024cd06
- (void)_fetchRemoteAppInfo;	// IMP=0x000000000024c3bb
- (id)_imageForBundleID:(id)arg1;	// IMP=0x000000000024c364
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000024c1d0
- (void)_toggleLoadingScreen;	// IMP=0x000000000024c0f6
- (void)_setupAccessViews;	// IMP=0x000000000024b437
- (void)_completeWithStatus:(unsigned long long)arg1;	// IMP=0x000000000024b2f9
- (void)_handleNackButton:(id)arg1;	// IMP=0x000000000024b1ed
- (void)_handleMenuGesture:(id)arg1;	// IMP=0x000000000024b001
- (void)_handleSeeAllButton:(id)arg1;	// IMP=0x000000000024ae48
- (void)_disallow:(id)arg1;	// IMP=0x000000000024a935
- (void)_allow:(id)arg1;	// IMP=0x000000000024a4cd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000024a2e1
- (void)viewDidLoad;	// IMP=0x0000000000249f0c
- (void)_init;	// IMP=0x000000000024978b
- (id)init;	// IMP=0x000000000024974c
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002495c2

@end

