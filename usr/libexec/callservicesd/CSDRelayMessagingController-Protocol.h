//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDCallProviderManager, CSDRelayCall, IDSDestination, IDSDevice, NSArray, NSString, TUAnswerRequest, TUCall, TUConversation, TURoute;
@protocol CSDRelayMessagingControllerClientMessagingDelegate, CSDRelayMessagingControllerCommonMessagingDelegate, CSDRelayMessagingControllerDelegate, CSDRelayMessagingControllerHostMessagingDelegate;

@protocol CSDRelayMessagingController <NSObject>
@property(nonatomic) __weak id <CSDRelayMessagingControllerCommonMessagingDelegate> commonMessagingDelegate;
@property(nonatomic) __weak id <CSDRelayMessagingControllerHostMessagingDelegate> hostMessagingDelegate;
@property(nonatomic) __weak id <CSDRelayMessagingControllerClientMessagingDelegate> clientMessagingDelegate;
@property(nonatomic) __weak id <CSDRelayMessagingControllerDelegate> delegate;
- (void)requestAnswerForRequest:(TUAnswerRequest *)arg1 forCall:(TUCall *)arg2;
- (void)sendUpdateSystemVolumeForCall:(TUCall *)arg1 volume:(float)arg2;
- (void)sendSuppressRingtoneMessageForCall:(TUCall *)arg1;
- (void)sendSetUplinkMutedCallMessageForCall:(TUCall *)arg1 uplinkMuted:(_Bool)arg2;
- (void)sendSetTTYTypeCallMessageForCall:(TUCall *)arg1 ttyType:(int)arg2;
- (void)sendPlayDTMFToneForKeyMessageForCall:(TUCall *)arg1 DTMFKey:(unsigned char)arg2;
- (void)sendPickRouteMessageToHostForRoute:(TURoute *)arg1;
- (void)sendUpdateRemoteUplinkMutedCallMessageToHostForCall:(TUCall *)arg1;
- (void)sendPushRelayingCallsMessageToHostForSourceIdentifier:(NSString *)arg1;
- (void)sendPullCallsMessageToHost;
- (void)sendRequestCallStateMessageToHost;
- (void)sendSendHardPauseDigitsMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendDisconnectAllCallsMessageToHostForDisconnectedCall:(CSDRelayCall *)arg1;
- (void)sendDisconnectCurrentCallAndActivateHeldMessageToHostForDisconnectedCall:(CSDRelayCall *)arg1;
- (void)sendHoldActiveAndAnswerCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendEndHeldAndAnswerCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendEndActiveAndAnswerCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendSwapCallsMessageToHost;
- (void)sendUngroupCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendGroupCallMessageToHostForCall:(CSDRelayCall *)arg1 otherCall:(TUCall *)arg2;
- (void)sendUnholdCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendHoldCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendDisconnectCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendAnswerCallMessageToHostForCall:(CSDRelayCall *)arg1;
- (void)sendJoinConversationMessageToHostForCall:(CSDRelayCall *)arg1 completionHandler:(void (^)(_Bool, _Bool))arg2;
- (void)sendDialCallMessageToHostForCall:(CSDRelayCall *)arg1 completionHandler:(void (^)(_Bool, _Bool))arg2;
- (void)sendUpdateSupportsEmergencyFallbackToClientForCall:(TUCall *)arg1;
- (void)sendUpdateFailureExpectedMessageToClientForCall:(TUCall *)arg1;
- (void)sendUpdateSupportsTTYWithVoiceCallMessageToClientForCall:(TUCall *)arg1;
- (void)sendUpdateRemoteUplinkMutedCallMessageToClientForCall:(TUCall *)arg1;
- (void)sendUpdateRoutesMessageToClientForRoutes:(NSArray *)arg1;
- (void)sendUpdateCallDisplayContextMessageToClientForCall:(TUCall *)arg1;
- (void)sendUpdateCallContextMessageToClientForCallProviderManager:(CSDCallProviderManager *)arg1;
- (void)sendInvitationSentMessageToClientForCall:(TUCall *)arg1;
- (void)sendNeedsManualInCallSoundsChangeMessageToClientForCall:(TUCall *)arg1;
- (void)sendPushCallsMessageToClientDestination:(IDSDestination *)arg1;
- (void)sendDialCallFailedForUniqueProxyIdentifier:(NSString *)arg1;
- (void)sendCallStartedConnectingMessageToClientForCall:(TUCall *)arg1;
- (void)sendUpdateRemoteCallStateMessageToClient:(_Bool)arg1;
- (void)sendUpdateRemoteCallStateMessageToClient;
- (void)sendHardPauseAvailabilityMessageToClientForState:(int)arg1 digits:(NSString *)arg2;
- (void)sendResetStateMessageToClient;
- (void)sendPullRelayingCallsMessageToClientAndDisconnectCallsWithUPI:(NSArray *)arg1;
- (void)sendDeviceUnavailableMessageToClientForUniqueProxyIdentifier:(NSString *)arg1;
- (void)sendUpdateCallModelMessageToClientForCall:(TUCall *)arg1;
- (void)sendResetWantsHoldMusicMessageToClientForCall:(TUCall *)arg1;
- (void)sendCallConnectedMessageToClientForCall:(TUCall *)arg1;
- (void)sendCallDisconnectedMessageToClientForCall:(TUCall *)arg1;
- (void)sendCallAnsweredElsewhereMessageToClientForCall:(TUCall *)arg1;
- (void)sendCallDialedMessageToClientForCall:(TUCall *)arg1;
- (void)sendUpdateConversationsMessageToClient:(NSArray *)arg1;
- (void)sendConversationToClientForConversation:(TUConversation *)arg1 withConversationMessageType:(int)arg2;
- (void)sendIncomingCallMessageToClientForCall:(TUCall *)arg1 cannotBeAnswered:(_Bool)arg2 cannotRelayAudioOrVideoOnPairedDevice:(_Bool)arg3;
- (void)disconnectMessagingConnectionForCall:(TUCall *)arg1;
- (void)prepareToDisconnectMessagingConnectionForCall:(TUCall *)arg1;
- (void)performBlockOnTransportAvailability:(void (^)(CSDIDSTransport *, NSDictionary *))arg1 forIdentifier:(NSString *)arg2;
- (IDSDevice *)remoteDeviceForUPI:(NSString *)arg1;
@end

