//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURL, NSURLSession;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryRequestSession : NSObject
{
    _Bool _cacheIPAddress;	// 8 = 0x8
    NSURLSession *_URLSession;	// 16 = 0x10
    NSOperationQueue *_requestQueue;	// 24 = 0x18
    NSOperationQueue *_completionQueue;	// 32 = 0x20
    NSURL *_serverURL;	// 40 = 0x28
    NSURL *_serverIPURL;	// 48 = 0x30
    NSString *_baseIPAddress;	// 56 = 0x38
}

+ (_Bool)_isNSURLCancelledError:(id)arg1;	// IMP=0x00600000000ac82b
+ (id)_serverURLWithHost:(id)arg1 port:(unsigned long long)arg2;	// IMP=0x00600000000ac77e
+ (id)_ipAddressFromPeerAddressData:(id)arg1 hostName:(id)arg2;	// IMP=0x00600000000ac486
+ (id)new;	// IMP=0x00600000000ab484
- (void).cxx_destruct;	// IMP=0x00000000000ac959
@property(nonatomic) _Bool cacheIPAddress; // @synthesize cacheIPAddress=_cacheIPAddress;
@property(copy, nonatomic) NSString *baseIPAddress; // @synthesize baseIPAddress=_baseIPAddress;
@property(copy, nonatomic) NSURL *serverIPURL; // @synthesize serverIPURL=_serverIPURL;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(retain, nonatomic) NSOperationQueue *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (void)_updateBaseIPAddressWithResponse:(id)arg1;	// IMP=0x00000000000ac2a0
- (id)_handleRequestError:(id)arg1 request:(id)arg2;	// IMP=0x00000000000ac1b9
- (void)cancelAllRequests;	// IMP=0x00000000000ac17c
- (id)enqueueRequest:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ab912
@property(readonly, copy, nonatomic) NSURL *baseURL;
- (void)clearCachedIPAddress;	// IMP=0x00000000000ab804
- (void)setHostName:(id)arg1 andPort:(unsigned long long)arg2;	// IMP=0x00000000000ab744
- (void)dealloc;	// IMP=0x00000000000ab6db
- (id)initWithMaxConcurrentConnections:(unsigned long long)arg1;	// IMP=0x00000000000ab522
- (id)init;	// IMP=0x00000000000ab4b3

@end

