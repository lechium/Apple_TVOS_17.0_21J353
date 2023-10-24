//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID, NSDictionary;
@protocol CKMovePhotosOperationCallbacks;

@interface CKDMovePhotosOperation
{
    CDUnknownBlockType _moveCompletionBlock;	// 8 = 0x8
    NSDictionary *_moveChangesByDestinationRecordID;	// 16 = 0x10
    CKRecordZoneID *_sourceZoneID;	// 24 = 0x18
    long long _sourceDatabaseScope;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001794a1
@property(nonatomic) long long sourceDatabaseScope; // @synthesize sourceDatabaseScope=_sourceDatabaseScope;
@property(copy, nonatomic) CKRecordZoneID *sourceZoneID; // @synthesize sourceZoneID=_sourceZoneID;
@property(copy, nonatomic) NSDictionary *moveChangesByDestinationRecordID; // @synthesize moveChangesByDestinationRecordID=_moveChangesByDestinationRecordID;
@property(copy, nonatomic) CDUnknownBlockType moveCompletionBlock; // @synthesize moveCompletionBlock=_moveCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000017929f
- (void)main;	// IMP=0x00000000001790d0
- (void)_reallyHandleRecordMoved:(id)arg1 handler:(id)arg2 responseCode:(id)arg3 recordForOplockFailure:(id)arg4 destinationServerRecord:(id)arg5 moveMarkerServerRecord:(id)arg6;	// IMP=0x00000000001770a2
- (void)_handleRecordMoved:(id)arg1 handler:(id)arg2 responseCode:(id)arg3 recordForOplockFailure:(id)arg4 destinationServerRecord:(id)arg5 moveMarkerServerRecord:(id)arg6;	// IMP=0x0000000000176393
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 recordIDsToDeleteToSigningPCSIdentity:(id)arg4 handlersByRecordID:(id)arg5 sendMergeableDeltas:(_Bool)arg6;	// IMP=0x0000000000175e79
- (void)moveCallbackWithMetadata:(id)arg1 error:(id)arg2;	// IMP=0x0000000000175734
- (void)callbackWithMetadata:(id)arg1 error:(id)arg2;	// IMP=0x00000000001755a9
- (id)handlerForDeleteWithRecordID:(id)arg1;	// IMP=0x000000000017552c
- (id)handlerForSaveWithRecord:(id)arg1;	// IMP=0x00000000001753d9
- (int)operationType;	// IMP=0x00000000001753ce
- (id)activityCreate;	// IMP=0x00000000001753a5
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000175175

// Remaining properties
@property(retain, nonatomic) id <CKMovePhotosOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

