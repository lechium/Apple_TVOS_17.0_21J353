//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LTDConfigurationService : NSObject
{
}

+ (void)supportedLocalePairsForTask:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0080000000011b44
+ (id)supportedLocalePairsForTask:(long long)arg1 error:(id *)arg2;	// IMP=0x00800000000119ee
+ (void)aneConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00800000000118c3
+ (id)aneConfigurationWithError:(id *)arg1;	// IMP=0x008000000001185d
+ (void)assetConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000011732
+ (id)assetConfigurationWithError:(id *)arg1;	// IMP=0x00800000000116d3
+ (void)textStreamingConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00800000000115a8
+ (id)textStreamingConfigurationWithError:(id *)arg1;	// IMP=0x008000000001154c
+ (void)siriConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000011421
+ (id)siriConfigurationWithError:(id *)arg1;	// IMP=0x00800000000113c2
+ (void)offlineConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000011297
+ (id)offlineConfigurationWithError:(id *)arg1;	// IMP=0x0080000000011238
+ (void)asrConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x008000000001110d
+ (id)asrConfigurationWithError:(id *)arg1;	// IMP=0x00800000000110af
+ (void)flushCache;	// IMP=0x0080000000011072
+ (id)deserializedPlistContentsOf:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000010e10
+ (id)overlay:(id)arg1 with:(id)arg2;	// IMP=0x0080000000010d63
+ (id)preferenceOverridesFor:(long long)arg1;	// IMP=0x0080000000010c74
+ (id)urlForType:(long long)arg1 source:(long long)arg2;	// IMP=0x00800000000109dd
+ (id)configurationForType:(long long)arg1 error:(id *)arg2;	// IMP=0x0080000000010062
+ (void)configurationForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x008000000000ff20
+ (id)_queue;	// IMP=0x008000000000fec9
+ (id)cache;	// IMP=0x008000000000fe74
+ (id)fileNameForType:(long long)arg1;	// IMP=0x008000000000fe50

@end

