//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;
@protocol AMSSQLiteConnectionDelegate;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <AMSSQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    AMSSQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000375476
@property(readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <AMSSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003752c5
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000375109
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000374ff4
- (_Bool)_resetAfterIOError;	// IMP=0x0000000000374e14
- (_Bool)_resetAfterCorruptionError;	// IMP=0x0000000000374db4
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000374bd3
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x00000000003748bc
- (_Bool)_openAndAllowRetry:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000374553
- (_Bool)_openWithError:(id *)arg1;	// IMP=0x0000000000374539
- (void)_flushAfterTransactionBlocks;	// IMP=0x0000000000374369
- (void)_finalizeAllStatements;	// IMP=0x00000000003741e4
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000373db9
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000373cf3
- (_Bool)_close;	// IMP=0x0000000000373c94
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000373c82
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;	// IMP=0x0000000000373bc9
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000373a93
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000373999
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000000373987
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000373850
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000003736b5
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003736a0
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x0000000000373506
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000003733d9
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003733c4
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x0000000000373298
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000003731eb
- (_Bool)close;	// IMP=0x00000000003731d9
- (void)dealloc;	// IMP=0x000000000037319b
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000003730f4

@end
