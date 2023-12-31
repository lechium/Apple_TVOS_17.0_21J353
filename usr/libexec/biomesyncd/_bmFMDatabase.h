//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface _bmFMDatabase : NSObject
{
    void *_db;	// 8 = 0x8
    _Bool _isExecutingStatement;	// 16 = 0x10
    double _startBusyRetryTime;	// 24 = 0x18
    NSMutableSet *_openResultSets;	// 32 = 0x20
    NSMutableSet *_openFunctions;	// 40 = 0x28
    NSDateFormatter *_dateFormat;	// 48 = 0x30
    _Bool _shouldCacheStatements;	// 56 = 0x38
    _Bool _traceExecution;	// 57 = 0x39
    _Bool _checkedOut;	// 58 = 0x3a
    _Bool _crashOnErrors;	// 59 = 0x3b
    _Bool _logsErrors;	// 60 = 0x3c
    _Bool _isOpen;	// 61 = 0x3d
    _Bool _isInTransaction;	// 62 = 0x3e
    double _maxBusyRetryTimeInterval;	// 64 = 0x40
    NSMutableDictionary *_cachedStatements;	// 72 = 0x48
    NSString *_databasePath;	// 80 = 0x50
}

+ (id)storeableDateFormat:(id)arg1;	// IMP=0x004000000004377c
+ (_Bool)isSQLiteThreadSafe;	// IMP=0x0010000000042b06
+ (id)sqliteLibVersion;	// IMP=0x0010000000042ac2
+ (int)FMDBVersion;	// IMP=0x00100000000428c3
+ (id)FMDBUserVersion;	// IMP=0x00100000000428b6
+ (id)databaseWithURL:(id)arg1;	// IMP=0x00100000000426c5
+ (id)databaseWithPath:(id)arg1;	// IMP=0x001000000004267c
- (void).cxx_destruct;	// IMP=0x0010000000046909
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
- (void)resultErrorTooBigInContext:(void *)arg1;	// IMP=0x0010000000046864
- (void)resultErrorNoMemoryInContext:(void *)arg1;	// IMP=0x0010000000046857
- (void)resultErrorCode:(int)arg1 context:(void *)arg2;	// IMP=0x0010000000046848
- (void)resultError:(id)arg1 context:(void *)arg2;	// IMP=0x0010000000046811
- (void)resultString:(id)arg1 context:(void *)arg2;	// IMP=0x00100000000467d3
- (void)resultData:(id)arg1 context:(void *)arg2;	// IMP=0x0010000000046769
- (void)resultDouble:(double)arg1 context:(void *)arg2;	// IMP=0x001000000004675c
- (void)resultLong:(long long)arg1 context:(void *)arg2;	// IMP=0x001000000004674c
- (void)resultInt:(int)arg1 context:(void *)arg2;	// IMP=0x001000000004673d
- (void)resultNullInContext:(void *)arg1;	// IMP=0x0010000000046730
- (id)valueString:(void *)arg1;	// IMP=0x00100000000466f3
- (id)valueData:(void *)arg1;	// IMP=0x001000000004669f
- (double)valueDouble:(void *)arg1;	// IMP=0x0010000000046692
- (long long)valueLong:(void *)arg1;	// IMP=0x0010000000046685
- (int)valueInt:(void *)arg1;	// IMP=0x0010000000046678
- (int)valueType:(void *)arg1;	// IMP=0x001000000004666b
- (void)makeFunctionNamed:(id)arg1 arguments:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000004657e
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004656c
@property(nonatomic) _Bool shouldCacheStatements; // @synthesize shouldCacheStatements=_shouldCacheStatements;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x0010000000046361
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004633c
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000046315
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x00100000000461b7
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046071
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000045f2b
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000045de5
- (_Bool)interrupt;	// IMP=0x0010000000045db4
- (_Bool)inTransaction;	// IMP=0x0010000000045dab
- (_Bool)beginExclusiveTransaction;	// IMP=0x0010000000045d7d
- (_Bool)beginImmediateTransaction;	// IMP=0x0010000000045d4f
- (_Bool)beginDeferredTransaction;	// IMP=0x0010000000045d21
- (_Bool)beginTransaction;	// IMP=0x0010000000045cf3
- (_Bool)commit;	// IMP=0x0010000000045cc5
- (_Bool)rollback;	// IMP=0x0010000000045c97
- (id)prepare:(id)arg1;	// IMP=0x0010000000045c6d
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x0010000000045bc9
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;	// IMP=0x0010000000045b25
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045a2a
- (_Bool)executeStatements:(id)arg1;	// IMP=0x0010000000045a16
- (_Bool)executeUpdateWithFormat:(id)arg1;	// IMP=0x0010000000045739
- (_Bool)executeUpdate:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000045712
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x00100000000456e7
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000456b8
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x001000000004568d
- (_Bool)executeUpdate:(id)arg1;	// IMP=0x00100000000455e3
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(struct __va_list_tag [1])arg5;	// IMP=0x0010000000045544
- (id)executeQuery:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;	// IMP=0x001000000004551a
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000454a6
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;	// IMP=0x001000000004547e
- (id)executeQueryWithFormat:(id)arg1;	// IMP=0x0010000000045308
- (id)executeQuery:(id)arg1;	// IMP=0x001000000004524f
- (_Bool)bindStatement:(struct sqlite3_stmt *)arg1 WithArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4;	// IMP=0x0010000000044cb6
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4 shouldBind:(_Bool)arg5;	// IMP=0x001000000004492e
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;	// IMP=0x0010000000044904
- (void)extractSQL:(id)arg1 argumentsList:(struct __va_list_tag [1])arg2 intoString:(id)arg3 arguments:(id)arg4;	// IMP=0x00100000000440c9
- (int)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;	// IMP=0x0010000000043b38
@property(readonly, nonatomic) int changes;
@property(readonly, nonatomic) long long lastInsertRowId;
- (id)lastError;	// IMP=0x0010000000043a63
- (id)errorWithMessage:(id)arg1;	// IMP=0x00100000000439da
- (int)lastExtendedErrorCode;	// IMP=0x00100000000439cc
- (int)lastErrorCode;	// IMP=0x00100000000439be
- (_Bool)hadError;	// IMP=0x00100000000439a3
- (id)lastErrorMessage;	// IMP=0x0010000000043974
- (_Bool)databaseExists;	// IMP=0x0010000000043927
- (void)warnInUse;	// IMP=0x00100000000438f1
@property(readonly, nonatomic) _Bool goodConnection;
- (id)stringFromDate:(id)arg1;	// IMP=0x001000000004387b
- (id)dateFromString:(id)arg1;	// IMP=0x0010000000043865
- (void)setDateFormat:(id)arg1;	// IMP=0x0010000000043854
- (_Bool)hasDateFormatter;	// IMP=0x0010000000043846
- (_Bool)setKeyWithData:(id)arg1;	// IMP=0x0010000000043774
- (_Bool)setKey:(id)arg1;	// IMP=0x00100000000436b2
- (_Bool)rekeyWithData:(id)arg1;	// IMP=0x00100000000436aa
- (_Bool)rekey:(id)arg1;	// IMP=0x00100000000435e8
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;	// IMP=0x001000000004347a
- (id)cachedStatementForQuery:(id)arg1;	// IMP=0x00100000000433d1
- (void)clearCachedStatements;	// IMP=0x0010000000043171
- (void)resultSetDidClose:(id)arg1;	// IMP=0x001000000004311d
- (void)closeOpenResultSets;	// IMP=0x0010000000042f41
@property(readonly, nonatomic) _Bool hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;	// IMP=0x0010000000042ef6
- (int)busyRetryTimeout;	// IMP=0x0010000000042ec3
- (double)maxBusyRetryTimeInterval;	// IMP=0x0010000000042eb8
- (void)setMaxBusyRetryTimeInterval:(double)arg1;	// IMP=0x0010000000042dd6
- (_Bool)close;	// IMP=0x0010000000042d10
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;	// IMP=0x0010000000042c2d
- (_Bool)openWithFlags:(int)arg1;	// IMP=0x0010000000042c19
- (_Bool)open;	// IMP=0x0010000000042b84
- (int)limitFor:(int)arg1 value:(int)arg2;	// IMP=0x0010000000042b72
- (const char *)sqlitePath;	// IMP=0x0010000000042b20
@property(readonly, nonatomic) void *sqliteHandle;
@property(readonly, nonatomic) NSURL *databaseURL;
- (void)dealloc;	// IMP=0x0010000000042842
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000042778
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000042722
- (id)init;	// IMP=0x001000000004270e
- (void)setShouldCacheStatementsWithoutClearingExistingStatements:(_Bool)arg1;	// IMP=0x0010000000028057
- (_Bool)DELETE_FROM:(id)arg1 WHERE:(id)arg2;	// IMP=0x0010000000027eb7
- (_Bool)INSERT_INTO:(id)arg1 VALUES:(id)arg2;	// IMP=0x0010000000027b7a
- (_Bool)UPDATE:(id)arg1 SET:(id)arg2 WHERE:(id)arg3;	// IMP=0x0010000000027881
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 HAVING:(id)arg6 ORDER_BY:(id)arg7 LIMIT:(id)arg8;	// IMP=0x0010000000027200
- (id)_SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 GROUP_BY:(id)arg5 ORDER_BY:(id)arg6 LIMIT:(id)arg7;	// IMP=0x0010000000026ce1
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3 GROUP_BY:(id)arg4;	// IMP=0x0010000000026cb1
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 JOIN:(id)arg3 WHERE:(id)arg4 ORDER_BY:(id)arg5 LIMIT:(id)arg6;	// IMP=0x0010000000026c85
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3 ORDER_BY:(id)arg4 LIMIT:(id)arg5;	// IMP=0x0010000000026c5b
- (id)SELECT_FROM:(id)arg1 COLUMNS:(id)arg2 WHERE:(id)arg3;	// IMP=0x0010000000026c2a
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004799e
- (_Bool)columnExists:(id)arg1 columnName:(id)arg2;	// IMP=0x0010000000047983
@property(nonatomic) unsigned int userVersion;
@property(nonatomic) unsigned int applicationID;
- (_Bool)columnExists:(id)arg1 inTableWithName:(id)arg2;	// IMP=0x0010000000047617
- (id)getTableSchema:(id)arg1;	// IMP=0x0010000000047582
- (id)getSchema;	// IMP=0x0010000000047567
- (_Bool)tableExists:(id)arg1;	// IMP=0x00100000000474da
- (id)dateForQuery:(id)arg1;	// IMP=0x00100000000473b8
- (id)dataForQuery:(id)arg1;	// IMP=0x0010000000047296
- (double)doubleForQuery:(id)arg1;	// IMP=0x001000000004717a
- (_Bool)boolForQuery:(id)arg1;	// IMP=0x0010000000047066
- (long long)longForQuery:(id)arg1;	// IMP=0x0010000000046f50
- (int)intForQuery:(id)arg1;	// IMP=0x0010000000046e3c
- (id)stringForQuery:(id)arg1;	// IMP=0x0010000000046d1a

@end

