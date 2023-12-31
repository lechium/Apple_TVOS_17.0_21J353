//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDRecordCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x001000000003446d
+ (id)dbProperties;	// IMP=0x0010000000034460
- (void)clearAssetAuthTokensForRecord:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x0000000000038c9b
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x0000000000038a9d
- (void)clearAllRecordsForZoneWithID:(id)arg1;	// IMP=0x0000000000038949
- (void)clearAllRecordsInScope:(long long)arg1;	// IMP=0x0000000000038783
- (void)clearAllRecords;	// IMP=0x000000000003870e
- (void)deleteRecordWithID:(id)arg1 scope:(long long)arg2;	// IMP=0x00000000000383f5
- (id)etagForRecordID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000037b9e
- (void)addRecord:(id)arg1 container:(id)arg2 knownUserKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000036e71
- (unsigned long long)numberOfRecordsWithID:(id)arg1 container:(id)arg2;	// IMP=0x0000000000036c08
- (id)recordsWithIDs:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000035c72
- (id)recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000035ae9
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;	// IMP=0x000000000003574f
- (id)_recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000034d4e
- (id)fetchCacheEntryRecordData:(id)arg1;	// IMP=0x0000000000034cc3
- (_Bool)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;	// IMP=0x000000000003478a
- (_Bool)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;	// IMP=0x00000000000345b7
- (id)_dsidForAccount:(id)arg1;	// IMP=0x000000000003454a
- (id)init;	// IMP=0x000000000003447e

@end

