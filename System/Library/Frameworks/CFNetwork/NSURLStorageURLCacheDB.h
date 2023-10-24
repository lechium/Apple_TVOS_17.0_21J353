//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NSURLStorageURLCacheDB : NSObject
{
    struct sqlite3 *_dbReadConnection;	// 8 = 0x8
    struct sqlite3 *_dbWriteConnection;	// 16 = 0x10
    struct os_unfair_lock_s _dbReadConnectionLock;	// 24 = 0x18
    struct os_unfair_lock_s _dbWriteConnectionLock;	// 28 = 0x1c
    struct sqlite3_stmt *_sqlUpdateReceiverDataStmt;	// 32 = 0x20
    struct sqlite3_stmt *_sqlInsertStmtResponse;	// 40 = 0x28
    struct sqlite3_stmt *_sqlInsertStmtBlobData;	// 48 = 0x30
    struct sqlite3_stmt *_sqlInsertStmtReceiverData;	// 56 = 0x38
    struct sqlite3_stmt *_sqlUpdateResponseStmt;	// 64 = 0x40
    struct sqlite3_stmt *_sqlUpdateBlobDataStmt;	// 72 = 0x48
    struct sqlite3_stmt *_sqlSelectStmt;	// 80 = 0x50
    struct sqlite3_stmt *_sqlSelectEntry_idAndRecevierDataForKeyStmt;	// 88 = 0x58
    struct sqlite3_stmt *_sqlSelectIsDataOnFSForEntry_IDStmt;	// 96 = 0x60
    struct sqlite3_stmt *_sqlSelectFileSystemFileForDeletionStmt;	// 104 = 0x68
    struct sqlite3_stmt *_sqlDeleteStmtResponse;	// 112 = 0x70
    struct sqlite3_stmt *_sqlDeleteStmtBlobData;	// 120 = 0x78
    struct sqlite3_stmt *_sqlDeleteStmtReceiverData;	// 128 = 0x80
    NSMutableArray *_entryIDsToDelete;	// 136 = 0x88
    unsigned long long _writeCount;	// 144 = 0x90
    _Bool _updatingSchema;	// 152 = 0x98
    _Bool _isDBOpen;	// 153 = 0x99
    NSString *_dbPathDirectory;	// 160 = 0xa0
    NSString *_dbPathFile;	// 168 = 0xa8
    long long _maxDBSize;	// 176 = 0xb0
    unsigned long long _currentFSBackedUsage;	// 184 = 0xb8
    unsigned long long _currentSQLiteDBUsage;	// 192 = 0xc0
    unsigned long long _currentTotalPersistentCacheUsage;	// 200 = 0xc8
    long long _minSizeForFileSystemBackedCacheItem;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00000000001738c1
- (void)dealloc;	// IMP=0x0000000000173803

@end

