//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSObject-Protocol.h>

@class NSArray, NSEntityDescription, NSManagedObjectContext, NSSet;

@protocol WFCoreDataDatabaseResultFetchOperation <NSObject, NSCopying>
@property(readonly, nonatomic) NSSet *relationshipKeysAffectingDescriptors;
@property(readonly, nonatomic) NSEntityDescription *entity;
- (long long)countWithContext:(NSManagedObjectContext *)arg1 error:(id *)arg2;
- (NSArray *)resultsWithContext:(NSManagedObjectContext *)arg1 error:(id *)arg2;
@end

