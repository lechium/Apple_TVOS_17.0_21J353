//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSOSUpdateDownload;

@interface DMDSUStatus : NSObject
{
    PBSOSUpdateDownload *_download;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006c052
@property(retain, nonatomic) PBSOSUpdateDownload *download; // @synthesize download=_download;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) double downloadPercentComplete;
@property(readonly, nonatomic) _Bool isDownloadComplete;
@property(readonly, nonatomic) _Bool isDownloading;
@property(readonly, nonatomic) _Bool isInstalling;

@end

