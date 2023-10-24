//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteEntity : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;	// IMP=0x002000000000a9e0
+ (Class)memoryEntityClass;	// IMP=0x0010000000009053
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x001000000000904b
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x0010000000009043
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x001000000000903b
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x0010000000009033
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x001000000000902b
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0010000000008f5f
+ (id)databaseTable;	// IMP=0x0010000000008f2d
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;	// IMP=0x0010000000075a58
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 entityClass:(Class)arg5;	// IMP=0x001000000007593b
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 entityClass:(Class)arg4;	// IMP=0x0010000000075919
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 entityClass:(Class)arg3;	// IMP=0x00100000000758f4
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;	// IMP=0x00100000000758d5
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x00100000000758c0
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000000758ab
+ (id)sumForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000075842
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000075823
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0010000000075804
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x00100000000757e5
+ (id)allOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000007561a
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x0010000000075447
+ (id)memoryEntityForPersistentID:(long long)arg1 withProperties:(id)arg2 usingConnection:(id)arg3;	// IMP=0x001000000009301d
+ (id)memoryEntityForPersistentID:(long long)arg1 usingConnection:(id)arg2;	// IMP=0x0010000000093006
- (void).cxx_destruct;	// IMP=0x001000000000b37d
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x001000000000b270
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x001000000000b00c
- (id)valueForProperty:(id)arg1;	// IMP=0x001000000000a903
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000000a8f1
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x0010000000009f46
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000009e5a
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0010000000009e48
- (id)getValuesForProperties:(id)arg1;	// IMP=0x0010000000009692
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000009064
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;	// IMP=0x0010000000008c86
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;	// IMP=0x0010000000008c0f
- (id)urlValueForProperty:(id)arg1;	// IMP=0x001000000000b5a5
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x001000000000b54e
- (id)stringValueForProperty:(id)arg1;	// IMP=0x001000000000b4f7
- (id)numberValueForProperty:(id)arg1;	// IMP=0x001000000000b4a0
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x001000000000b45c
- (id)errorValueForProperty:(id)arg1;	// IMP=0x001000000000b3d1
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x001000000000b38d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
