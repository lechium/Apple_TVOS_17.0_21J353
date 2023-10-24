//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface CXDatabase : NSObject
{
    NSURL *_url;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    NSMutableDictionary *_sqlQueryToStatements;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002e4b4
@property(retain, nonatomic) NSMutableDictionary *sqlQueryToStatements; // @synthesize sqlQueryToStatements=_sqlQueryToStatements;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000002e32a
- (id)namesOfColumnsInTableWithName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e18c
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(_Bool)arg4 resultRowHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x000000000002e0ae
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x000000000002e08d
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 transient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002dfee
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000002dfd6
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000002deea
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002ded2
- (id)_statementForSQL:(id)arg1 transient:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002dddb
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ddbf
- (_Bool)rollbackTransactionWithError:(id *)arg1;	// IMP=0x000000000002dda3
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x000000000002dd87
- (_Bool)beginTransactionWithError:(id *)arg1;	// IMP=0x000000000002dd6b
@property(readonly, nonatomic) int countOfRecordsModifiedByLastQuery;
@property(readonly, nonatomic) long long lastInsertedRowID;
- (_Bool)setBusyTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x000000000002dbef
- (_Bool)vacuumWithError:(id *)arg1;	// IMP=0x000000000002dbd3
- (_Bool)enableForeignKeysWithError:(id *)arg1;	// IMP=0x000000000002dbb7
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000002d8e9
- (id)description;	// IMP=0x000000000002d861
- (void)dealloc;	// IMP=0x000000000002d7b9
- (id)init;	// IMP=0x000000000002d7ab
- (id)initWithURL:(id)arg1 readOnly:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002d58b

@end

