//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntelligencePlatform/GDAssetRegistryXPCBaseProtocol-Protocol.h>

@class NSData, NSString;

@protocol GDAssetRegistryXPCProtocol <GDAssetRegistryXPCBaseProtocol>
- (void)overrideAssetEntryForAssetId:(NSString *)arg1 inDomainId:(NSString *)arg2 overrideAssetEntryParametersData:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
@end

