//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKQueryCursor, CKRecordZoneID, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitCKQueryBackedImportWorkItem
{
    NSString *_recordType;	// 8 = 0x8
    NSDate *_maxModificationDate;	// 16 = 0x10
    CKQueryCursor *_queryCursor;	// 24 = 0x18
    CKRecordZoneID *_zoneIDToQuery;	// 32 = 0x20
}

- (_Bool)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000066794
- (_Bool)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006658f
- (_Bool)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000000065fc9
- (void)addUpdatedRecord:(id)arg1;	// IMP=0x0000000000065ee7
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065380
- (id)description;	// IMP=0x00000000000652d1
- (void)dealloc;	// IMP=0x000000000006524a
- (id)initForRecordType:(id)arg1 withOptions:(id)arg2 request:(id)arg3;	// IMP=0x00000000000651a6

@end

