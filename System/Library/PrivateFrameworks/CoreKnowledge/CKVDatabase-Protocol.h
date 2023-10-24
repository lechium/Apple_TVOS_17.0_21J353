//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class CKVDatabaseCommand, CKVDatabaseExecutionResult, NSString;

@protocol CKVDatabase <NSObject>
- (CKVDatabaseExecutionResult *)executeCommand:(CKVDatabaseCommand *)arg1 options:(unsigned long long)arg2;
- (int)rowsModified:(id *)arg1;
- (_Bool)cleanup:(id *)arg1;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)executeCommandString:(NSString *)arg1 error:(id *)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)openWithError:(id *)arg1;
- (NSString *)path;
@end

