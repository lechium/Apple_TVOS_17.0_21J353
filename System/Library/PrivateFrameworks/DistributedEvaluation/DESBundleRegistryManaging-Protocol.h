//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DistributedEvaluation/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol DESBundleRegistryManaging <NSObject>
- (long long)pluginTypeForBundleId:(NSString *)arg1;
- (_Bool)containsBundleId:(NSString *)arg1;
- (NSArray *)allUnrestrictedExtensionIds;
- (NSArray *)allUnrestrictedBundleIds;
- (NSArray *)allBundleIds;
@end

