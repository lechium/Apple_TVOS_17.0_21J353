//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, NSCalendar, NSData, NSDate, NSDictionary, NSError, NSPredicate, NSSet, NSString, NSURL, NSUUID, PKAppletSubcredential, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingInvitationRequest, PKApplyWebServiceApplicationDeleteRequest, PKApplyWebServiceApplyRequest, PKApplyWebServiceDocumentSubmissionRequest, PKApplyWebServiceTermsRequest, PKApplyWebServiceVerificationSubmissionRequest, PKBarcodePaymentEvent, PKEncryptedDataObject, PKEncryptedPushProvisioningTarget, PKExpressPassInformation, PKIdentityProvisioningAttestations, PKMerchant, PKPartialShareInvitation, PKPassAuxiliaryPassInformationItem, PKPassShare, PKPaymentApplication, PKPaymentAvailableProductsRequest, PKPaymentInstallmentConfiguration, PKPaymentProductsActionRequest, PKPaymentShareableCredential, PKPaymentTransaction, PKPaymentTransactionRequest, PKPaymentWebServiceContext, PKPendingProvisioning, PKPlaceholderPassConfiguration, PKPushProvisioningTarget, PKShareablePassMetadata, PKSharingMessage, PKTapToRadarRequest;

@protocol PDPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)setNFCPayloadState:(unsigned long long)arg1 forPass:(NSString *)arg2;
- (void)simulateDeviceAccessory;
- (void)simulateEnableBiometricsForPass:(NSString *)arg1;
- (void)merchantForPassUniqueIdentifier:(NSString *)arg1 withAuxiliaryPassInformationItem:(PKPassAuxiliaryPassInformationItem *)arg2 completion:(void (^)(PKMerchant *))arg3;
- (void)clearSafariCardImportNotificationHistoryWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)clearSafariCardImportNotificationsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)notifyForSafariCardImportWithCredentials:(NSArray *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)notifyForSafariCardImportConsentWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)suggestPaymentSafariCredentialImport:(NSArray *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)updateCardholderNameFromSafari:(NSString *)arg1 forVirtualCardWithIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateDateLastUsedBySafari:(NSDate *)arg1 forVirtualCardWithIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)paymentPassForVPANID:(NSString *)arg1 andLoadImages:(_Bool)arg2 completion:(void (^)(PKPaymentPass *))arg3;
- (void)regenerateVPANCardCredentialsForVPANID:(NSString *)arg1 authorization:(NSData *)arg2 completion:(void (^)(PKVirtualCardCredentials *, NSError *))arg3;
- (void)vpanCardCredentialsForVPANID:(NSString *)arg1 authorization:(NSData *)arg2 merchantHost:(NSString *)arg3 completion:(void (^)(PKVirtualCardCredentials *, NSError *))arg4;
- (void)vpanVirtualCards:(void (^)(NSSet *, NSError *))arg1;
- (void)removePendingProvisioningOfType:(NSString *)arg1 withUniqueIdentifier:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)retrievePendingProvisioningOfType:(NSString *)arg1 withUniqueIdentifier:(NSString *)arg2 completion:(void (^)(PKPendingProvisioning *))arg3;
- (void)usingSynchronousProxy:(_Bool)arg1 hasPendingProvisioningsOfTypes:(NSArray *)arg2 completion:(void (^)(_Bool))arg3;
- (void)retrievePendingProvisioningsWithType:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)addPendingProvisionings:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addPendingProvisioning:(PKPendingProvisioning *)arg1;
- (void)hasActiveExternallySharedPasses:(void (^)(_Bool))arg1;
- (void)sharingCapabilitiesForPassIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, _Bool))arg2;
- (void)displayableSharesForPassIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)displayableEntitlementsForPassIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)usingSynchronousProxy:(_Bool)arg1 entitlementsForPassIdentifier:(NSString *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)revokeSharesForPassIdentifier:(NSString *)arg1 shares:(NSArray *)arg2 shouldCascade:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)revokeShareForPassIdentifier:(NSString *)arg1 share:(PKPassShare *)arg2 shouldCascade:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)processSharingCLICommands:(NSArray *)arg1 completion:(void (^)(NSString *))arg2;
- (void)pendingShareActivationForShareIdentifier:(NSString *)arg1 completion:(void (^)(PKPassSharePendingActivation *))arg2;
- (void)didReceiveActivationCodeFailureForCredentialIdentifier:(NSString *)arg1 attemptsRemaining:(unsigned long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)sendSharingMessageTo:(NSString *)arg1 message:(PKSharingMessage *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)updateShareForPassIdentifier:(NSString *)arg1 share:(PKPassShare *)arg2 authorization:(NSData *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)createShareForPartialShareInvitation:(PKPartialShareInvitation *)arg1 authorization:(NSData *)arg2 completion:(void (^)(PKCrossPlatformShareURL *, NSError *))arg3;
- (void)prewarmCreateShareForPassIdentifier:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)createSingleUseShareURLWithMessage:(PKSharingMessage *)arg1 timeToLive:(unsigned long long)arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (void)deleteSharingMessage:(PKSharingMessage *)arg1;
- (void)cacheSharingMessageFromMailboxAddress:(NSString *)arg1 message:(PKSharingMessage *)arg2;
- (void)acceptCarKeyShareForMessage:(PKSharingMessage *)arg1 activationCode:(NSString *)arg2 completion:(void (^)(PKCarShareAcceptanceResponse *, NSError *))arg3;
- (void)relinquishInvitation:(PKSharingMessage *)arg1 completion:(void (^)(_Bool))arg2;
- (void)retrieveShareInvitationForMailboxAddress:(NSString *)arg1 completion:(void (^)(PKSharingMessage *, NSError *))arg2;
- (void)checkInvitationStatusForMailboxAddress:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setPaymentApplicationRangingSuspensionReason:(unsigned long long)arg1 forPassUniqueIdentifier:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)updateNotificationForProductIdentifier:(NSString *)arg1 configuration:(NSDictionary *)arg2 localizedNotificationTitle:(NSString *)arg3 localizedNotificationMessage:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)prepareIdentityProvisioningForTargetDeviceIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)provisionIdentityPassWithPassMetadata:(PKShareablePassMetadata *)arg1 targetDeviceIdentifier:(NSString *)arg2 credentialIdentifier:(NSString *)arg3 attestations:(PKIdentityProvisioningAttestations *)arg4 completion:(void (^)(PKSecureElementPass *, NSError *))arg5;
- (void)sendDeviceSharingCapabilitiesRequestForHandle:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)mapsMerchantWithIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 completion:(void (^)(PKMerchant *))arg3;
- (void)updateAllMapsBrandAndMerchantDataWithCompletion:(void (^)(void))arg1;
- (void)sendAllPassTransactions;
- (void)photosForFamilyMembersWithDSIDs:(NSArray *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)pendingFamilyMembersIgnoringCache:(_Bool)arg1 completion:(void (^)(NSArray *))arg2;
- (void)memberTypeForCurrentUserWithCompletion:(void (^)(long long))arg1;
- (void)familyMembersIgnoringCache:(_Bool)arg1 completion:(void (^)(NSArray *))arg2;
- (void)ambiguousTransactionWithServiceIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentTransaction *))arg2;
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)deleteReservation:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (void)reserveStorageForAppletTypes:(NSArray *)arg1 metadata:(NSDictionary *)arg2 completion:(void (^)(NSArray *, _Bool, NSError *))arg3;
- (void)currentSecureElementSnapshot:(void (^)(PKProvisioningSEStorageSnapshot *, NSError *))arg1;
- (void)redeemProvisioningSharingIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, PKPaymentPass *, NSError *))arg2;
- (void)redeemPaymentShareableCredential:(PKPaymentShareableCredential *)arg1 completion:(void (^)(_Bool, PKPaymentPass *, NSArray *, NSError *))arg2;
- (void)prepareProvisioningTarget:(PKPushProvisioningTarget *)arg1 checkFamilyCircle:(_Bool)arg2 completion:(void (^)(PKEncryptedPushProvisioningTarget *, _Bool, NSError *))arg3;
- (void)provideEncryptedPushProvisioningTarget:(PKEncryptedPushProvisioningTarget *)arg1 sharingInstanceIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)statusForShareableCredentials:(NSArray *)arg1 completion:(void (^)(unsigned long long, NSArray *, NSError *))arg2;
- (void)pushProvisioningSharingIdentifiers:(void (^)(NSArray *, NSError *))arg1;
- (void)rangingSuspensionReasonForCredential:(PKAppletSubcredential *)arg1 forPaymentApplicationID:(NSString *)arg2 completion:(void (^)(unsigned long long))arg3;
- (void)passSharesForCredentialIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)credentialWithIdentifier:(NSString *)arg1 completion:(void (^)(PKAppletSubcredential *))arg2;
- (void)canAcceptInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)requestBackgroundRegistrationForCredentialWithIdentifier:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)removeSharingInvitationWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)didUpdateSharingInvitationWithIdentifier:(NSString *)arg1 reason:(long long)arg2 completion:(void (^)(_Bool))arg3;
- (void)didReceiveSharingInvitationRequest:(PKAppletSubcredentialSharingInvitationRequest *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)didReceiveSharingInvitationWithIdentifier:(NSString *)arg1 fromOriginatorIDSHandle:(NSString *)arg2 sharingSessionIdentifier:(NSUUID *)arg3 metadata:(NSData *)arg4 completion:(void (^)(_Bool))arg5;
- (void)finishedKeyExchangeForCredential:(PKAppletSubcredential *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)sharingInvitationWasInvalidated:(NSString *)arg1 withCredentialIdentifier:(NSString *)arg2 error:(NSError *)arg3 completion:(void (^)(_Bool))arg4;
- (void)removeSharingInvitationReceiptWithIdentifiers:(NSSet *)arg1 onCredential:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)declineRelatedSharingInvitationsIfNecessary:(PKAppletSubcredentialSharingInvitation *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)addPassShare:(PKPassShare *)arg1 onCredentialWithIdentifier:(NSString *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)revokeCredentialsWithIdentifiers:(NSSet *)arg1 completion:(void (^)(_Bool))arg2;
- (void)registerCredentialsWithIdentifiers:(NSSet *)arg1 completion:(void (^)(NSSet *, NSSet *))arg2;
- (void)updateMetadataOnPassWithIdentifier:(NSString *)arg1 credential:(PKAppletSubcredential *)arg2 completion:(void (^)(_Bool))arg3;
- (void)subcredentialInvitationsWithCompletion:(void (^)(NSSet *))arg1;
- (void)addPlaceholderPassWithConfiguration:(PKPlaceholderPassConfiguration *)arg1 completion:(void (^)(PKPaymentPass *))arg2;
- (void)setAccountAttestationAnonymizationSalt:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)accountAttestationAnonymizationSaltWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)transactionTagsForTransactionWithIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)deleteTransactionReceiptWithUniqueID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)storeTransactionReceiptData:(NSData *)arg1 completion:(void (^)(PKTransactionReceipt *))arg2;
- (void)transactionReceiptForTransactionWithIdentifier:(NSString *)arg1 updateIfNecessary:(_Bool)arg2 completion:(void (^)(PKTransactionReceipt *))arg3;
- (void)transactionReceiptWithUniqueID:(NSString *)arg1 completion:(void (^)(PKTransactionReceipt *))arg2;
- (void)passOwnershipTokenWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)storePassOwnershipToken:(NSString *)arg1 withIdentifier:(NSString *)arg2;
- (void)setDeviceCheckInContextBuildVersion:(NSString *)arg1 outstandingAction:(long long)arg2 forRegion:(NSString *)arg3;
- (void)performDeviceCheckInWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)performProductActionRequest:(PKPaymentProductsActionRequest *)arg1 completion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg2;
- (void)productsWithCompletion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg1;
- (void)productsWithRequest:(PKPaymentAvailableProductsRequest *)arg1 completion:(void (^)(PKPaymentAvailableProductsResponse *, NSError *))arg2;
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(NSString *)arg1 style:(long long)arg2;
- (void)categoryVisualizationMagnitudesForPassUniqueID:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)submitTransactionAnswerForTransaction:(NSString *)arg1 questionType:(unsigned long long)arg2 answer:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)submitDeleteRequest:(PKApplyWebServiceApplicationDeleteRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)submitTermsRequest:(PKApplyWebServiceTermsRequest *)arg1 completion:(void (^)(PKApplyWebServiceApplyResponse *, NSError *))arg2;
- (void)submitVerificationRequest:(PKApplyWebServiceVerificationSubmissionRequest *)arg1 completion:(void (^)(PKApplyWebServiceApplyResponse *, NSError *))arg2;
- (void)submitDocumentRequest:(PKApplyWebServiceDocumentSubmissionRequest *)arg1 completion:(void (^)(PKApplyWebServiceApplyResponse *, NSError *))arg2;
- (void)submitApplyRequest:(PKApplyWebServiceApplyRequest *)arg1 completion:(void (^)(PKApplyWebServiceApplyResponse *, NSError *))arg2;
- (void)featureApplicationWithIdentifier:(NSString *)arg1 completion:(void (^)(PKFeatureApplication *))arg2;
- (void)featureApplicationWithReferenceIdentifier:(NSString *)arg1 completion:(void (^)(PKFeatureApplication *))arg2;
- (void)featureApplicationsForAccountUserInvitationWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)featureApplicationsForProvisioningWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)updateFeatureApplicationsForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)featureApplicationsForAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)featureApplicationsWithCompletion:(void (^)(NSArray *))arg1;
- (void)augmentedProductForInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 experimentDetails:(NSDictionary *)arg2 withCompletion:(void (^)(PKApplyWebServiceAugmentedProductResponse *))arg3;
- (void)invalidateAuxiliaryCapabilityCertificatesForPassUniqueIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)submitBarcodePaymentEvent:(PKBarcodePaymentEvent *)arg1 forPassUniqueIdentifier:(NSString *)arg2 sessionExchangeToken:(NSData *)arg3 withCompletion:(void (^)(void))arg4;
- (void)submitBarcodePaymentEvent:(PKBarcodePaymentEvent *)arg1 forPassUniqueIdentifier:(NSString *)arg2 withCompletion:(void (^)(void))arg3;
- (void)submitTransactionSignatureForTransactionIdentifier:(NSString *)arg1 sessionExchangeToken:(NSData *)arg2 completion:(void (^)(PKPaymentTransaction *, NSError *))arg3;
- (void)submitEncryptedPIN:(PKEncryptedDataObject *)arg1 forTransactionIdentifier:(NSString *)arg2 sessionExchangeToken:(NSData *)arg3 completion:(void (^)(PKPaymentTransaction *, NSError *))arg4;
- (void)submitEncryptedPIN:(PKEncryptedDataObject *)arg1 forTransactionIdentifier:(NSString *)arg2 completion:(void (^)(PKPaymentTransaction *, NSError *))arg3;
- (void)submitUserConfirmation:(_Bool)arg1 forTransactionIdentifier:(NSString *)arg2 sessionExchangeToken:(NSData *)arg3 completion:(void (^)(PKPaymentTransaction *, NSError *))arg4;
- (void)submitUserConfirmation:(_Bool)arg1 forTransactionIdentifier:(NSString *)arg2 completion:(void (^)(PKPaymentTransaction *, NSError *))arg3;
- (void)markAuthenticationCompleteForTransactionIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)processedAuthenticationMechanism:(unsigned long long)arg1 forTransactionIdentifier:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(NSString *)arg1 sessionExchangeToken:(NSData *)arg2 withCompletion:(void (^)(NSArray *))arg3;
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(NSString *)arg1 authorization:(NSData *)arg2 sessionExchangeToken:(NSData *)arg3 withCompletion:(void (^)(NSString *, NSData *, NSError *))arg4;
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(NSString *)arg1 authorization:(NSData *)arg2 withCompletion:(void (^)(NSString *, NSData *, NSError *))arg3;
- (void)fetchBarcodesForPassUniqueIdentifier:(NSString *)arg1 sessionExchangeToken:(NSData *)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
- (void)checkAllAuxiliaryRegistrationRequirements;
- (void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(NSString *)arg1 sessionExchangeToken:(NSData *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)requiresUpgradedPasscodeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)currentPasscodeMeetsUpgradedPasscodePolicy:(void (^)(_Bool, NSError *))arg1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)displayTapToRadarAlertForRequest:(PKTapToRadarRequest *)arg1 completion:(void (^)(_Bool))arg2;
- (void)installmentPlansWithTransactionReferenceIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)removeMapsDataForTransactionWithIdentifier:(NSString *)arg1 forTransactionSourceIdentifier:(NSString *)arg2 issueReportIdentifier:(NSString *)arg3 completion:(void (^)(PKPaymentTransaction *))arg4;
- (void)insertOrUpdatePaymentTransaction:(PKPaymentTransaction *)arg1 forPassUniqueIdentifier:(NSString *)arg2 paymentApplication:(PKPaymentApplication *)arg3 completion:(void (^)(PKPaymentTransaction *))arg4;
- (void)insertOrUpdatePaymentTransaction:(PKPaymentTransaction *)arg1 forTransactionSourceIdentifier:(NSString *)arg2 completion:(void (^)(PKPaymentTransaction *))arg3;
- (void)downloadAllPaymentPassesWithHandler:(void (^)(void))arg1;
- (void)initializeSecureElement:(void (^)(_Bool))arg1;
- (void)initializeSecureElementIfNecessaryWithHandler:(void (^)(_Bool, NSData *, NSData *))arg1;
- (void)isPassExpressWithUniqueIdentifier:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)removeExpressPassWithUniqueIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSSet *))arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(void (^)(_Bool, NSSet *))arg2;
- (void)conflictingExpressPassIdentifiersForPassInformation:(PKExpressPassInformation *)arg1 withReferenceExpressState:(NSSet *)arg2 completion:(void (^)(NSSet *))arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(PKExpressPassInformation *)arg1 withCompletion:(void (^)(NSSet *))arg2;
- (void)setExpressWithPassInformation:(PKExpressPassInformation *)arg1 credential:(NSData *)arg2 completion:(void (^)(_Bool, NSSet *))arg3;
- (void)usingSynchronousProxy:(_Bool)arg1 expressPassesInformationWithHandler:(void (^)(NSSet *))arg2;
- (void)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 handler:(void (^)(NSSet *))arg2;
- (void)expressPassesInformationWithCardType:(long long)arg1 handler:(void (^)(NSSet *))arg2;
- (void)expressPassInformationWithPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(PKExpressPassInformation *))arg2;
- (void)isExpressModeEnabledForRemotePassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)mapsMerchantsWithCompletion:(void (^)(NSSet *))arg1;
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(NSString *)arg1 transactionSourceIdentifier:(NSString *)arg2 completion:(void (^)(NSString *))arg3;
- (void)ambiguousPassUniqueIdentifierForTransactionWithServiceIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)passUniqueIdentifierForTransactionWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)transactionsForPredicate:(NSPredicate *)arg1 limit:(long long)arg2 completion:(void (^)(NSArray *))arg3;
- (void)logoImageDataForURL:(NSURL *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)transactionsForRequest:(PKPaymentTransactionRequest *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)installmentPlanTransactionsForTransactionSourceIdentifiers:(NSSet *)arg1 accountIdentifier:(NSString *)arg2 redeemed:(_Bool)arg3 withRedemptionType:(unsigned long long)arg4 startDate:(NSDate *)arg5 endDate:(NSDate *)arg6 completion:(void (^)(NSSet *))arg7;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)transactionWithReferenceIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentTransaction *))arg2;
- (void)transactionWithServiceIdentifier:(NSString *)arg1 transactionSourceIdentifier:(NSString *)arg2 completion:(void (^)(PKPaymentTransaction *))arg3;
- (void)transactionSourceTypeForTransactionSourceIdentifier:(NSString *)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)transactionWithTransactionIdentifier:(NSString *)arg1 completion:(void (^)(PKPaymentTransaction *))arg2;
- (void)pendingTransactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 limit:(long long)arg6 completion:(void (^)(NSSet *))arg7;
- (void)approvedTransactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 limit:(long long)arg6 completion:(void (^)(NSSet *))arg7;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(NSDate *)arg5 endDate:(NSDate *)arg6 limit:(long long)arg7 completion:(void (^)(NSSet *))arg8;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(NSDate *)arg5 endDate:(NSDate *)arg6 limit:(long long)arg7 completion:(void (^)(NSSet *))arg8;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 matchingMerchant:(PKMerchant *)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(void (^)(NSSet *))arg6;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withPeerPaymentCounterpartHandles:(NSSet *)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(void (^)(NSSet *))arg6;
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(void (^)(NSSet *))arg4;
- (void)cashbackByPeriodForTransactionSourceIdentifiers:(NSSet *)arg1 withStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3 calendar:(NSCalendar *)arg4 calendarUnit:(unsigned long long)arg5 type:(unsigned long long)arg6 completion:(void (^)(NSArray *))arg7;
- (void)transactionCountByPeriodForRequest:(PKPaymentTransactionRequest *)arg1 calendar:(NSCalendar *)arg2 unit:(unsigned long long)arg3 includePurchaseTotal:(_Bool)arg4 completion:(void (^)(NSArray *))arg5;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(void (^)(NSSet *))arg8;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 limit:(long long)arg6 completion:(void (^)(NSSet *))arg7;
- (void)transactionsForTransactionSourceIdentifiers:(NSSet *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
- (void)hasTransactionsForTransactionSourceIdentifiers:(NSSet *)arg1 completion:(void (^)(_Bool))arg2;
- (void)peerPaymentCounterpartHandlesForTransactionSourceIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 completion:(void (^)(NSArray *))arg4;
- (void)defaultPaymentPassUniqueIdentifier:(void (^)(NSString *))arg1;
- (void)setDefaultPaymentPassUniqueIdentifier:(NSString *)arg1 handler:(void (^)(void))arg2;
- (void)usingSynchronousProxy:(_Bool)arg1 fetchSharedPaymentWebServiceContextWithCompletion:(void (^)(PKPaymentWebServiceContext *))arg2;
- (void)usingSynchronousProxy:(_Bool)arg1 setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg2 withCompletion:(void (^)(void))arg3;
@end

