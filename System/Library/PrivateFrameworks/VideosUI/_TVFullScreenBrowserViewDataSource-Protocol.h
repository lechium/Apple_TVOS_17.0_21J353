//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, _TVFullScreenBrowserView, _TVFullScreenBrowserViewCell;

@protocol _TVFullScreenBrowserViewDataSource <NSObject>
- (_TVFullScreenBrowserViewCell *)paradeView:(_TVFullScreenBrowserView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)paradeView:(_TVFullScreenBrowserView *)arg1 numberOfItemsForSection:(long long)arg2;

@optional
- (long long)numberOfSectionsInParadeView:(_TVFullScreenBrowserView *)arg1;
@end

