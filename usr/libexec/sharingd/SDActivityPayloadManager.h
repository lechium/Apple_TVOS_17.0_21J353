//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, IDSService, NSMutableArray, NSMutableDictionary, NSString, RPCompanionLinkClient, SDActivityAdvertiser, SDActivityScanner;

@interface SDActivityPayloadManager : NSObject
{
    IDSService *_activityService;	// 8 = 0x8
    IDSService *_encryptionService;	// 16 = 0x10
    RPCompanionLinkClient *_rapportDiscoveryClient;	// 24 = 0x18
    _Bool _restrictionsDisabled;	// 32 = 0x20
    SDActivityAdvertiser *_advertiser;	// 40 = 0x28
    SDActivityScanner *_scanner;	// 48 = 0x30
    CUSystemMonitor *_systemMonitor;	// 56 = 0x38
    _Bool _hsa2Enabled;	// 64 = 0x40
    NSMutableDictionary *_uniqueIDToKeyReplyDate;	// 72 = 0x48
    NSMutableDictionary *_messageIdentifierToKeyRequestRecords;	// 80 = 0x50
    NSMutableDictionary *_messageIdentifierToReplyRecords;	// 88 = 0x58
    NSMutableDictionary *_messageIdentifierToRequestRecords;	// 96 = 0x60
    int _systemPreferenceChangedToken;	// 104 = 0x68
    NSMutableArray *_cachedActivityPayloadsForDemo;	// 112 = 0x70
}

+ (id)sharedPayloadManager;	// IMP=0x00200000000cf7b3
- (void).cxx_destruct;	// IMP=0x00200000000d972a
- (void)handleNewAdvertisementWithpayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d92c7
- (void)sendActivityPayloadWithAdvertisementData:(id)arg1 forAdvertisementPayload:(id)arg2 activityIdentifier:(id)arg3 activityPayload:(id)arg4;	// IMP=0x00100000000d8a26
- (void)setUpHandoffPreferenceMonitor;	// IMP=0x00100000000d8a20
- (id)createRapportClientWithDestinationDevice:(id)arg1;	// IMP=0x00100000000d88c6
- (void)logDashboardHandoffRequestViaTransportLinkType:(int)arg1 type:(id)arg2 success:(_Bool)arg3 rtt:(double)arg4;	// IMP=0x00100000000d8688
- (void)setDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x00100000000d842a
- (id)protobufDataFromRequest:(id)arg1;	// IMP=0x00100000000d832f
- (id)requestFromProtobufData:(id)arg1;	// IMP=0x00100000000d828b
- (id)dataFromUUID:(id)arg1;	// IMP=0x00100000000d820b
- (void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000d7eac
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000d7e11
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;	// IMP=0x00100000000d7daf
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d7d4c
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d7cd1
- (void)handlePayloadReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x00100000000d7685
- (void)handlePayloadReplyProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d743b
- (void)handlePayloadReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x00100000000d7152
- (void)activityPayloadReplySuccess:(id)arg1;	// IMP=0x00100000000d6ff3
- (void)sendIDSActivityPayloadReply:(id)arg1 withReplyRecord:(id)arg2;	// IMP=0x00100000000d69e0
- (void)handlePayloadRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000d60d0
- (void)handlePayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d5ef4
- (void)handlePayloadRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d59cf
- (void)handleEncryptionKeyReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x00100000000d5608
- (void)handleEncryptionKeyReplyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d53d0
- (void)handleEncryptionKeyReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x00100000000d50e7
- (void)handleEncryptionKeyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d4e17
- (void)handleEncryptionKeyRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d49de
- (void)handleEncyptionKeyRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000d46c0
- (void)sendIDSActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x00100000000d3da6
- (void)sendRapportActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d32cf
- (void)sendActivityPayloadRequestToDeviceIdentifier:(id)arg1 withAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000d29c5
- (void)sendEncryptionKeyReplyRequestToDevice:(id)arg1 reply:(id)arg2 requestIdentifier:(id)arg3;	// IMP=0x00100000000d24e0
- (void)sendIDSEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x00100000000d1c08
- (void)sendRapportEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d100b
- (void)sendEncryptionKeyRequestToDeviceIdentifier:(id)arg1 previousKeyIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d080b
- (void)clearPersistedKeyRequests;	// IMP=0x00100000000d07c0
@property(readonly) NSString *state;
- (void)requestTimedOut:(id)arg1;	// IMP=0x00100000000cff9d
- (id)idsDeviceWithUniqueID:(id)arg1 onService:(id)arg2;	// IMP=0x00100000000cfdca
- (void)setUpIDSServices;	// IMP=0x00100000000cfc91
- (void)setUpRapport;	// IMP=0x00100000000cfaf6
- (void)setUpHSA2Monitor;	// IMP=0x00100000000cf9c9
- (id)init;	// IMP=0x00100000000cf854

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

