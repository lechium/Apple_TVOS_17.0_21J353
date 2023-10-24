//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSAssetPolicy, DDSAssetQuery, NSString;
@protocol DDSManagingDelegate;

@protocol DDSManaging <NSObject>
@property(readonly, copy) NSString *xpcServiceName;
@property __weak id <DDSManagingDelegate> delegate;
- (void)updateAssetForQuery:(DDSAssetQuery *)arg1 callback:(void (^)(NSNumber *, NSError *))arg2;
- (void)fetchAssetUpdateStatusForQuery:(DDSAssetQuery *)arg1 callback:(void (^)(long long, NSError *))arg2;
- (void)triggerUpdate;
- (void)triggerDump;
- (void)assertionIDsForClientID:(NSString *)arg1 reply:(void (^)(NSSet *))arg2;
- (void)removeAssertionWithID:(NSString *)arg1;
- (void)addAssertionForQuery:(DDSAssetQuery *)arg1 policy:(DDSAssetPolicy *)arg2 assertionID:(NSString *)arg3 clientID:(NSString *)arg4;
@end

