//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVNPDataImageLoader;

@interface TVNPMediaItem : TVPBaseMediaItem
{
    TVNPDataImageLoader *_imageLoader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000025b80
@property(retain, nonatomic) TVNPDataImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x0010000000025930
- (void)replaceMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000025880

@end

