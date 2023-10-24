//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary, NSString;

@interface CKDFetchRecordVersionsRequest : CKDURLRequest
{
    _Bool _shouldFetchAssetContent;	// 8 = 0x8
    _Bool _isDeleted;	// 9 = 0x9
    CDUnknownBlockType _recordVersionsFetchedBlock;	// 16 = 0x10
    NSArray *_recordIDs;	// 24 = 0x18
    NSArray *_desiredKeys;	// 32 = 0x20
    NSString *_minimumVersionETag;	// 40 = 0x28
    NSMutableDictionary *_recordIDByRequestID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000334312
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSString *minimumVersionETag; // @synthesize minimumVersionETag=_minimumVersionETag;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(copy, nonatomic) CDUnknownBlockType recordVersionsFetchedBlock; // @synthesize recordVersionsFetchedBlock=_recordVersionsFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000003340c5
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000333c3e
- (id)generateRequestOperations;	// IMP=0x000000000033368d
- (id)requestOperationClasses;	// IMP=0x0000000000333621
- (id)zoneIDsToLock;	// IMP=0x000000000033345b
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x00000000003333ca
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000033329c
- (id)initWithOperation:(id)arg1 recordIDs:(id)arg2 desiredKeys:(id)arg3 minimumVersionETag:(id)arg4;	// IMP=0x0000000000333193

@end
