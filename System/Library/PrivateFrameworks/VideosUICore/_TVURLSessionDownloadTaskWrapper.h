//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSessionDownloadTask;

__attribute__((visibility("hidden")))
@interface _TVURLSessionDownloadTaskWrapper : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSURLSessionDownloadTask *_downloadTask;	// 16 = 0x10
    long long _downloadTaskID;	// 24 = 0x18
    long long _state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002e1df
- (void)cancel;	// IMP=0x000000000002e1a5
- (void)resumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002dc26
@property(readonly, nonatomic) long long state;
- (id)initWithURL:(id)arg1;	// IMP=0x000000000002dba1

@end

