//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVKit/NSObject-Protocol.h>

@class TVPPlayer, TVPVideoView, UIImage;

@protocol TVTransportBarThumbnailScrubbing <NSObject>
@property(readonly, nonatomic) TVPVideoView *scrubVideoView;
@property(readonly, nonatomic) long long scrubPreviewMode;
- (void)setScrubVideoPlayer:(TVPPlayer *)arg1;
- (void)setScrubImage:(UIImage *)arg1;
- (void)setScrubPreviewMode:(long long)arg1 animated:(_Bool)arg2;
@end

