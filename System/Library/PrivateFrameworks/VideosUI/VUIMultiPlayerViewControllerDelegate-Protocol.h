//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class AVPlayerViewController, UIViewController;
@protocol VUIMultiPlayerDetailsViewController, VUIMultiPlayerViewController;

@protocol VUIMultiPlayerViewControllerDelegate <NSObject>
- (double)detailsViewHeightForMultiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerDidDisappear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didSwapPlayerViewControllerAtIndex:(long long)arg2 withPlayerAtIndex:(long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerWillDisappear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerDidAppear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 detailsViewControllerWillAppear:(UIViewController<VUIMultiPlayerDetailsViewController> *)arg2;
- (UIViewController<VUIMultiPlayerDetailsViewController> *)detailsViewControllerForMultiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didRemovePlayer:(AVPlayerViewController *)arg2 atIndex:(long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didDismissWithPlayerViewController:(AVPlayerViewController *)arg2 withReason:(unsigned long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 willDismissWithPlayerViewController:(AVPlayerViewController *)arg2 withReason:(unsigned long long)arg3;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didExitFullscreenWithPlayerViewController:(AVPlayerViewController *)arg2;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didEnterFullscreenWithPlayerViewController:(AVPlayerViewController *)arg2;
- (void)multiPlayerViewControllerDidPressMenu:(id <VUIMultiPlayerViewController>)arg1;
- (void)multiPlayerViewController:(id <VUIMultiPlayerViewController>)arg1 didFocusOnPlayerViewController:(AVPlayerViewController *)arg2;
@end

