//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RPCompanionLinkClient, _DDUIRapportDevice;
@protocol DDUIDevice;

__attribute__((visibility("hidden")))
@interface _DDUIRapportIncomingTransportSession : NSObject
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    NSString *_destinationID;	// 24 = 0x18
    CDUnknownBlockType _messageHandler;	// 32 = 0x20
    unsigned long long _sessionType;	// 40 = 0x28
    _DDUIRapportDevice *_cachedDevice;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000251f
@property(retain, nonatomic) _DDUIRapportDevice *cachedDevice; // @synthesize cachedDevice=_cachedDevice;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (void)invalidate;	// IMP=0x00000000000023d7
- (void)sendMessage:(id)arg1 withTimeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001ebf
- (void)sendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001eaa
- (void)activateWithErrorHandler:(CDUnknownBlockType)arg1 messageHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001dc4
- (void)generateNetworkEndpointIdentifierForRemoteDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001db2
@property(readonly, nonatomic) id <DDUIDevice> remoteDevice;
- (id)initWithOptions:(id)arg1;	// IMP=0x0000000000001b9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

