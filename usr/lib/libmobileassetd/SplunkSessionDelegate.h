//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadManager, NSString;

__attribute__((visibility("hidden")))
@interface SplunkSessionDelegate : NSObject
{
    DownloadManager *_downloadManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000133d2c
@property(readonly, nonatomic) DownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000133b7d
- (id)initWithDownloadManager:(id)arg1;	// IMP=0x0000000000133b12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
