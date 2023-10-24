//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSDictionary;
@protocol VUINowPlayingTabControllerDelegate;

@protocol VUINowPlayingTabController <NSObject>
- (double)nowPlayingTabHeight;
- (void)setNowPlayingTabContextData:(NSDictionary *)arg1;
- (NSDictionary *)getNowPlayingTabContextData;
- (void)setNowPlayingTabDelegate:(id <VUINowPlayingTabControllerDelegate>)arg1;
@end

