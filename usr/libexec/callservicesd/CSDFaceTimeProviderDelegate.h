//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDConversationManager, CSDConversationManagerXPCServer, CSDFaceTimeConversationProviderDelegate, CSDFaceTimeIDSProviderDelegate, CSDFaceTimeIMAVProviderDelegate, CSDFaceTimeInviteDemuxer, CSDGFTServiceConversationProviderDelegate, CSDProviderCallDataSource, CXProvider, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDFaceTimeProviderDelegate : NSObject
{
    _Bool _shouldUseIDSDemuxer;	// 8 = 0x8
    CSDConversationManagerXPCServer *_conversationManagerXPCServer;	// 16 = 0x10
    id <TUFeatureFlags> _featureFlags;	// 24 = 0x18
    CXProvider *_provider;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableDictionary *_delayedActionsByCallUUID;	// 48 = 0x30
    CSDFaceTimeInviteDemuxer *_faceTimeInviteDemuxer;	// 56 = 0x38
    CSDFaceTimeIDSProviderDelegate *_faceTimeIDSProviderDelegate;	// 64 = 0x40
    CSDFaceTimeIMAVProviderDelegate *_faceTimeIMAVProviderDelegate;	// 72 = 0x48
    CSDFaceTimeConversationProviderDelegate *_faceTimeConversationProviderDelegate;	// 80 = 0x50
    CSDGFTServiceConversationProviderDelegate *_groupFaceTimeServiceProviderDelegate;	// 88 = 0x58
    CSDConversationManager *_conversationManager;	// 96 = 0x60
    CSDProviderCallDataSource *_callDataSource;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000c6351
@property(nonatomic) __weak CSDProviderCallDataSource *callDataSource; // @synthesize callDataSource=_callDataSource;
@property(readonly, nonatomic) CSDConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(retain, nonatomic) CSDGFTServiceConversationProviderDelegate *groupFaceTimeServiceProviderDelegate; // @synthesize groupFaceTimeServiceProviderDelegate=_groupFaceTimeServiceProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeConversationProviderDelegate *faceTimeConversationProviderDelegate; // @synthesize faceTimeConversationProviderDelegate=_faceTimeConversationProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeIMAVProviderDelegate *faceTimeIMAVProviderDelegate; // @synthesize faceTimeIMAVProviderDelegate=_faceTimeIMAVProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeIDSProviderDelegate *faceTimeIDSProviderDelegate; // @synthesize faceTimeIDSProviderDelegate=_faceTimeIDSProviderDelegate;
@property(retain, nonatomic) CSDFaceTimeInviteDemuxer *faceTimeInviteDemuxer; // @synthesize faceTimeInviteDemuxer=_faceTimeInviteDemuxer;
@property(readonly, nonatomic) NSMutableDictionary *delayedActionsByCallUUID; // @synthesize delayedActionsByCallUUID=_delayedActionsByCallUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) _Bool shouldUseIDSDemuxer; // @synthesize shouldUseIDSDemuxer=_shouldUseIDSDemuxer;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) CSDConversationManagerXPCServer *conversationManagerXPCServer; // @synthesize conversationManagerXPCServer=_conversationManagerXPCServer;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;	// IMP=0x00100000000c6125
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;	// IMP=0x00100000000c5fec
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;	// IMP=0x00100000000c57c2
- (void)provider:(id)arg1 performSetScreeningCallAction:(id)arg2;	// IMP=0x00100000000c4feb
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x00100000000c4814
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x00100000000c403d
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x00100000000c3866
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x00100000000c308f
- (void)provider:(id)arg1 performSetScreenShareAttributesCallAction:(id)arg2;	// IMP=0x00100000000c28b8
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x00100000000c20e1
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x00100000000c190a
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x00100000000c1133
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x00100000000c090e
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x00100000000c0137
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2 shouldUseIDSDemuxer:(_Bool)arg3;	// IMP=0x00100000000bf1a8
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x00100000000bf092
- (void)initiateModernFTInviteForAction:(id)arg1 destinations:(id)arg2 excludedIMAVDestinations:(id)arg3 joinCallActionToFulfill:(id)arg4;	// IMP=0x00100000000be9a9
- (void)provider:(id)arg1 performStartCallAction:(id)arg2 shouldUseIDSDemuxer:(_Bool)arg3;	// IMP=0x00100000000bde62
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;	// IMP=0x00100000000bdde4
- (void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;	// IMP=0x00100000000bdd3f
- (void)providerDidReset:(id)arg1;	// IMP=0x00100000000bdc1a
- (void)providerDidBegin:(id)arg1;	// IMP=0x00100000000bdaf5
- (void)providerDelegate:(id)arg1 endOtherProvidersCallWithUUID:(id)arg2;	// IMP=0x00100000000bd8ca
- (_Bool)providerDelegate:(id)arg1 isExclusivelyManagingCallWithUUID:(id)arg2;	// IMP=0x00100000000bd6cc
- (_Bool)providerDelegate:(id)arg1 isManagingCallWithUUID:(id)arg2;	// IMP=0x00100000000bd649
- (void)providerDelegate:(id)arg1 requestedUpgradeToExistingCallForConversation:(id)arg2 withSessionToken:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000bd483
- (void)providerDelegate:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bd36a
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 endedAtDate:(id)arg3 withReason:(long long)arg4 failureContext:(id)arg5;	// IMP=0x00100000000bcc76
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 connectedAtDate:(id)arg3;	// IMP=0x00100000000bca79
- (void)providerDelegate:(id)arg1 callWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;	// IMP=0x00100000000bc87c
- (void)_processDelayedActionList:(id)arg1 provider:(id)arg2;	// IMP=0x00100000000bc510
- (void)_createDelayedActionListIfNecessary:(id)arg1;	// IMP=0x00100000000bc43d
- (void)deferReportingAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x00100000000bc329
- (void)updateProviderConfigurationWithSenderIdentities:(id)arg1;	// IMP=0x00100000000bc2c0
- (id)ISOCountryCodeForCallWithUUID:(id)arg1;	// IMP=0x00100000000bc246
- (id)providerConfiguration;	// IMP=0x00100000000bc184
- (void)dealloc;	// IMP=0x00100000000bc119
- (id)initWithCallSource:(id)arg1 queue:(id)arg2 featureFlags:(id)arg3 shouldUseIDSDemuxer:(_Bool)arg4 chManager:(id)arg5;	// IMP=0x00100000000bbdd1
- (id)initWithCallSource:(id)arg1 queue:(id)arg2 chManager:(id)arg3;	// IMP=0x00100000000bbd1a
- (id)init;	// IMP=0x00100000000bbc90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
