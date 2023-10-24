//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RPCompanionLinkClient;
@protocol DDUIDevice;

__attribute__((visibility("hidden")))
@interface _DDUIRapportOutgoingTransportSession : NSObject
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
    NSString *_serviceIdentifier;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    CDUnknownBlockType _messageHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000094c4
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (void)invalidate;	// IMP=0x00000000000093a4
- (void)sendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000938f
- (void)sendMessage:(id)arg1 withTimeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008f06
- (void)activateWithErrorHandler:(CDUnknownBlockType)arg1 messageHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000089be
- (void)handleIncomingMessage:(id)arg1 withMessageID:(id)arg2;	// IMP=0x00000000000088b8
- (void)generateNetworkEndpointIdentifierForRemoteDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000085f4
@property(readonly, nonatomic) id <DDUIDevice> remoteDevice;
- (id)initWithServiceIdentifier:(id)arg1;	// IMP=0x0000000000008441

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
