//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDModifyRecordsOperation, CKDPCSCache, CKDPCSManager, CKDProgressTracker, CKDRecordPCSData, CKDSharePCSData, CKDZonePCSData, CKRecord, CKRecordID, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol OS_dispatch_group;

@interface CKDModifyRecordHandler : NSObject
{
    _Bool _isDelete;	// 8 = 0x8
    _Bool _saveCompletionBlockCalled;	// 9 = 0x9
    _Bool _needsRefetch;	// 10 = 0xa
    _Bool _didAttemptZoneWideShareKeyRoll;	// 11 = 0xb
    _Bool _didRollRecordPCSMasterKey;	// 12 = 0xc
    int _saveAttempts;	// 16 = 0x10
    CKDModifyRecordsOperation *_operation;	// 24 = 0x18
    CKRecord *_record;	// 32 = 0x20
    CKRecordID *_recordID;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_pcsGroup;	// 48 = 0x30
    CKDRecordPCSData *_recordPCSData;	// 56 = 0x38
    CKDSharePCSData *_sharePCSData;	// 64 = 0x40
    CKRecord *_serverRecord;	// 72 = 0x48
    NSString *_etag;	// 80 = 0x50
    unsigned long long _state;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    NSMutableDictionary *_rereferencedAssetArrayByFieldname;	// 104 = 0x68
    CKDProgressTracker *_progressTracker;	// 112 = 0x70
    long long _batchRank;	// 120 = 0x78
    CKDZonePCSData *_sharedZonePCSData;	// 128 = 0x80
    NSDictionary *_assetUUIDToExpectedProperties;	// 136 = 0x88
}

+ (id)_stringForState:(unsigned long long)arg1;	// IMP=0x00600000001eeedb
+ (id)modifyHandlerForDeleteWithRecordID:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001eec9f
+ (id)modifyHandlerWithRecord:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001eec29
- (void).cxx_destruct;	// IMP=0x0000000000203e45
@property(nonatomic) _Bool didRollRecordPCSMasterKey; // @synthesize didRollRecordPCSMasterKey=_didRollRecordPCSMasterKey;
@property(copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // @synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties;
@property(nonatomic) _Bool didAttemptZoneWideShareKeyRoll; // @synthesize didAttemptZoneWideShareKeyRoll=_didAttemptZoneWideShareKeyRoll;
@property(retain, nonatomic) CKDZonePCSData *sharedZonePCSData; // @synthesize sharedZonePCSData=_sharedZonePCSData;
@property(nonatomic) _Bool needsRefetch; // @synthesize needsRefetch=_needsRefetch;
@property(nonatomic) _Bool saveCompletionBlockCalled; // @synthesize saveCompletionBlockCalled=_saveCompletionBlockCalled;
@property(nonatomic) int saveAttempts; // @synthesize saveAttempts=_saveAttempts;
@property(nonatomic) long long batchRank; // @synthesize batchRank=_batchRank;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSMutableDictionary *rereferencedAssetArrayByFieldname; // @synthesize rereferencedAssetArrayByFieldname=_rereferencedAssetArrayByFieldname;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) CKRecord *serverRecord; // @synthesize serverRecord=_serverRecord;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData; // @synthesize sharePCSData=_sharePCSData;
@property(retain, nonatomic) CKDRecordPCSData *recordPCSData; // @synthesize recordPCSData=_recordPCSData;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *pcsGroup; // @synthesize pcsGroup=_pcsGroup;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(nonatomic) __weak CKDModifyRecordsOperation *operation; // @synthesize operation=_operation;
- (void)_clearRecordProtectionDataForRecord;	// IMP=0x0000000000202e85
- (void)clearProtectionDataForRecord;	// IMP=0x0000000000202e73
- (void)savePCSDataToCache;	// IMP=0x000000000020275d
- (_Bool)_wrapEncryptedDataOnRecord:(id)arg1;	// IMP=0x0000000000202235
- (_Bool)_encryptMergeableDeltasInRecordValueStore:(id)arg1 shareProtection:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000002018c4
- (_Bool)_wrapEncryptedDataForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x0000000000201410
- (void)_pretendToWrapEncryptedDataForRecordValueStore:(id)arg1;	// IMP=0x0000000000200ff9
- (_Bool)_wrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3 recordID:(id)arg4;	// IMP=0x0000000000200b72
- (void)prepareForSave;	// IMP=0x00000000002006d5
- (void)prepareStreamingAsset:(id)arg1 forUploadWithRecord:(id)arg2;	// IMP=0x000000000020032a
- (_Bool)_prepareAsset:(id)arg1 recordKey:(id)arg2 mergeableDeltaID:(id)arg3 record:(id)arg4 error:(id *)arg5;	// IMP=0x00000000001ff069
- (id)prepareAssetsForUploadWithError:(id *)arg1;	// IMP=0x00000000001fd2e8
- (id)assetsWhichNeedRecordFetch;	// IMP=0x00000000001fcc48
- (void)fetchSharePCSData;	// IMP=0x00000000001fcb8b
- (void)_handlePCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001fa3e0
- (void)_fetchExistingPCSForProvidedPCSData:(id)arg1;	// IMP=0x00000000001f99a6
- (void)_unwrapRecordPCSForParent;	// IMP=0x00000000001f9220
- (void)_unwrapRecordPCSWithShareID:(id)arg1;	// IMP=0x00000000001f8af9
- (void)_unwrapRecordPCSForZone;	// IMP=0x00000000001f8295
- (void)_continueCreateAndSavePCSWithZonePCS:(id)arg1 sharePCS:(id)arg2;	// IMP=0x00000000001f7488
- (_Bool)_useZoneishPCS;	// IMP=0x00000000001f7345
- (void)_createAndSavePCS;	// IMP=0x00000000001f650f
- (id)_addParentPCS:(id)arg1 toRecordPCS:(id)arg2;	// IMP=0x00000000001f5d83
- (void)_fetchParentPCSForData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001f4673
- (void)_reallyAddShareToPCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001f3531
- (void)_keyRollIfNeededForRecordPCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001f2ebf
- (void)_addShareToPCSData:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001f2ead
- (void)_fetchSharePCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f27e5
- (void)_fetchParentPCSForID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f22e7
- (void)_fetchPCSData;	// IMP=0x00000000001f2018
- (void)_reallyFetchPCSDataWithOptions:(unsigned long long)arg1;	// IMP=0x00000000001f16fc
- (void)_loadPCSData;	// IMP=0x00000000001f11d4
- (_Bool)_createPublicSharingKeyWithError:(id *)arg1;	// IMP=0x00000000001f0bb6
- (_Bool)_canSetPreviousProtectionEtag;	// IMP=0x00000000001f0b72
- (void)_setSigningPCSIdentity:(id)arg1;	// IMP=0x00000000001f03f7
- (void)_fetchSigningPCSForRecordToDelete;	// IMP=0x00000000001ef906
- (void)fetchRecordPCSData;	// IMP=0x00000000001ef3b7
- (_Bool)_needsSigningPCS;	// IMP=0x00000000001ef304
- (void)noteSideEffectRecordPendingDelete:(id)arg1;	// IMP=0x00000000001ef201
- (void)noteSideEffectRecordAbsent:(id)arg1;	// IMP=0x00000000001ef1fb
- (void)noteSideEffectRecordPendingModify:(id)arg1;	// IMP=0x00000000001ef1f5
- (id)sideEffectRecordIDs;	// IMP=0x00000000001ef067
- (id)description;	// IMP=0x00000000001eeefa
@property(readonly, nonatomic) CKDPCSCache *pcsCache;
@property(readonly, nonatomic) CKDPCSManager *pcsManager;
@property(readonly, nonatomic) _Bool isShare;
- (id)_initForDeleteWithRecordID:(id)arg1 operation:(id)arg2;	// IMP=0x00000000001eeba4
- (id)_initWithRecord:(id)arg1 operation:(id)arg2;	// IMP=0x00000000001eeb38
- (id)_initCommonWithOperation:(id)arg1;	// IMP=0x00000000001eeabc

@end

