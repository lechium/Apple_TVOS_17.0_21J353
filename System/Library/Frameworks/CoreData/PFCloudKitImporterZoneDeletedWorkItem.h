//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterZoneDeletedWorkItem
{
    CKRecordZoneID *_deletedRecordZoneID;	// 8 = 0x8
}

- (void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002455d9
- (id)description;	// IMP=0x0000000000245546
- (void)dealloc;	// IMP=0x00000000002454f8
- (id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3;	// IMP=0x000000000024549b

@end
