//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVHomeUI/NSObject-Protocol.h>

@class TVHMUIAllCamerasFullScreenViewController;

@protocol TVHMUIAllCamerasFullScreenViewControllerDismissalDelegate <NSObject>
- (void)allCamerasViewControllerDidRequestDismissal:(TVHMUIAllCamerasFullScreenViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;

@optional
- (void)allCamerasViewControllerDidPresentFullSCreenCamera:(TVHMUIAllCamerasFullScreenViewController *)arg1;
- (void)allCamerasViewControllerWillPresentFullScreenCamera:(TVHMUIAllCamerasFullScreenViewController *)arg1 completion:(void (^)(void))arg2;
@end
