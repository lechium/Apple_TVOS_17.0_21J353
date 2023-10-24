//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EscrowPrerecord, MISSING_TYPE, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, NSUUID, SESWrapper;
@protocol OS_dispatch_queue;

@interface SecureBackup : NSObject
{
    _Bool _deleteAll;	// 8 = 0x8
    _Bool _emcsMode;	// 9 = 0x9
    _Bool _excludeiCDPRecords;	// 10 = 0xa
    _Bool _fmipRecovery;	// 11 = 0xb
    _Bool _icdp;	// 12 = 0xc
    _Bool _idmsRecovery;	// 13 = 0xd
    _Bool _silent;	// 14 = 0xe
    _Bool _stingray;	// 15 = 0xf
    _Bool _synchronize;	// 16 = 0x10
    _Bool _useCachedPassphrase;	// 17 = 0x11
    _Bool _useRecoveryPET;	// 18 = 0x12
    _Bool _usesMultipleiCSC;	// 19 = 0x13
    _Bool _usesRandomPassphrase;	// 20 = 0x14
    _Bool _usesRecoveryKey;	// 21 = 0x15
    _Bool _suppressServerFiltering;	// 22 = 0x16
    _Bool _deleteDoubleOnly;	// 23 = 0x17
    _Bool _nonViableRepair;	// 24 = 0x18
    _Bool _sosCompatibleEscrowSorting;	// 25 = 0x19
    _Bool _recoveryResult;	// 26 = 0x1a
    _Bool _silentDoubleRecovery;	// 27 = 0x1b
    NSString *_appleID;	// 32 = 0x20
    NSString *_authToken;	// 40 = 0x28
    NSDate *_backOffDate;	// 48 = 0x30
    NSData *;	// 56 = 0x38
    NSString *_countryDialCode;	// 64 = 0x40
    NSString *_countryCode;	// 72 = 0x48
    NSString *_dsid;	// 80 = 0x50
    NSString *_emcsCred;	// 88 = 0x58
    NSDictionary *_emcsDict;	// 96 = 0x60
    NSString *_encodedMetadata;	// 104 = 0x68
    NSString *_duplicateEncodedMetadata;	// 112 = 0x70
    NSDictionary *_escrowRecord;	// 120 = 0x78
    NSString *_escrowProxyURL;	// 128 = 0x80
    NSString *_fmipUUID;	// 136 = 0x88
    NSString *_iCloudEnv;	// 144 = 0x90
    NSData *_iCloudIdentityData;	// 152 = 0x98
    NSString *_iCloudPassword;	// 160 = 0xa0
    NSData *_idmsData;	// 168 = 0xa8
    NSDictionary *_metadata;	// 176 = 0xb0
    NSDictionary *_metadataHash;	// 184 = 0xb8
    NSString *_oldEMCSCred;	// 192 = 0xc0
    NSString *_passphrase;	// 200 = 0xc8
    NSString *_recordID;	// 208 = 0xd0
    NSString *_recoveryKey;	// 216 = 0xd8
    NSString *_smsTarget;	// 224 = 0xe0
    NSNumber *_specifiedFederation;	// 232 = 0xe8
    NSString *_verificationToken;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_queue;	// 248 = 0xf8
    NSError *_error;	// 256 = 0x100
    NSString *_activityLabel;	// 264 = 0x108
    NSUUID *_activityUUID;	// 272 = 0x110
    NSString *_deviceSessionID;	// 280 = 0x118
    NSString *_flowID;	// 288 = 0x120
    NSString *_recoveryUUID;	// 296 = 0x128
    NSString *_doubleRecoveryUUID;	// 304 = 0x130
    NSString *_hsa2CachedPrerecordUUID;	// 312 = 0x138
    EscrowPrerecord *_prerecord;	// 320 = 0x140
    SESWrapper *_ses;	// 328 = 0x148
}

+ (id)knownICDPFederations:(id *)arg1;	// IMP=0x0020000000010073
+ (_Bool)moveToFederationAllowed:(id)arg1 altDSID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000fc00
+ (id)getAcceptedTermsForAltDSID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000000fb94
+ (id)getAllAcceptedTermsWithError:(id *)arg1;	// IMP=0x001000000000fb7d
+ (id)_getAcceptedTermsForAltDSID:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000000f71c
+ (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f33a
+ (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000efc4
+ (unsigned int)daemonPasscodeRequestOpinion:(id *)arg1;	// IMP=0x001000000000e192
+ (unsigned int)needPasscodeForHSA2EscrowRecordUpdate:(id *)arg1;	// IMP=0x001000000000dc24
+ (void)asyncRequestEscrowRecordUpdate;	// IMP=0x001000000000dace
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000001be0
+ (id)_ClassCreateSecureBackupConcurrentConnection;	// IMP=0x0010000000001a50
- (void).cxx_destruct;	// IMP=0x0010000000010a1e
@property(retain, nonatomic) SESWrapper *ses; // @synthesize ses=_ses;
@property(retain, nonatomic) EscrowPrerecord *prerecord; // @synthesize prerecord=_prerecord;
@property(copy, nonatomic) NSString *hsa2CachedPrerecordUUID; // @synthesize hsa2CachedPrerecordUUID=_hsa2CachedPrerecordUUID;
@property(nonatomic) _Bool silentDoubleRecovery; // @synthesize silentDoubleRecovery=_silentDoubleRecovery;
@property(nonatomic) _Bool recoveryResult; // @synthesize recoveryResult=_recoveryResult;
@property(retain, nonatomic) NSString *doubleRecoveryUUID; // @synthesize doubleRecoveryUUID=_doubleRecoveryUUID;
@property(retain, nonatomic) NSString *recoveryUUID; // @synthesize recoveryUUID=_recoveryUUID;
@property(retain, nonatomic) NSString *flowID; // @synthesize flowID=_flowID;
@property(retain, nonatomic) NSString *deviceSessionID; // @synthesize deviceSessionID=_deviceSessionID;
@property(nonatomic) _Bool sosCompatibleEscrowSorting; // @synthesize sosCompatibleEscrowSorting=_sosCompatibleEscrowSorting;
@property(nonatomic) _Bool nonViableRepair; // @synthesize nonViableRepair=_nonViableRepair;
@property(nonatomic) _Bool deleteDoubleOnly; // @synthesize deleteDoubleOnly=_deleteDoubleOnly;
@property(nonatomic) _Bool suppressServerFiltering; // @synthesize suppressServerFiltering=_suppressServerFiltering;
@property(readonly, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(readonly, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;
@property(nonatomic) _Bool usesRecoveryKey; // @synthesize usesRecoveryKey=_usesRecoveryKey;
@property(nonatomic) _Bool usesRandomPassphrase; // @synthesize usesRandomPassphrase=_usesRandomPassphrase;
@property(nonatomic) _Bool usesMultipleiCSC; // @synthesize usesMultipleiCSC=_usesMultipleiCSC;
@property(nonatomic) _Bool useRecoveryPET; // @synthesize useRecoveryPET=_useRecoveryPET;
@property(nonatomic) _Bool useCachedPassphrase; // @synthesize useCachedPassphrase=_useCachedPassphrase;
@property(nonatomic) _Bool synchronize; // @synthesize synchronize=_synchronize;
@property(nonatomic) _Bool stingray; // @synthesize stingray=_stingray;
@property(copy, nonatomic) NSNumber *specifiedFederation; // @synthesize specifiedFederation=_specifiedFederation;
@property(nonatomic) _Bool silent; // @synthesize silent=_silent;
@property(copy, nonatomic) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(copy, nonatomic) NSString *oldEMCSCred; // @synthesize oldEMCSCred=_oldEMCSCred;
@property(retain, nonatomic) NSDictionary *metadataHash; // @synthesize metadataHash=_metadataHash;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool idmsRecovery; // @synthesize idmsRecovery=_idmsRecovery;
@property(retain, nonatomic) NSData *idmsData; // @synthesize idmsData=_idmsData;
@property(copy, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property(retain, nonatomic) NSData *iCloudIdentityData; // @synthesize iCloudIdentityData=_iCloudIdentityData;
@property(copy, nonatomic) NSString *iCloudEnv; // @synthesize iCloudEnv=_iCloudEnv;
@property(nonatomic) _Bool icdp; // @synthesize icdp=_icdp;
@property(copy, nonatomic) NSString *fmipUUID; // @synthesize fmipUUID=_fmipUUID;
@property(nonatomic) _Bool fmipRecovery; // @synthesize fmipRecovery=_fmipRecovery;
@property(nonatomic) _Bool excludeiCDPRecords; // @synthesize excludeiCDPRecords=_excludeiCDPRecords;
@property(copy, nonatomic) NSString *escrowProxyURL; // @synthesize escrowProxyURL=_escrowProxyURL;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *duplicateEncodedMetadata; // @synthesize duplicateEncodedMetadata=_duplicateEncodedMetadata;
@property(copy, nonatomic) NSString *encodedMetadata; // @synthesize encodedMetadata=_encodedMetadata;
@property(nonatomic) _Bool emcsMode; // @synthesize emcsMode=_emcsMode;
@property(retain, nonatomic) NSDictionary *emcsDict; // @synthesize emcsDict=_emcsDict;
@property(copy, nonatomic) NSString *emcsCred; // @synthesize emcsCred=_emcsCred;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(nonatomic) _Bool deleteAll; // @synthesize deleteAll=_deleteAll;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *countryDialCode; // @synthesize countryDialCode=_countryDialCode;
@property(retain, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property(retain, nonatomic) NSDate *backOffDate; // @synthesize backOffDate=_backOffDate;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (_Bool)requiresDoubleEnrollment;	// IMP=0x001000000000ef56
- (void)getCertificates:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ec3b
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 uuid:(id)arg2 reason:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000e670
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 uuid:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000e658
- (MISSING_TYPE *)beginHSA2PasscodeRequest:error: /* Error: Ran out of types for this method. */;	// IMP=0x001000000000e5ba
- (void)prepareHSA2EscrowRecordContents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d72c
- (id)srpRecoveryBlobFromSRPInitResponse:(id)arg1;	// IMP=0x001000000000d718
- (id)srpRecoveryBlobFromSRPInitResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000d67d
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;	// IMP=0x001000000000d5f2
- (id)srpInitNonce;	// IMP=0x001000000000d52d
- (void)setBackOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d4cc
- (void)backOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d46b
- (id)backupWithInfo:(id)arg1;	// IMP=0x001000000000d088
- (id)backupForRecoveryKeyWithInfo:(id)arg1;	// IMP=0x001000000000cca5
- (void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000cc44
- (id)changeSMSTargetWithInfo:(id)arg1;	// IMP=0x001000000000cbcb
- (_Bool)changeSMSTargetWithError:(id *)arg1;	// IMP=0x001000000000c7f0
- (void)getCountrySMSCodesWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c78f
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c6e5
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c684
- (id)startSMSChallengeWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x001000000000c5ff
- (id)startSMSChallengeWithError:(id *)arg1;	// IMP=0x001000000000c198
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c137
- (id)uncachePassphraseWithInfo:(id)arg1;	// IMP=0x001000000000c108
- (void)cachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c0a7
- (id)cachePassphraseWithInfo:(id)arg1;	// IMP=0x001000000000c078
- (void)stashRecoveryDataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bfbe
- (void)disableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bf5d
- (id)disableWithInfo:(id)arg1;	// IMP=0x001000000000bee4
- (_Bool)disableWithError:(id *)arg1;	// IMP=0x001000000000bb09
- (void)recoverWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000baf7
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ba3d
- (id)recoverWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x001000000000b9b8
- (_Bool)verifyRecoveryKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000b508
- (_Bool)restoreKeychainWithBackupPassword:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000b058
- (void)restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 error:(id *)arg5;	// IMP=0x001000000000aae1
- (_Bool)isRecoveryKeySet:(id *)arg1;	// IMP=0x001000000000a5ce
- (id)recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000a07c
- (id)recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000009a77
- (id)recoverWithError:(id *)arg1;	// IMP=0x0010000000009610
- (void)enableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000095af
- (id)enableWithInfo:(id)arg1;	// IMP=0x0010000000009536
- (_Bool)enableWithError:(id *)arg1;	// IMP=0x001000000000915b
- (void)updateMetadataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000090fa
- (id)updateMetadataWithInfo:(id)arg1;	// IMP=0x0010000000009081
- (_Bool)updateMetadataWithError:(id *)arg1;	// IMP=0x0010000000008c21
- (void)getAccountInfoWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008c0f
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008bae
- (id)getAccountInfoWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x0010000000008b29
- (id)getAccountInfoWithError:(id *)arg1;	// IMP=0x00100000000085b4
- (void)stateCaptureWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008216
- (void)notificationInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007e08
- (void)setBackOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007ac4
- (void)backOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007761
- (void)backupWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000073eb
- (void)changeSMSTargetWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000070a7
- (void)getCountrySMSCodesWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006d44
- (void)startSMSChallengeWithResults:(CDUnknownBlockType)arg1;	// IMP=0x00100000000069e1
- (void)uncachePassphrase;	// IMP=0x001000000000681e
- (void)uncacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006563
- (void)cacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000062a8
- (void)uncachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005fed
- (void)cachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005d32
- (void)cachePassphrase;	// IMP=0x0010000000005b3b
- (void)updateMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000057f7
- (void)stashRecoveryDataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000054b3
- (void)disableWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000516f
- (void)createICDPRecordWithContents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d69
- (void)recoverRecordContents:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004a06
- (void)recoverWithResults:(CDUnknownBlockType)arg1;	// IMP=0x00100000000046a3
- (void)enableWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000412f
- (void)getAccountInfoWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003d81
- (void)populateWithInfo:(id)arg1;	// IMP=0x00100000000031b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000026f7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000001dd1
- (id)init;	// IMP=0x0010000000001db8
- (id)initWithUserActivityLabel:(id)arg1;	// IMP=0x0010000000001be8
- (id)_CreateSecureBackupConnection;	// IMP=0x00100000000018c0

@end
