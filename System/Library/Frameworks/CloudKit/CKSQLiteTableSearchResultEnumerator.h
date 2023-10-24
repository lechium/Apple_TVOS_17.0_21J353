//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class CKSQLiteCompiledStatement, CKSQLiteTable, NSError, NSString;

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator
{
    CKSQLiteTable *_table;	// 8 = 0x8
    NSString *_groupName;	// 16 = 0x10
    NSString *_tableName;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    id _entry;	// 40 = 0x28
    _Bool _enumerationStarted;	// 48 = 0x30
    CKSQLiteCompiledStatement *_statement;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000075823
@property(retain, nonatomic) CKSQLiteCompiledStatement *statement; // @synthesize statement=_statement;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)nextObject;	// IMP=0x00000000000750ea
- (id)currentObject;	// IMP=0x00000000000750d5
- (void)invalidate;	// IMP=0x0000000000074f64
- (void)dealloc;	// IMP=0x0000000000074f26
- (id)initWithTable:(id)arg1 statement:(id)arg2;	// IMP=0x0000000000074df0
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x000000000006eab7

@end

