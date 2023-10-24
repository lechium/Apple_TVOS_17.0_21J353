//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNetServiceBrowser, NSString;
@protocol OS_dispatch_source;

@interface SDDomainBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    _Bool _sendNotification;	// 12 = 0xc
    NSMutableSet *_domains;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
    struct __CFDictionary *_domainTree;	// 32 = 0x20
    NSNetServiceBrowser *_domainBrowser;	// 40 = 0x28
}

+ (id)sharedBrowser;	// IMP=0x00200000001394e2
- (void).cxx_destruct;	// IMP=0x002000000013a1fd
- (void)stop;	// IMP=0x001000000013a147
- (void)start;	// IMP=0x001000000013a023
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;	// IMP=0x0010000000139fc1
- (void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0010000000139f6f
- (void)netServiceBrowser:(id)arg1 didFindDomain:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0010000000139ec0
- (void)postNotification;	// IMP=0x0010000000139e65
- (void)buildNodes;	// IMP=0x0010000000139d3f
- (void)parseDomain:(id)arg1;	// IMP=0x0010000000139959
- (id)displayNameForDomain:(id)arg1;	// IMP=0x0010000000139759
- (id)childrenForNode:(struct __SFNode *)arg1;	// IMP=0x00100000001396be
- (void)restart;	// IMP=0x0010000000139662
- (void)scheduleBrowser;	// IMP=0x0010000000139612
- (void)statusChanged:(id)arg1;	// IMP=0x00100000001395f8
- (void)browseAfterDelay:(double)arg1;	// IMP=0x00100000001395d8
- (id)init;	// IMP=0x0010000000139537

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

