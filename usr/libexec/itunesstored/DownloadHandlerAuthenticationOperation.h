//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class DownloadSessionProperties, NSObject, NSString, NSURLCredential;
@protocol OS_dispatch_semaphore;

@interface DownloadHandlerAuthenticationOperation : ISOperation
{
    CDUnknownBlockType _outputBlock;	// 96 = 0x60
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 104 = 0x68
    long long _sessionID;	// 112 = 0x70
    DownloadSessionProperties *_sessionProperties;	// 120 = 0x78
    long long _state;	// 128 = 0x80
    NSURLCredential *_urlCredential;	// 136 = 0x88
}

- (void)_setURLCredential:(id)arg1;	// IMP=0x002000000017e44f
- (void)_setState:(long long)arg1;	// IMP=0x001000000017e400
- (id)_openSession;	// IMP=0x001000000017e18c
- (void)downloadHandlerManager:(id)arg1 sessionsDidChange:(id)arg2;	// IMP=0x001000000017dfb9
- (void)run;	// IMP=0x001000000017da9e
- (void)cancel;	// IMP=0x001000000017da16
@property(readonly) NSURLCredential *URLCredential;
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) DownloadSessionProperties *sessionProperties;
@property(readonly) long long downloadSessionState;
- (void)dealloc;	// IMP=0x001000000017d835
- (id)initWithSessionProperties:(id)arg1;	// IMP=0x001000000017d7c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

