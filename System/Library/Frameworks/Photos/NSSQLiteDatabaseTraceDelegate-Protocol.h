//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSArray, NSFetchRequest, NSManagedObjectContext, NSString;

@protocol NSSQLiteDatabaseTraceDelegate <NSObject>

@optional
- (void)managedObjectContext:(NSManagedObjectContext *)arg1 didExecuteFetchRequest:(NSFetchRequest *)arg2 withSQLString:(NSString *)arg3 bindVariables:(NSArray *)arg4 rowCount:(long long)arg5;
- (void)managedObjectContext:(NSManagedObjectContext *)arg1 willExecuteFetchRequest:(NSFetchRequest *)arg2;
@end

