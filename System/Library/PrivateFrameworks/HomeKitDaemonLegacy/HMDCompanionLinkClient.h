//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCompanionLinkClient : NSObject
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000943c89
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (void)stop;	// IMP=0x0000000000943c1e
- (void)start;	// IMP=0x0000000000943bda
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)dealloc;	// IMP=0x000000000094387d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

