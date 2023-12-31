//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTable.h"

@interface CKSQLiteKeyValueStore : CKSQLiteTable
{
}

+ (Class)entryClass;	// IMP=0x00800000000ba1a5
+ (id)dbProperties;	// IMP=0x00800000000ba198
- (id)setObjectValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000bbf68
- (id)objectValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000bbd58
- (id)setUUIDValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000bbb0a
- (id)UUIDValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000bb8fa
- (id)setDateValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000bb6ac
- (id)dateValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000bb49c
- (id)setDataValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000bb24e
- (id)dataValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000bb03e
- (id)setStringValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000badf0
- (id)stringValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000babe0
- (id)setNumberValue:(id)arg1 forKey:(id)arg2 scope:(unsigned long long)arg3 scopeIdentifier:(id)arg4;	// IMP=0x00000000000ba992
- (id)numberValueForKey:(id)arg1 scope:(unsigned long long)arg2 scopeIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ba782
- (id)wakeFromDatabase;	// IMP=0x00000000000ba6ea
- (void)purgeOrphanedKeys;	// IMP=0x00000000000ba652
- (void)purgeOrphanedTableKeys;	// IMP=0x00000000000ba45a
- (void)purgeOrphanedTableGroupKeys;	// IMP=0x00000000000ba1b6

@end

