//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSObject-Protocol.h>

@class ENGroupID, IDSMessagingCapabilities, IDSPseudonym, IDSPseudonymProperties, IDSPseudonymRequestProperties, IDSSigningOptions, IDSURI, NSArray, NSData, NSDictionary, NSNumber, NSObject, NSSet, NSString, NSURL, NSUUID;
@protocol OS_xpc_object;

@protocol IDSDaemonProtocol <NSObject>

@optional
- (void)deletePendingResourceWithMessageGUID:(NSString *)arg1;
- (void)downloadPendingResourceWithMessageGUID:(NSString *)arg1;
- (void)tryForceFamilyFetch;
- (void)removeReceivedInvitation:(NSArray *)arg1 forService:(NSString *)arg2;
- (void)removePendingInvitation:(NSArray *)arg1 forService:(NSString *)arg2;
- (void)persistReceivedInvitation:(NSData *)arg1 forService:(NSString *)arg2 withUniqueID:(NSString *)arg3;
- (void)persistPendingInvitation:(NSData *)arg1 forService:(NSString *)arg2 withUniqueID:(NSString *)arg3;
- (void)registrationControlGetRegistrationStateForRegistrationType:(long long)arg1 requestID:(NSString *)arg2;
- (void)registrationControlSetRegistrationStateForRegistrationType:(long long)arg1 toState:(long long)arg2 requestID:(NSString *)arg3;
- (void)appleCareSignOutUserWithRequestID:(NSString *)arg1;
- (void)appleCareSignInUserName:(NSString *)arg1 DSID:(NSString *)arg2 authToken:(NSString *)arg3 requestID:(NSString *)arg4;
- (void)homeKitRefreshUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 accessoryRequests:(NSArray *)arg3;
- (void)homeKitGetUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 userHandle:(NSString *)arg3 accessoryRequests:(NSArray *)arg4;
- (void)homeKitGetConsentTokensWithServiceUserID:(NSString *)arg1 accessoryIDs:(NSArray *)arg2 adminID:(NSString *)arg3;
- (void)homeKitGetAdminAccessTokensWithServiceUserID:(NSString *)arg1 accessoryID:(NSString *)arg2 pairingToken:(NSData *)arg3;
- (void)homeKitGetServiceUserIDs;
- (void)reportSpamMessage:(NSDictionary *)arg1 serviceIdentifier:(NSString *)arg2;
- (void)reportAction:(long long)arg1 ofTempURI:(IDSURI *)arg2 fromURI:(IDSURI *)arg3 onAccount:(NSString *)arg4 requestUUID:(NSString *)arg5;
- (void)reportiMessageSpamCheckUnknown:(NSString *)arg1 count:(NSNumber *)arg2 requestID:(NSString *)arg3;
- (void)reportiMessageUnknownSender:(NSString *)arg1 messageID:(NSString *)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(NSNumber *)arg5 toURI:(NSString *)arg6;
- (void)reportiMessageSpam:(NSArray *)arg1 toURI:(NSString *)arg2;
- (void)continuityStopTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityStartTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityDisconnectFromPeer:(NSString *)arg1;
- (void)continuityConnectToPeer:(NSString *)arg1;
- (void)continuityStopScanningForType:(long long)arg1;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 peers:(NSArray *)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3 peers:(NSArray *)arg4;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 mask:(NSData *)arg3;
- (void)continuityStopAdvertisingOfType:(long long)arg1;
- (void)continuityStartAdvertisingOfType:(long long)arg1 withData:(NSData *)arg2 withOptions:(NSDictionary *)arg3;
- (void)continuityClientInstanceCreated;
- (void)resetRealTimeEncryptionKeys:(NSString *)arg1 forGroup:(NSString *)arg2;
- (void)requestRealTimeEncryptionMasterKeyMaterial:(NSString *)arg1 forGroup:(NSString *)arg2;
- (void)sendRealTimeEncryptionMKMRecoveryRequest:(NSString *)arg1 toGroup:(NSString *)arg2;
- (void)sendRealTimeEncryptionMasterKeyMaterial:(NSString *)arg1 toGroup:(NSString *)arg2;
- (void)requestPublicKeysForRealTimeEncryption:(NSString *)arg1 forAccountWithID:(NSString *)arg2;
- (void)sendRealTimeMediaPrekey:(NSString *)arg1 toGroup:(NSString *)arg2;
- (void)setupRealtimeEncryptionController:(NSString *)arg1 forAccountWithID:(NSString *)arg2;
- (void)getParticipantIDForAlias:(unsigned long long)arg1 salt:(NSData *)arg2 sessionID:(NSString *)arg3;
- (void)createAliasForParticipantID:(unsigned long long)arg1 salt:(NSData *)arg2 sessionID:(NSString *)arg3;
- (void)setRequiredCapabilities:(NSArray *)arg1 requiredLackOfCapabilities:(NSArray *)arg2 forSessionWithUniqueID:(NSString *)arg3;
- (void)requestEncryptionKeyForGroup:(NSString *)arg1 participants:(NSArray *)arg2;
- (void)unregisterPluginForGroup:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)registerPluginForGroup:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)requestURIsForParticipantIDs:(NSArray *)arg1 withRequestID:(NSUUID *)arg2 forGroupSession:(NSString *)arg3;
- (void)requestActiveParticipantsForGroupSession:(NSString *)arg1;
- (void)leaveGroupSession:(NSString *)arg1 participantInfo:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)joinGroupSession:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (void)updateParticipantType:(unsigned short)arg1 forGroup:(NSString *)arg2 sessionID:(NSString *)arg3 members:(NSArray *)arg4 triggeredLocally:(_Bool)arg5 withContext:(NSData *)arg6 lightweightStatusDict:(NSDictionary *)arg7;
- (void)updateParticipantData:(NSData *)arg1 forGroup:(NSString *)arg2 sessionID:(NSString *)arg3 withContext:(NSData *)arg4;
- (void)removeParticipantIDs:(NSSet *)arg1 forGroup:(NSString *)arg2 sessionID:(NSString *)arg3;
- (void)manageDesignatedMembers:(NSArray *)arg1 forGroup:(NSString *)arg2 sessionID:(NSString *)arg3 withType:(unsigned short)arg4;
- (void)updateMembers:(NSArray *)arg1 forGroup:(NSString *)arg2 sessionID:(NSString *)arg3 withContext:(NSData *)arg4 messagingCapabilities:(IDSMessagingCapabilities *)arg5 triggeredLocally:(_Bool)arg6 lightweightStatusDict:(NSDictionary *)arg7;
- (void)setCallScreeningModeDisabled:(NSString *)arg1;
- (void)sendAllocationRequest:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)acknowledgeSessionID:(NSString *)arg1 clientID:(NSString *)arg2;
- (void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setPreferences:(NSDictionary *)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setMuted:(_Bool)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setAudioEnabled:(_Bool)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)sendSessionMessage:(NSData *)arg1 toDestinations:(NSSet *)arg2 forSessionWithUniqueID:(NSString *)arg3;
- (void)endSession:(NSString *)arg1 withData:(NSData *)arg2;
- (void)endSession:(NSString *)arg1;
- (void)reconnectSessionWithUniqueID:(NSString *)arg1;
- (void)declineInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)declineInvitation:(NSString *)arg1;
- (void)acceptInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)acceptInvitation:(NSString *)arg1;
- (void)cancelInvitation:(NSString *)arg1 withRemoteEndedReasonOverride:(unsigned int)arg2;
- (void)cancelInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)cancelInvitation:(NSString *)arg1;
- (void)sendInvitation:(NSString *)arg1 withData:(NSData *)arg2 declineOnError:(_Bool)arg3;
- (void)sendInvitation:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (void)cleanupSessionWithInstanceID:(NSString *)arg1;
- (void)cleanupSession:(NSString *)arg1;
- (void)setupNewSessionWithConfiguration:(NSDictionary *)arg1;
- (void)setNSUUID:(NSString *)arg1 onDeviceWithUniqueID:(NSString *)arg2 forService:(NSString *)arg3;
- (void)closeSocketWithOptions:(NSDictionary *)arg1;
- (void)openSocketWithOptions:(NSDictionary *)arg1;
- (void)xpcObject:(NSObject<OS_xpc_object> *)arg1 objectContext:(NSDictionary *)arg2;
- (void)setWakingPushPriority:(long long)arg1 forTopic:(NSString *)arg2;
- (void)registerForNotificationsOnServices:(NSSet *)arg1;
- (void)setListenerServices:(NSSet *)arg1 commands:(NSSet *)arg2 capabilities:(unsigned int)arg3;
- (void)sendAppAckWithGUID:(NSString *)arg1 toDestination:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3 connectionType:(long long)arg4;
- (void)acknowledgeMessageWithStorageGUID:(NSString *)arg1 realGUID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3 broadcastTime:(NSNumber *)arg4 messageSize:(NSNumber *)arg5 priority:(NSNumber *)arg6 broadcastID:(long long)arg7 connectionType:(long long)arg8;
- (void)acknowledgeMessageWithGUID:(NSString *)arg1 forAccountWithUniqueID:(NSString *)arg2 broadcastTime:(NSNumber *)arg3 messageSize:(NSNumber *)arg4 priority:(NSNumber *)arg5;
- (void)acknowledgeOutgoingMessageWithGUID:(NSString *)arg1 alternateCallbackID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3;
- (void)failedDecryptingMessage:(NSDictionary *)arg1 reason:(long long)arg2 forGroupID:(ENGroupID *)arg3 onService:(NSString *)arg4;
- (void)testCloudQRConnection:(NSString *)arg1;
- (void)startOTRTest:(NSString *)arg1 priority:(long long)arg2;
- (void)setLinkPreferences:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)setPreferInfraWiFi:(_Bool)arg1 service:(NSString *)arg2;
- (void)sendServerMessage:(NSDictionary *)arg1 command:(NSNumber *)arg2 usingAccountWithUniqueID:(NSString *)arg3;
- (void)sendPersistedFile:(NSURL *)arg1 userInfo:(NSDictionary *)arg2 toDestinations:(NSArray *)arg3 usingAccountWithUniqueID:(NSString *)arg4 identifier:(NSString *)arg5;
- (void)getProgressUpdateForIdentifier:(NSString *)arg1 service:(NSString *)arg2;
- (void)cancelItemWithIdentifier:(NSString *)arg1 service:(NSString *)arg2;
- (void)cancelMessageWithQueueOneIdentifier:(NSString *)arg1 fromID:(NSString *)arg2 service:(NSString *)arg3 accountUniqueID:(NSString *)arg4 messageIdentifier:(NSString *)arg5;
- (void)sendMessageWithSendParameters:(NSDictionary *)arg1;
- (void)sendCertifiedDeliveryReceipt:(NSDictionary *)arg1 serviceName:(NSString *)arg2;
- (void)cancelOpportunisticDataOnService:(NSString *)arg1 withIdentifier:(NSString *)arg2;
- (void)sendOpportunisticData:(NSData *)arg1 onService:(NSString *)arg2 usingAccountWithUniqueID:(NSString *)arg3 withIdentifier:(NSString *)arg4 options:(NSDictionary *)arg5;
- (void)regenerateRegisteredIdentity;
- (void)incomingAccountSyncMessage:(NSDictionary *)arg1;
- (void)setPairedDeviceInfo:(NSDictionary *)arg1;
- (void)updateSubServices:(NSArray *)arg1 forService:(NSString *)arg2 deviceUniqueID:(NSString *)arg3;
- (void)clearIDSState;
- (void)reunionSyncCompletedForServices:(NSArray *)arg1 requestID:(NSString *)arg2;
- (void)reunionSyncStartedForServices:(NSArray *)arg1 requestID:(NSString *)arg2;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)setAllowedTrafficClasses:(NSSet *)arg1;
- (void)initialLocalSyncCompletedForServices:(NSArray *)arg1;
- (void)initialLocalSyncStartedForServices:(NSArray *)arg1;
- (void)getDeliveryStats;
- (void)deletePairedDevice:(NSString *)arg1;
- (void)connectPairedDevice:(NSString *)arg1;
- (void)addPairedDevice:(NSString *)arg1;
- (void)localSetupCompleted;
- (void)localSetupUnpairStart;
- (void)localSetupUnpair;
- (void)stopLocalSetup;
- (void)startLocalSetup;
- (void)fetchPhoneUserSubscriptionSourceWithRequestUUID:(NSString *)arg1;
- (void)setPhoneUserSubscriptionSource:(NSNumber *)arg1 withRequestUUID:(NSString *)arg2;
- (void)requestCarrierTokenForSubscriptionSource:(NSNumber *)arg1 IMEI:(NSString *)arg2 carrierNonce:(NSString *)arg3 requestUUID:(NSString *)arg4;
- (void)generatePhoneAuthenticationSignatureOverData:(NSData *)arg1 withRequestUUID:(NSString *)arg2;
- (void)authenticatePhoneWithRequestUUID:(NSString *)arg1;
- (void)setPassword:(NSString *)arg1 forUsername:(NSString *)arg2 onService:(NSString *)arg3;
- (void)getRegisteredIdentities;
- (void)repairAccounts;
- (void)reRegisterWithUserID:(NSString *)arg1 action:(NSNumber *)arg2 service:(NSString *)arg3;
- (void)kickGetDependentForAccount:(NSString *)arg1;
- (void)updateUserWithOldUserName:(NSString *)arg1 newUserName:(NSString *)arg2;
- (void)gameCenterModifyForUserName:(NSString *)arg1;
- (void)gameCenterSignOut;
- (void)gameCenterSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4 accountStatus:(NSNumber *)arg5 handles:(NSArray *)arg6;
- (void)iTunesSignOut;
- (void)iTunesSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4 accountStatus:(NSNumber *)arg5 handles:(NSArray *)arg6;
- (void)iCloudSignOut;
- (void)iCloudModifyForUserName:(NSString *)arg1;
- (void)iCloudUpdateForUserName:(NSString *)arg1 accountInfo:(NSDictionary *)arg2;
- (void)iCloudSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4 accountStatus:(NSNumber *)arg5 handles:(NSArray *)arg6;
- (void)iCloudSignOutHack;
- (void)iCloudSignInHackWithUserName:(NSString *)arg1 password:(NSString *)arg2;
- (void)triggerFinalDeregister;
- (void)hardDeregister;
- (void)deactivateAndPurgeIdentifyForAccount:(NSString *)arg1;
- (void)_reregisterAndReidentify:(NSNumber *)arg1 account:(NSString *)arg2;
- (void)forceRemoveAccount:(NSString *)arg1;
- (void)unregisterAccount:(NSString *)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)verifySignedData:(NSData *)arg1 matchesData:(NSData *)arg2 forAlgorithm:(long long)arg3 onService:(NSString *)arg4 tokenUri:(IDSURI *)arg5 options:(IDSSigningOptions *)arg6 requestUUID:(NSString *)arg7;
- (void)signData:(NSData *)arg1 withAlgorithm:(long long)arg2 onService:(NSString *)arg3 options:(IDSSigningOptions *)arg4 requestUUID:(NSString *)arg5;
- (void)revokePseudonym:(IDSPseudonym *)arg1 onAccount:(NSString *)arg2 requestProperties:(IDSPseudonymRequestProperties *)arg3 requestUUID:(NSString *)arg4;
- (void)renewPseudonym:(IDSPseudonym *)arg1 onAccount:(NSString *)arg2 forUpdatedExpiryEpoch:(double)arg3 requestProperties:(IDSPseudonymRequestProperties *)arg4 requestUUID:(NSString *)arg5;
- (void)provisionPseudonymForURI:(IDSURI *)arg1 onAccount:(NSString *)arg2 withProperties:(IDSPseudonymProperties *)arg3 requestProperties:(IDSPseudonymRequestProperties *)arg4 requestUUID:(NSString *)arg5;
- (void)unvalidateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)validateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)removeAliases:(NSArray *)arg1 fromAccount:(NSString *)arg2;
- (void)addAliases:(NSArray *)arg1 toAccount:(NSString *)arg2;
- (void)validateProfileForAccount:(NSString *)arg1;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 forAccount:(NSString *)arg3;
- (void)passwordUpdatedForAccount:(NSString *)arg1;
- (void)authenticateAccount:(NSString *)arg1;
- (void)authenticationChangedForAccount:(NSString *)arg1;
- (void)passwordChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)authTokenChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)disableAccount:(NSString *)arg1;
- (void)enableAccount:(NSString *)arg1;
- (void)updateAccount:(NSString *)arg1 withAccountInfo:(NSDictionary *)arg2;
- (void)_removeAndDeregisterAccount:(NSString *)arg1;
- (void)_removeAccount:(NSString *)arg1;
- (void)addAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 uniqueID:(NSString *)arg3 accountType:(int)arg4 accountInfo:(NSDictionary *)arg5;
- (void)setupAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 accountType:(int)arg3 accountConfig:(NSDictionary *)arg4 authToken:(NSString *)arg5 password:(NSString *)arg6 transactionID:(NSString *)arg7;
@end

