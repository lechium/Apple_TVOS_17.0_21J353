//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSCXPhoneCallStateMonitor
{
}

+ (id)sharedInstance;	// IMP=0x0040000000139a92
- (unsigned long long)phoneCallState;	// IMP=0x0040000000139a8a
- (_Bool)firstPartyCall;	// IMP=0x0010000000139a82
- (void)_stopMonitoring;	// IMP=0x0010000000139a7c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000139a76
- (id)init;	// IMP=0x0010000000139a09

@end
