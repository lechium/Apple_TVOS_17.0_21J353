//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RMStoreDeclarationKey, RMStoreUnresolvedAsset;

@protocol RMAssetResolverProtocol
+ (void)unassignAssets:(RMStoreDeclarationKey *)arg1 scope:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)resolveAsset:(RMStoreUnresolvedAsset *)arg1 completionHandler:(void (^)(RMStoreResolvedAsset *, NSError *))arg2;
@end

