//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISceneDelegate-Protocol.h>

@class CKShareMetadata, UIApplicationShortcutItem, UITraitCollection, UIWindow, UIWindowScene;
@protocol UICoordinateSpace;

@protocol UIWindowSceneDelegate <UISceneDelegate>

@optional
@property(retain, nonatomic) UIWindow *window;
- (void)windowScene:(UIWindowScene *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (void)windowScene:(UIWindowScene *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)windowScene:(UIWindowScene *)arg1 didUpdateCoordinateSpace:(id <UICoordinateSpace>)arg2 interfaceOrientation:(long long)arg3 traitCollection:(UITraitCollection *)arg4;
@end

