//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface RefreshITunesMatchDownloadOperation : ISOperation
{
    long long _downloadID;	// 96 = 0x60
}

- (_Bool)_refreshDownload:(id)arg1 error:(id *)arg2;	// IMP=0x00200000001a437d
- (id)_newPurchaseForDownload:(id)arg1;	// IMP=0x00100000001a4293
- (_Bool)_applyResultsOfOperation:(id)arg1 toDownload:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001a3d1e
- (void)run;	// IMP=0x00100000001a3acc
@property(readonly) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;	// IMP=0x00100000001a3a77

@end

