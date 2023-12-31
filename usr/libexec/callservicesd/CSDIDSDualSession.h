//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDIDSTransport, NSNumber, NSString;
@protocol CSDIDSDualSessionDelegate, CSDIDSDualSessionProvider;

@interface CSDIDSDualSession
{
    _Bool _initiator;	// 8 = 0x8
    _Bool _hasStartedConnecting;	// 9 = 0x9
    _Bool _hasConnected;	// 10 = 0xa
    int _endedReason;	// 12 = 0xc
    int _state;	// 16 = 0x10
    id <CSDIDSDualSessionDelegate> _delegate;	// 24 = 0x18
    NSNumber *_remoteProtocolVersionNumber;	// 32 = 0x20
    id <CSDIDSDualSessionProvider> _sessionProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000009a677
@property(readonly, nonatomic) id <CSDIDSDualSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) NSNumber *remoteProtocolVersionNumber; // @synthesize remoteProtocolVersionNumber=_remoteProtocolVersionNumber;
@property(nonatomic) _Bool hasConnected; // @synthesize hasConnected=_hasConnected;
@property(nonatomic) _Bool hasStartedConnecting; // @synthesize hasStartedConnecting=_hasStartedConnecting;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
@property(nonatomic) int endedReason; // @synthesize endedReason=_endedReason;
@property(nonatomic) __weak id <CSDIDSDualSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionProvider:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000009a486
- (void)sessionProvider:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000009a378
- (void)sessionProvider:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000009a26a
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000009a15c
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0010000000099c4d
- (void)sessionProvider:(id)arg1 invitationSentToPushTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x0010000000099b02
- (void)sessionProviderStarted:(id)arg1;	// IMP=0x0010000000099980
- (void)end;	// IMP=0x00100000000998a6
- (void)reconnectSession;	// IMP=0x00100000000997de
- (void)_declineInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x0010000000099644
- (void)declineInvitation;	// IMP=0x00100000000995a2
- (void)_cancelInvitationWithData:(id)arg1 reason:(int)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x00100000000992fe
- (void)cancelInvitation;	// IMP=0x0010000000099259
- (void)_acceptInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x00100000000990bf
- (void)acceptInvitation;	// IMP=0x001000000009901d
- (void)_sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x0010000000098e8a
- (void)sendInvitation;	// IMP=0x0010000000098de5
- (void)sendData:(id)arg1;	// IMP=0x0010000000098c3d
@property(nonatomic) double invitationTimeout;
@property(readonly, nonatomic) CSDIDSTransport *transport;
- (void)setReceiverProtocolVersion:(int)arg1;	// IMP=0x00100000000988d1
@property(readonly, nonatomic) int remoteProtocolVersion;
@property(readonly, nonatomic) long long underlyingErrorCode;
- (id)propertiesDescription;	// IMP=0x00100000000986b5
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteProtocolVersion:(int)arg2;	// IMP=0x0010000000098631
- (id)initAsInitiatorWithSessionProvider:(id)arg1;	// IMP=0x0010000000098617
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x001000000009851a
- (id)init;	// IMP=0x0010000000098490

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

