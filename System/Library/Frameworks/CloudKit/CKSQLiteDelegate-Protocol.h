//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKSQLite;

@protocol CKSQLiteDelegate
@property(readonly, nonatomic) int userVersion;
- (_Bool)migrateDatabase:(CKSQLite *)arg1 fromVersion:(int)arg2;
@end

