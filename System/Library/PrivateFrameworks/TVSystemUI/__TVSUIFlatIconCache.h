//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __TVSUIFlatIconCache : NSObject
{
    NSObject<OS_dispatch_queue> *_appStateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_updateQueue;	// 16 = 0x10
    NSMutableDictionary *_appIdentifierToInstalledCacheKeys;	// 24 = 0x18
    NSMutableDictionary *_appIdentifierToIconName;	// 32 = 0x20
}

+ (id)_launchImagesCacheDirectory;	// IMP=0x00100000000361e1
+ (id)_smallIconsCacheDirectory;	// IMP=0x0010000000036045
+ (id)_iconsCacheDirectory;	// IMP=0x0010000000035ea9
+ (void)_disableLSWorkspaceInstallHandling;	// IMP=0x0010000000035e9c
+ (void)_cleanStaleAssetsInCacheDirectory:(id)arg1 withInstalledCacheKeys:(id)arg2;	// IMP=0x0010000000035474
+ (id)sharedInstance;	// IMP=0x0010000000033ff4
- (void).cxx_destruct;	// IMP=0x00000000000369d0
- (_Bool)_createApplicationIcon:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3 destination:(id)arg4;	// IMP=0x0000000000036774
- (_Bool)_createApplicationIcon:(id)arg1 variant:(long long)arg2 maskCorners:(_Bool)arg3 destination:(id)arg4;	// IMP=0x00000000000366bd
- (_Bool)_createSmallApplicationIcon:(id)arg1;	// IMP=0x0000000000036614
- (_Bool)_createApplicationIcon:(id)arg1 maskCorners:(_Bool)arg2;	// IMP=0x000000000003656f
- (id)_cacheLaunchImagePathWithCacheKey:(id)arg1;	// IMP=0x00000000000364c9
- (id)_cacheSmallIconPathWithCacheKey:(id)arg1;	// IMP=0x0000000000036423
- (id)_cacheIconPathWithCacheKey:(id)arg1;	// IMP=0x000000000003637d
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000035df2
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000000035d3a
- (void)_removeCachedImagesForCacheKey:(id)arg1;	// IMP=0x0000000000035c68
- (void)_updateForUninstalledApplications:(id)arg1;	// IMP=0x0000000000035a2f
- (void)_updateForInstalledApplications:(id)arg1;	// IMP=0x00000000000357a0
- (void)_cleanStaleAssets;	// IMP=0x000000000003518a
- (void)_update;	// IMP=0x0000000000034f45
- (id)_iconImageFromPath:(id)arg1;	// IMP=0x0000000000034d7a
- (id)smallFlatIconForAppProxy:(id)arg1;	// IMP=0x0000000000034d1b
- (id)_createSmallFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x0000000000034c30
- (id)flatIconForAppProxy:(id)arg1;	// IMP=0x0000000000034bd1
- (id)_createFlatApplicationIconIfNeeded:(id)arg1;	// IMP=0x0000000000034ae0
- (void)dealloc;	// IMP=0x0000000000034a6b
- (void)_queue_appStateMonitorDidChange:(id)arg1;	// IMP=0x000000000003435c
- (void)applicationIconDidChange:(id)arg1;	// IMP=0x00000000000342b2
- (id)init;	// IMP=0x0000000000034049

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
