//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/NSObject-Protocol.h>

@class NSSet;

@protocol HMIPersonManagerDataSource <NSObject>
- (void)performCloudPullWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchAllFaceprintsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchAllPersonFaceCropsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchPersonsWithUUIDs:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchAllPersonsWithCompletion:(void (^)(NSSet *, NSError *))arg1;

@optional
- (void)removeFaceprintsWithUUIDs:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addFaceprints:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
@end

