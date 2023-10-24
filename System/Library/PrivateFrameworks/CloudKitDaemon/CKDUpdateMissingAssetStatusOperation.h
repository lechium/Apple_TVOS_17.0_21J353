//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDFetchRecordsOperation, CKDModifyRecordsOperation, CKRecord, CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusOperation
{
    _Bool _recovered;	// 8 = 0x8
    _Bool _isPackage;	// 9 = 0x9
    CKRecordID *_repairRecordID;	// 16 = 0x10
    NSArray *_assetSizes;	// 24 = 0x18
    NSArray *_assetPutReceipts;	// 32 = 0x20
    CKDFetchRecordsOperation *_fetchOperation;	// 40 = 0x28
    CKDModifyRecordsOperation *_modifyOperation;	// 48 = 0x30
    CKRecord *_record;	// 56 = 0x38
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x006000000021566a
- (void).cxx_destruct;	// IMP=0x0000000000215d43
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKDModifyRecordsOperation *modifyOperation; // @synthesize modifyOperation=_modifyOperation;
@property(retain, nonatomic) CKDFetchRecordsOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSArray *assetPutReceipts; // @synthesize assetPutReceipts=_assetPutReceipts;
@property(retain, nonatomic) NSArray *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) _Bool recovered; // @synthesize recovered=_recovered;
@property(retain, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;
- (void)main;	// IMP=0x0000000000215c11
- (void)_updateMissingAssetStatus;	// IMP=0x00000000002156c5
- (int)operationType;	// IMP=0x00000000002156ba
- (_Bool)makeStateTransition;	// IMP=0x00000000002155c5
- (id)activityCreate;	// IMP=0x000000000021559c
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000021547f

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

