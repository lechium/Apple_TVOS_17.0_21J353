//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLWifiAssociatedApCentroidStore
{
}

- (id)getSampleMacs:(int)arg1;	// IMP=0x00400000007cc849
- (_Bool)isEmpty;	// IMP=0x00100000007cc831
- (int)count;	// IMP=0x00100000007cc7f4
- (id)fetchRecord:(id)arg1;	// IMP=0x00100000007cc73d
- (id)fetchAllRecordsForMac:(id)arg1;	// IMP=0x00100000007cc68d
- (id)fetchAllRecords;	// IMP=0x00100000007cc650
- (_Bool)deleteRecordsLastUpdatedEarlierThan:(double)arg1;	// IMP=0x00100000007cc5a3
- (_Bool)deleteRecordsByMac:(id)arg1;	// IMP=0x00100000007cc4f3
- (_Bool)deleteAllRecords;	// IMP=0x00100000007cc4b6
- (_Bool)addRecord:(id)arg1;	// IMP=0x00100000007cc28c

@end

