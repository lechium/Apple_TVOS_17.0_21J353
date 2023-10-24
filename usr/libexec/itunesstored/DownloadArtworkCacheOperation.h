//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSURL;

@interface DownloadArtworkCacheOperation : ISOperation
{
    NSData *_artworkData;	// 96 = 0x60
    long long _downloadID;	// 104 = 0x68
    _Bool _isStoreDownload;	// 112 = 0x70
    NSURL *_thumbnailURL;	// 120 = 0x78
}

- (void)_setArtworkData:(id)arg1;	// IMP=0x00200000000c42fd
- (void)run;	// IMP=0x00100000000c3c84
- (id)artworkData;	// IMP=0x00100000000c3c2f
- (void)dealloc;	// IMP=0x00100000000c3bd7
- (id)initWithStoreDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2;	// IMP=0x00100000000c3b5b
- (id)initWithDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2;	// IMP=0x00100000000c3aeb

@end

