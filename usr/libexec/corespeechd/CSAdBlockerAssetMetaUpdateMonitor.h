//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSAdBlockerAssetMetaUpdateMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000134c2d
- (void)_notifyObserver:(id)arg1;	// IMP=0x0020000000134ba4
- (void)_didReceiveNewAdBlockerAssetMetaData;	// IMP=0x0010000000134add
- (void)_stopMonitoring;	// IMP=0x0010000000134a3a
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000134931
- (const char *)_asssetMetaUpdatedKey;	// IMP=0x0010000000134924
- (id)init;	// IMP=0x00100000001348e2

@end

