//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKSQLiteCompiledStatementDecoder, CKSQLiteDatabase, CKSQLiteTable, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString, NSNumber, NSPointerArray, NSPredicate, NSString;

@interface CKSQLiteCompiledStatement : NSObject
{
    CKSQLiteDatabase *_db;	// 8 = 0x8
    struct sqlite3_stmt *_handle;	// 16 = 0x10
    NSString *_sql;	// 24 = 0x18
    NSArray *_resultColumns;	// 32 = 0x20
    NSArray *_resultColumnTypes;	// 40 = 0x28
    NSPointerArray *_fetchedValues;	// 48 = 0x30
    NSPredicate *_wherePredicate;	// 56 = 0x38
    Class _tableClass;	// 64 = 0x40
    NSMutableDictionary *_bindingTypesByVariable;	// 72 = 0x48
    NSDictionary *_searchValues;	// 80 = 0x50
    _Bool _needsSearchBinding;	// 88 = 0x58
    _Bool _sqlLoggingEnabled;	// 89 = 0x59
    NSMutableString *_orderBySQL;	// 96 = 0x60
    NSMutableArray *_boundObjects;	// 104 = 0x68
    CKSQLiteCompiledStatementDecoder *_decoder;	// 112 = 0x70
    _Bool _shouldCache;	// 120 = 0x78
    CKSQLiteTable *_table;	// 128 = 0x80
    NSString *_label;	// 136 = 0x88
    NSArray *_searchProperties;	// 144 = 0x90
    NSNumber *_limit;	// 152 = 0x98
    NSNumber *_offset;	// 160 = 0xa0
}

+ (id)statementForDeletingInTable:(id)arg1;	// IMP=0x006000000006cbc2
+ (id)statementForFetchingMaximumValueForColumn:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000006cba3
+ (id)statementForFetchingMinimumValueForColumn:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000006cb84
+ (id)_statementForFetchingMinMax:(id)arg1 forColumn:(id)arg2 inTable:(id)arg3;	// IMP=0x006000000006c9d7
+ (id)statementForFetchingColumns:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000006c6a4
+ (id)statementForInserting:(id)arg1 orUpdating:(id)arg2 inTable:(id)arg3;	// IMP=0x006000000006c350
+ (id)statementForInserting:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000006c339
+ (id)statementForUpdatingColumns:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000006c0b6
+ (id)statementForSizingColumn:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000006bfd3
+ (id)statementForSummingColumn:(id)arg1 inTable:(id)arg2;	// IMP=0x006000000006bef0
+ (id)statementForCountingRowsInTable:(id)arg1;	// IMP=0x006000000006be28
+ (id)statementForFetchingAllTableNamesInDatabase:(id)arg1;	// IMP=0x006000000006bdca
- (void).cxx_destruct;	// IMP=0x000000000006e9e8
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSArray *searchProperties; // @synthesize searchProperties=_searchProperties;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) __weak CKSQLiteTable *table; // @synthesize table=_table;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x000000000006e86c
- (void)enumerateResultColumnsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006e73e
- (id)bindValueColumn:(id)arg1 type:(unsigned int)arg2 value:(id)arg3;	// IMP=0x000000000006e510
- (id)bindValue:(id)arg1 ofType:(unsigned int)arg2 atIndex:(int)arg3;	// IMP=0x000000000006e270
- (id)boundObjects;	// IMP=0x000000000006e235
- (_Bool)step:(id *)arg1;	// IMP=0x000000000006e0b8
- (id)_fillFetchedValues;	// IMP=0x000000000006daad
- (id)compile;	// IMP=0x000000000006d892
- (void)orderByProperty:(id)arg1 ascending:(_Bool)arg2;	// IMP=0x000000000006d7c3
- (id)searchBindingsDescription;	// IMP=0x000000000006d76f
- (id)doSearchValueBinding;	// IMP=0x000000000006d42f
- (id)sqlValueForVariable:(id)arg1;	// IMP=0x000000000006d39b
- (id)bindSearchValues:(id)arg1;	// IMP=0x000000000006d344
- (id)addBindingVariable:(id)arg1 withAssociatedProperty:(id)arg2;	// IMP=0x000000000006d1f0
- (id)setSearchPredicate:(id)arg1 forProperties:(id)arg2 tableClass:(Class)arg3;	// IMP=0x000000000006d129
- (void)resetAndClearBindings;	// IMP=0x000000000006d061
- (id)propertyDecoder:(id *)arg1;	// IMP=0x000000000006cfb5
- (id)fetchedColumns;	// IMP=0x000000000006cfa7
- (id)description;	// IMP=0x000000000006cf0d
- (void)invalidate;	// IMP=0x000000000006cebc
- (void)dealloc;	// IMP=0x000000000006ce7e
- (id)initWithTable:(id)arg1 sql:(id)arg2 resultColumns:(id)arg3 resultColumnTypes:(id)arg4;	// IMP=0x000000000006cd89
- (id)initWithDatabase:(id)arg1 sql:(id)arg2 resultColumns:(id)arg3 resultColumnTypes:(id)arg4;	// IMP=0x000000000006cc82

@end

