//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class CSTrialAssetDownloadMonitor, NSString;

@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    unsigned long long _lastUpdatedAssetType;	// 16 = 0x10
    CSTrialAssetDownloadMonitor *_monitor;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x002000000011ebb9
- (void).cxx_destruct;	// IMP=0x002000000011eb64
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *monitor; // @synthesize monitor=_monitor;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x001000000011ea57
- (void)_notifyObserver:(id)arg1;	// IMP=0x001000000011e9f2
- (void)_didInstalledNewAdBlockerAsset;	// IMP=0x001000000011e92b
- (void)_stopMonitoring;	// IMP=0x001000000011e888
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000011e77f
- (const char *)_notificationKey;	// IMP=0x001000000011e772
- (id)init;	// IMP=0x001000000011e6cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

