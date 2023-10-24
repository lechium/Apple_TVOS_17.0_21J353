//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSDate, NSMutableDictionary;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest
{
    _Bool _markZonesAsUserPurged;	// 8 = 0x8
    NSDate *_lastMissingManateeIdentityErrorDate;	// 16 = 0x10
    CDUnknownBlockType _recordZoneModifiedBlock;	// 24 = 0x18
    NSArray *_recordZonesToSave;	// 32 = 0x20
    NSArray *_recordZoneIDsToDelete;	// 40 = 0x28
    NSMutableDictionary *_recordZoneIDByRequestID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000037b171
@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) CDUnknownBlockType recordZoneModifiedBlock; // @synthesize recordZoneModifiedBlock=_recordZoneModifiedBlock;
@property(retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate; // @synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate;
@property(nonatomic) _Bool markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000037af40
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000037ac80
- (id)generateRequestOperations;	// IMP=0x000000000037a36a
- (id)requestOperationClasses;	// IMP=0x000000000037a283
- (id)zoneIDsToLock;	// IMP=0x0000000000379fc9
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x0000000000379fc1
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x0000000000379ebb
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000379d4c
- (id)initWithOperation:(id)arg1 recordZonesToSave:(id)arg2 recordZoneIDsToDelete:(id)arg3;	// IMP=0x0000000000379c83

@end

