//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface PersistentDownloadManagerEntity : SSSQLiteEntity
{
}

+ (void)initialize;	// IMP=0x00400000000c866c
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00100000000c8653
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00100000000c8646
+ (id)databaseTable;	// IMP=0x00100000000c8639
- (void)performNewsstandMigration1InDatabase:(id)arg1;	// IMP=0x00400000000c80a1
- (id)finishPersistentDownloadsWithDownloadIDs:(id)arg1;	// IMP=0x00100000000c76d9

@end

