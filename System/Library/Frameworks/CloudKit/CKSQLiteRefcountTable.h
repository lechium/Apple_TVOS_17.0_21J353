//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteTable.h"

@class CKSQLiteReferencedObjectTable, NSString;

@interface CKSQLiteRefcountTable : CKSQLiteTable
{
    CKSQLiteReferencedObjectTable *_referentDBTable;	// 8 = 0x8
    NSString *_referentPrimaryKey;	// 16 = 0x10
}

+ (Class)entryClass;	// IMP=0x006000000011d0db
+ (id)dbProperties;	// IMP=0x006000000011d0ce
- (void).cxx_destruct;	// IMP=0x000000000011d578
- (unsigned long long)refcountForObjectID:(id)arg1;	// IMP=0x000000000011d4f1
- (id)finishInitializing;	// IMP=0x000000000011d42b
- (id)deleteUnreferenced;	// IMP=0x000000000011d3cf
- (id)createTableSQL;	// IMP=0x000000000011d20d
- (id)initWithLogicalTableName:(id)arg1 referentTable:(id)arg2;	// IMP=0x000000000011d0ec

@end
