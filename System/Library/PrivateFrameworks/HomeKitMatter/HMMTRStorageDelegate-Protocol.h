//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMatter/NSObject-Protocol.h>

@class HMMTRStorage, NSData, NSNumber;

@protocol HMMTRStorageDelegate <NSObject>

@optional
- (void)fetchCommissioningCertificatesFromOwnerForPublicKey:(NSData *)arg1 fabricID:(NSNumber *)arg2 completionHandler:(void (^)(NSData *, NSData *, NSNumber *, NSData *))arg3;
- (void)handlePrimaryResidentDataReady;
- (void)handleDeviceNoLongerPrimaryResidentWithCompletion:(void (^)(void))arg1;
- (void)storageDidUpdateData:(HMMTRStorage *)arg1 isLocalChange:(_Bool)arg2;
- (void)storageDidBecomeAvailable:(HMMTRStorage *)arg1;
@end

