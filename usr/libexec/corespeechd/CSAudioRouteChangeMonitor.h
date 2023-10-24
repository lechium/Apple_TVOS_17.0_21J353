//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSAudioRouteChangeMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x0040000000133e44
- (long long)hearstOwnership;	// IMP=0x0040000000134073
- (void)getHearstOwnershipStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000134047
- (_Bool)carPlayConnected;	// IMP=0x0010000000134024
- (_Bool)jarvisConnected;	// IMP=0x0010000000134001
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133fd5
- (_Bool)siriInputSourceOutOfBand;	// IMP=0x0010000000133fb2
- (void)getSiriInputSourceOutOfBand:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133f86
- (_Bool)hearstRouted;	// IMP=0x0010000000133f63
- (void)getHearstRouted:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133f37
- (_Bool)hearstConnected;	// IMP=0x0010000000133f14
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133ee8
- (void)_stopMonitoring;	// IMP=0x0010000000133ec5
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000133e99

@end

