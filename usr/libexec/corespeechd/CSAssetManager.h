//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSPolicy, MISSING_TYPE, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAssetManager : NSObject
{
    CSPolicy *_enablePolicy;	// 8 = 0x8
    NSString *_currentLanguageCode;	// 16 = 0x10
    MISSING_TYPE *_downloadingOption;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_downloadTimer;	// 40 = 0x28
    long long _downloadTimerCount;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x00200000000fe237
- (void).cxx_destruct;	// IMP=0x00200000000fd64d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_stopPeriodicalDownload;	// IMP=0x00100000000fd545
- (void)_startPeriodicalDownload;	// IMP=0x00100000000fd45a
- (void)_createPeriodicalDownloadTimer;	// IMP=0x00100000000fd31d
- (void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2;	// IMP=0x00100000000fd2ce
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(_Bool)arg2;	// IMP=0x00100000000fd258
- (void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeakerRecognitionAssetMetaData:(_Bool)arg2;	// IMP=0x00100000000fd1e2
- (void)CSAdBlockerMetaUpdateMonitor:(id)arg1 didReceiveNewAdBlockerAssetMetaData:(_Bool)arg2;	// IMP=0x00100000000fd16c
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(_Bool)arg2;	// IMP=0x00100000000fd11d
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x00100000000fd07d
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x00100000000fcfdd
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x00100000000fcf1e
@property(readonly, nonatomic) NSString *currentLanguageCode;
- (_Bool)_canFetchRemoteAsset:(unsigned long long)arg1;	// IMP=0x00100000000fcd3e
- (void)_fetchRemoteMetaData;	// IMP=0x00100000000fc9fc
- (void)assetOfType:(unsigned long long)arg1 providerType:(unsigned long long)arg2 language:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fc928
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fc896
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00100000000fc809
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fc743
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fc68c
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00100000000fc5db
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fc531
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x00100000000fc490
- (void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fc3b9
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00100000000fc32c
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x00100000000fc268
- (void)setAssetDownloadingOption:(id)arg1;	// IMP=0x00100000000fc1db
- (id)initWithDownloadOption:(id)arg1;	// IMP=0x00100000000fbcb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

