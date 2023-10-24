//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, CKShare;

@interface CKDModifyShareHandler
{
    _Bool _haveAddedOwnerToShare;	// 8 = 0x8
    _Bool _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;	// 9 = 0x9
    struct _PCSPublicIdentityData *_selfPPPCSOwnerIdentity;	// 16 = 0x10
}

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001b84a2
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001b8410
@property(nonatomic) struct _PCSPublicIdentityData *selfPPPCSOwnerIdentity; // @synthesize selfPPPCSOwnerIdentity=_selfPPPCSOwnerIdentity;
@property(nonatomic) _Bool isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade; // @synthesize isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade=_isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property(nonatomic) _Bool haveAddedOwnerToShare; // @synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare;
- (void)dealloc;	// IMP=0x00000000001c6afb
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;	// IMP=0x00000000001c67bd
- (void)savePCSDataToCache;	// IMP=0x00000000001c659a
- (void)setServerRecord:(id)arg1;	// IMP=0x00000000001c5eee
- (void)clearProtectionDataForRecord;	// IMP=0x00000000001c5a8d
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c5804
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c3647
- (unsigned long long)invitedPCSPermissionForParticipant:(id)arg1;	// IMP=0x00000000001c35ab
- (struct _PCSPublicIdentityData *)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c321f
- (_Bool)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1;	// IMP=0x00000000001c3199
- (id)_publicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c2bf2
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c2332
- (_Bool)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;	// IMP=0x00000000001c2028
- (_Bool)_modifyRoleForParticipant:(id)arg1 invitedPCS:(struct _OpaquePCSShareProtection *)arg2 shareeIdentities:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001c178c
- (void)_setupParticipantsProtectionInfos;	// IMP=0x00000000001c0027
- (void)_addPublicKeyToSelfParticipant;	// IMP=0x00000000001bf777
- (_Bool)_cleanPublicPCSforShareWithError:(id *)arg1;	// IMP=0x00000000001bf44d
- (_Bool)_updateSharePublicPCSWithError:(id *)arg1;	// IMP=0x00000000001beb16
- (_Bool)_serializePCSDataForShareWithError:(id *)arg1;	// IMP=0x00000000001bd5b1
- (void)_alignParticipantPermissions;	// IMP=0x00000000001bd178
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x00000000001bcc5d
- (void)prepareForSave;	// IMP=0x00000000001bc47c
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2;	// IMP=0x00000000001bb83c
- (id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x00000000001bae7f
- (id)_createNewSharePCSDataWithError:(id *)arg1;	// IMP=0x00000000001ba668
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ba2d3
- (void)_fetchSharePCSData;	// IMP=0x00000000001b93f1
- (void)fetchSharePCSData;	// IMP=0x00000000001b8ada
- (void)noteSideEffectRecordPendingDelete:(id)arg1;	// IMP=0x00000000001b89d7
- (void)noteSideEffectRecordAbsent:(id)arg1;	// IMP=0x00000000001b89d1
- (void)noteSideEffectRecordPendingModify:(id)arg1;	// IMP=0x00000000001b88b4
- (id)sideEffectRecordIDs;	// IMP=0x00000000001b870e
- (unsigned long long)serviceType;	// IMP=0x00000000001b8679
- (_Bool)isCloudDocsContainer;	// IMP=0x00000000001b85df
- (_Bool)isShare;	// IMP=0x00000000001b85d7
@property(readonly, nonatomic) CKRecordID *shareID;
@property(readonly, nonatomic) CKShare *share;

@end

