//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;

@interface SQLiteDatabaseStore : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x00200000001eac4b
+ (id)storeDescriptor;	// IMP=0x00100000001eac32
- (void).cxx_destruct;	// IMP=0x00200000001eacab
@property(readonly) SQLiteDatabase *database; // @synthesize database=_database;
- (void)asyncReadUsingSession:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eac86
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x00100000001eac75
- (void)asyncModifyUsingTransaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001eac64
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000001eac53
- (id)initWithDatabase:(id)arg1;	// IMP=0x00100000001eabc7

@end

