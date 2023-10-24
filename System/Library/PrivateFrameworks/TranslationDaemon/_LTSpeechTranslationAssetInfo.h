//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _LTDAssetModel, _LTDOfflineConfigurationModel, _LTLocalePair, _LTOfflineAssetManager;

__attribute__((visibility("hidden")))
@interface _LTSpeechTranslationAssetInfo : NSObject
{
    _LTOfflineAssetManager *_assetManager;	// 8 = 0x8
    _LTLocalePair *_localePair;	// 16 = 0x10
    _LTDOfflineConfigurationModel *_offlineConfig;	// 24 = 0x18
    _LTDAssetModel *_sourceASRModel;	// 32 = 0x20
    _LTDAssetModel *_targetASRModel;	// 40 = 0x28
    NSArray *_allAssets;	// 48 = 0x30
    NSArray *_mtAssets;	// 56 = 0x38
    NSArray *_missingAssets;	// 64 = 0x40
    NSArray *_missingMTAssets;	// 72 = 0x48
    _Bool _needsUpdate;	// 80 = 0x50
    NSArray *_modelURLs;	// 88 = 0x58
}

+ (void)_createSymlinkDirectoryForLocalePair:(id)arg1 assets:(id)arg2;	// IMP=0x006000000005eb90
+ (id)_languagePairDirectoryForLocalePair:(id)arg1;	// IMP=0x006000000005e486
- (void).cxx_destruct;	// IMP=0x000000000006099e
- (void)purgeAssetUserInitiated:(_Bool)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005feb0
- (void)downloadAssetsUserInitiated:(_Bool)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f749
- (_Bool)_validateSymlinksForAssets:(id)arg1;	// IMP=0x000000000005e52b
- (id)availabilityInfo;	// IMP=0x000000000005e30d
- (long long)_mtModelOfflineState;	// IMP=0x000000000005ddaa
- (_Bool)isCompleteBidirectionalModel;	// IMP=0x000000000005dc6d
- (_Bool)isCompletePassthroughModel;	// IMP=0x000000000005dc2f
- (id)translationModelURLs;	// IMP=0x000000000005dafe
- (id)speechModelVersionForLocale:(id)arg1;	// IMP=0x000000000005da22
- (id)speechModelURLForLocale:(id)arg1;	// IMP=0x000000000005d97e
- (_Bool)updateAvailableInAssets:(id)arg1;	// IMP=0x000000000005d6fa
- (void)_referenceAssets:(id)arg1 catalogAssets:(id)arg2;	// IMP=0x000000000005ce6d
- (void)createSymlinkDirectoryForMTAssets;	// IMP=0x000000000005ce13
- (id)initWithInstalledAssets:(id)arg1 catalogAssets:(id)arg2 localePair:(id)arg3 offlineConfig:(id)arg4 assetManager:(id)arg5;	// IMP=0x000000000005cbc3
- (id)description;	// IMP=0x000000000005cada

@end
