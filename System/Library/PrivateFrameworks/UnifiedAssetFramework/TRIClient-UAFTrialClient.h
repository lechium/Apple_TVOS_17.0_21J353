//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Trial/TRIClient.h>

@interface TRIClient (UAFTrialClient)
+ (id)_queryAssetsWithNamespaceName:(id)arg1 factorName:(id)arg2 language:(id)arg3 isRoot:(_Bool)arg4 withError:(id *)arg5;	// IMP=0x0080000000029804
+ (id)_levelKeyForCache:(id)arg1 withFactorName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x00800000000297e6
+ (void)_addLevelToCache:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 withCache:(id)arg4;	// IMP=0x0080000000029629
+ (void)_addFactorLevelsToCache:(id)arg1 namespaceName:(id)arg2 withFactorLevelsCache:(id)arg3 withLevelCache:(id)arg4;	// IMP=0x0080000000029383
+ (void)UAFCacheUpdate;	// IMP=0x00800000000289c0
+ (id)_factoryLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x008000000002894f
+ (id)_rootLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x008000000002892f
+ (id)_cachedLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3 withCache:(id)arg4;	// IMP=0x0080000000028862
+ (id)_cachedLevelForFactorAnyLanguage:(id)arg1 withNamespaceName:(id)arg2 withCache:(id)arg3;	// IMP=0x0080000000028596
+ (id)_factoryFactorLevelsWithNamespaceName:(id)arg1 onDemandClient:(id)arg2;	// IMP=0x0080000000027e02
+ (id)_rootFactorLevelsWithNamespaceName:(id)arg1;	// IMP=0x00800000000274b4
- (void)_initOnce;	// IMP=0x0010000000029c4c
- (id)_trialLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x001000000002896f
- (id)UAFLevelForFactor:(id)arg1 withNamespaceName:(id)arg2 withLanguage:(id)arg3;	// IMP=0x001000000002843a
- (id)UAFFactorLevelsWithNamespaceName:(id)arg1;	// IMP=0x0010000000026a80
@end

