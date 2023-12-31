//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _LTDLanguageAssetCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isHot;	// 12 = 0xc
    NSMutableDictionary *_cache;	// 16 = 0x10
    NSSet *_requiredAssetIdentifiers;	// 24 = 0x18
}

+ (id)shared;	// IMP=0x00600000000154e8
- (void).cxx_destruct;	// IMP=0x0000000000016ab9
@property(readonly, nonatomic) NSSet *requiredAssetIdentifiers; // @synthesize requiredAssetIdentifiers=_requiredAssetIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property _Bool isHot; // @synthesize isHot=_isHot;
- (void)reset;	// IMP=0x00000000000167ba
- (void)_hardReset;	// IMP=0x0000000000016783
- (id)assetsFilteredUsing:(unsigned long long)arg1;	// IMP=0x00000000000162be
- (id)assetForIdentifier:(id)arg1;	// IMP=0x0000000000016257
- (id)assetForIdentifier:(id)arg1 createIfNotFound:(_Bool)arg2;	// IMP=0x0000000000016148
- (_Bool)isCancelledDownloadComponent:(id)arg1;	// IMP=0x00000000000160b6
- (void)setRequiredAssets:(id)arg1;	// IMP=0x0000000000016019
- (void)applyAssetUpdates:(id)arg1;	// IMP=0x0000000000015c57
- (id)preheatWithLanguages:(id)arg1;	// IMP=0x0000000000015695
- (id)_availableIdentifiers;	// IMP=0x000000000001564f
- (id)_readAllAssets;	// IMP=0x00000000000155e3
- (id)init;	// IMP=0x0000000000015551

@end

