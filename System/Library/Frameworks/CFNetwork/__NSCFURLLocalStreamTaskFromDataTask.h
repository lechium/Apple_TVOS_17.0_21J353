//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface __NSCFURLLocalStreamTaskFromDataTask
{
    struct __CFReadStream *_myReadToHisWrite;	// 416 = 0x1a0
    _Bool _myReadToHisWriteEOF;	// 424 = 0x1a8
    _Bool _myReadToHisWriteSignaled;	// 425 = 0x1a9
    CDStruct_59046461 _myReadToHisWriteError;	// 432 = 0x1b0
    struct __CFWriteStream *_myWriteToHisRead;	// 448 = 0x1c0
    _Bool _myWriteToHisReadEOF;	// 456 = 0x1c8
    _Bool _myWriteToHisReadSignaled;	// 457 = 0x1c9
    CDStruct_59046461 _myWriteToHisReadError;	// 464 = 0x1d0
    NSMutableArray *_myWriteToHisReadWork;	// 480 = 0x1e0
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000209d47
- (void)connection:(id)arg1 didReceiveTCPConnection:(shared_ptr_8da4e70b)arg2 extraBytes:(id)arg3;	// IMP=0x0000000000209d3e
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x0000000000209cea
- (void)connection:(id)arg1 alternatePathAvailable:(int)arg2;	// IMP=0x0000000000209cd9
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(_Bool)arg2;	// IMP=0x0000000000209cc8
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;	// IMP=0x0000000000209cb7
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000209c91
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;	// IMP=0x0000000000209c80
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000209be4
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000209bb9
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;	// IMP=0x0000000000209b55
- (void)connectionWillFinishLoading:(id)arg1;	// IMP=0x0000000000209b4f
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000209b3f
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000209b06
- (void)connection:(id)arg1 didReceiveInformationalResponse:(id)arg2;	// IMP=0x0000000000209af5
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamFromOffset:(long long)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000209acf
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000209aa9
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000209a83
- (void)dealloc;	// IMP=0x00000000002098df
- (id)initWithTask:(id)arg1 inputStream:(id)arg2 ouptutStream:(id)arg3 disavow:(CDUnknownBlockType)arg4;	// IMP=0x000000000020982b
- (id)initWithTask:(id)arg1 remainingInputStream:(id)arg2 remainingOutputStream:(id)arg3 disavow:(CDUnknownBlockType)arg4;	// IMP=0x0000000000209745
- (id)initWithTask:(id)arg1 disavow:(CDUnknownBlockType)arg2;	// IMP=0x0000000000209678

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

