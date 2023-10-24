//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue, NSString, NSURLSession;
@protocol SWCDownloaderDelegate;

@interface SWCDownloader : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSURLSession *_sessions[4];	// 16 = 0x10
    NSMapTable *_allTaskStates;	// 48 = 0x30
    id <SWCDownloaderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0010000000004491
@property __weak id <SWCDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000003fc2
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000003e8a
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000318a
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000002d27
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002697
- (void)enumerateActiveAASAFileDownloadsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002362
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000221a
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000216f
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000202a
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001f7f
- (void)receiveSIGTERMSignal;	// IMP=0x0010000000001e38
- (id)init;	// IMP=0x0010000000001cbe
- (void)_invokeCompletionHandlerForState:(id)arg1 JSONObject:(id)arg2 error:(id)arg3;	// IMP=0x00100000000074b7
- (void)_processDownloadedDataForState:(id)arg1;	// IMP=0x0010000000006f64
- (id)_replaceTaskState:(id)arg1;	// IMP=0x0010000000006c2a
- (void)_resumePendingTasks;	// IMP=0x00100000000066ae
- (void)_enumerateTaskStatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000064bf
- (id)_URLRequestWithDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x0010000000005fe0
- (void)_downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 discretionary:(_Bool)arg4 completionHandlers:(id)arg5;	// IMP=0x00100000000054db
- (id)_taskStateForDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x001000000000520d
- (unsigned long long)_maximumActiveTaskCountForSessionID:(unsigned char)arg1;	// IMP=0x00100000000051ee
- (id)_sessionForTaskState:(id)arg1;	// IMP=0x0010000000004ff7
- (unsigned char)_sessionIDForTaskState:(id)arg1;	// IMP=0x0010000000004f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

