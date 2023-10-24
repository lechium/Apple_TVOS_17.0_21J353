//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSSet;
@protocol HMMTRDeviceStorageDataSource;

@protocol HMMTRFabricStorageDataSource <NSObject>
@property(readonly, copy, nonatomic) NSSet *allNodeIDs;
@property(readonly, copy, nonatomic) NSDictionary *keyValueStore;
@property(readonly, copy, nonatomic) NSData *intermediateCertificate;
@property(readonly, copy, nonatomic) NSData *operationalCertificate;
@property(readonly, copy, nonatomic) NSData *rootCertificate;
@property(readonly, copy, nonatomic) NSNumber *lastNodeID;
@property(readonly, copy, nonatomic) NSNumber *fabricID;
- (id <HMMTRDeviceStorageDataSource>)storageDataSourceForDeviceWithNodeID:(NSNumber *)arg1;
- (void)updateKeyValueStoreWithBlock:(_Bool (^)(NSMutableDictionary *, NSMutableArray *))arg1 completion:(void (^)(NSError *))arg2;
- (void)updateKeyValueStore:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateIntermediateCertificate:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateOperationalCertificate:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateRootCertificate:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateLastNodeID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateFabricID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
@end

