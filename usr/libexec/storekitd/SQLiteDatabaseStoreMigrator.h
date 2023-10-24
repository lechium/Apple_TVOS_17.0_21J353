//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, SQLiteConnection;

@interface SQLiteDatabaseStoreMigrator : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002852b
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)_executeQuery:(id)arg1 canFailMigration:(_Bool)arg2 withResults:(CDUnknownBlockType)arg3;	// IMP=0x00100000000283e3
- (void)_executeStatement:(id)arg1 canFailMigration:(_Bool)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x0010000000028317
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00100000000282fd
- (void)executeOptionalQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00100000000282e6
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x00100000000282cc
- (void)executeStatement:(id)arg1;	// IMP=0x00100000000282b2
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x001000000002829b
- (void)executeOptionalStatement:(id)arg1;	// IMP=0x0010000000028284
@property(readonly) SQLiteConnection *connection;
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000028206

@end
