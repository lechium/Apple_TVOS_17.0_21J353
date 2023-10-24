//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAsset, CSAssetManager, CSLanguageCodeUpdateMonitor, CSOnDeviceCompilationHandler, CSUAFAssetManager, CSUAFDownloadMonitor, CSVoiceTriggerAssetDownloadMonitor, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandlerMac
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSAsset *_cachedAsset;	// 16 = 0x10
    NSMutableDictionary *_cachedEndpointAssets;	// 24 = 0x18
    CSVoiceTriggerAssetDownloadMonitor *_voiceTriggerAssetDownloadMonitor;	// 32 = 0x20
    CSLanguageCodeUpdateMonitor *_languageCodeUpdateMonitor;	// 40 = 0x28
    CSUAFDownloadMonitor *_uafAssetDownloadMonitor;	// 48 = 0x30
    CSAssetManager *_assetManager;	// 56 = 0x38
    CSUAFAssetManager *_uafAssetManager;	// 64 = 0x40
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000002600c
@property(retain, nonatomic) CSOnDeviceCompilationHandler *onDeviceCompilationHandler; // @synthesize onDeviceCompilationHandler=_onDeviceCompilationHandler;
@property(retain, nonatomic) CSUAFAssetManager *uafAssetManager; // @synthesize uafAssetManager=_uafAssetManager;
@property(retain, nonatomic) CSAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) CSUAFDownloadMonitor *uafAssetDownloadMonitor; // @synthesize uafAssetDownloadMonitor=_uafAssetDownloadMonitor;
@property(retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor; // @synthesize languageCodeUpdateMonitor=_languageCodeUpdateMonitor;
@property(retain, nonatomic) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor; // @synthesize voiceTriggerAssetDownloadMonitor=_voiceTriggerAssetDownloadMonitor;
@property(retain) NSMutableDictionary *cachedEndpointAssets; // @synthesize cachedEndpointAssets=_cachedEndpointAssets;
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void);	// IMP=0x0010000000025e05
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0010000000025d3a
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;	// IMP=0x0010000000025c93
- (void)triggerAssetRefresh;	// IMP=0x0010000000025c41
- (void)_checkNewAssetAvailablityForEndpoint;	// IMP=0x0010000000025bef
- (void)_checkNewAssetAvailablity;	// IMP=0x0010000000025ba3
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002597c
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;	// IMP=0x00100000000258fa
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002580c
- (void)_handleEndpointVoiceTriggerAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025651
- (void)_handleVoiceTriggerAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025566
- (void)start;	// IMP=0x0010000000025503
- (id)initWithVoiceTriggerAssetDownloadMonitor:(id)arg1 languageCodeUpdateMonitor:(id)arg2 uafAssetDownloadMonitor:(id)arg3 assetManager:(id)arg4 uafAssetManager:(id)arg5 disableOnDeviceCompilation:(_Bool)arg6;	// IMP=0x001000000002521a
- (id)initWithDisableOnDeviceCompilation:(_Bool)arg1;	// IMP=0x00100000000251f4
- (id)init;	// IMP=0x00100000000251cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
