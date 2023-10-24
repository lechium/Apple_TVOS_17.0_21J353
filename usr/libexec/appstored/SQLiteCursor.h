//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, SQLiteStatement;

@interface SQLiteCursor : NSObject
{
    int _columnCount;	// 8 = 0x8
    unsigned char *_columnDeclaredTypes;	// 16 = 0x10
    NSDictionary *_columnIndexByName;	// 24 = 0x18
    id _columnKeySet;	// 32 = 0x20
    NSMutableArray *_columnNames;	// 40 = 0x28
    struct sqlite3_stmt *_statement;	// 48 = 0x30
    SQLiteStatement *_statementWrapper;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001aac38
- (void)dealloc;	// IMP=0x00100000001aa407

@end

