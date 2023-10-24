//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;
@protocol CKPublishAssetsOperationCallbacks;

@interface CKDPublishAssetsOperation
{
    CDUnknownBlockType _assetPublishedBlock;	// 8 = 0x8
    NSArray *_recordIDs;	// 16 = 0x10
    NSDictionary *_fileNamesByAssetFieldNames;	// 24 = 0x18
    unsigned long long _requestedTTL;	// 32 = 0x20
    unsigned long long _URLOptions;	// 40 = 0x28
    NSOperation *_fetchRecordsOperation;	// 48 = 0x30
    NSMutableDictionary *_fetchedRecordsByID;	// 56 = 0x38
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x0060000000159cc8
- (void).cxx_destruct;	// IMP=0x000000000015c0c6
@property(retain, nonatomic) NSMutableDictionary *fetchedRecordsByID; // @synthesize fetchedRecordsByID=_fetchedRecordsByID;
@property(retain) NSOperation *fetchRecordsOperation; // @synthesize fetchRecordsOperation=_fetchRecordsOperation;
@property(nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType assetPublishedBlock; // @synthesize assetPublishedBlock=_assetPublishedBlock;
- (void)cancel;	// IMP=0x000000000015bf5d
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000015bef7
- (void)main;	// IMP=0x000000000015be54
- (void)_fetchRecords;	// IMP=0x000000000015b158
- (void)_fetchPCSForRecords;	// IMP=0x000000000015ab86
- (void)_finishPublishAssetsForRecord:(id)arg1;	// IMP=0x000000000015a788
- (void)_dispatchAssetURLsForRecord:(id)arg1 pcs:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x0000000000159de2
- (id)_checkEntitlements;	// IMP=0x0000000000159d1e
- (_Bool)makeStateTransition;	// IMP=0x0000000000159b81
- (id)activityCreate;	// IMP=0x0000000000159b58
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000159a38

// Remaining properties
@property(retain, nonatomic) id <CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

