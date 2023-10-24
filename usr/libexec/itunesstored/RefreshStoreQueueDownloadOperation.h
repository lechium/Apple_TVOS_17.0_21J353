//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface RefreshStoreQueueDownloadOperation : ISOperation
{
    long long _downloadID;	// 96 = 0x60
}

- (id)_URLBagKeyForDownload:(id)arg1;	// IMP=0x00200000001a1d21
- (_Bool)_refreshDownload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001a151b
- (void)run;	// IMP=0x00100000001a12c9
@property(readonly) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;	// IMP=0x00100000001a1274

@end
