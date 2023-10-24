//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SOSAccount;

@interface SOSClient : NSObject
{
    SOSAccount *_account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000022cc1d
@property(retain) SOSAccount *account; // @synthesize account=_account;
- (void)setBypass:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000022cb85
- (id)SOSMonitorModeSOSIsActiveDescription;	// IMP=0x001000000022cb35
- (_Bool)SOSMonitorModeSOSIsActive;	// IMP=0x001000000022ca41
- (void)SOSMonitorModeSOSIsActiveWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c97e
- (void)SOSMonitorModeEnableSOS;	// IMP=0x001000000022c900
- (void)SOSMonitorModeDisableSOS;	// IMP=0x001000000022c882
- (void)removeV0Peers:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c819
- (void)iCloudIdentityStatus_internal:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c7b0
- (void)rpcTriggerRingUpdate:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c6f2
- (void)rpcTriggerBackup:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c612
- (void)keyStatusFor:(int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c59d
- (void)accountStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c534
- (void)iCloudIdentityStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c4cb
- (void)ghostBustInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c462
- (void)ghostBustPeriodic:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c3ed
- (void)ghostBustTriggerTimed:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c378
- (void)ghostBust:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c303
- (void)setWatchdogParmeters:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c278
- (void)getWatchdogParameters:(CDUnknownBlockType)arg1;	// IMP=0x001000000022c20f
- (void)rpcTriggerSync:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c169
- (void)importInitialSyncCredentials:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022c084
- (void)initialSyncCredentials:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022bfb7
- (void)joinCircleWithBlob:(id)arg1 version:(int)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000022bf2d
- (void)circleJoiningBlob:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022bea2
- (void)circleHash:(CDUnknownBlockType)arg1;	// IMP=0x001000000022be39
- (void)myPeerInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000022bdd0
- (void)stashAccountCredential:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x001000000022bd45
- (void)validatedStashedAccountCredential:(CDUnknownBlockType)arg1;	// IMP=0x001000000022bcdc
- (void)assertStashedAccountCredential:(CDUnknownBlockType)arg1;	// IMP=0x001000000022bc73
- (void)stashedCredentialPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x001000000022bc0a
- (void)rateLimitingPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x001000000022bba1
- (void)kvsPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x001000000022bb38
- (void)userPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x001000000022bacf
- (_Bool)checkEntitlement:(id)arg1;	// IMP=0x001000000022bac7
- (id)initSOSClientWithAccount:(id)arg1;	// IMP=0x001000000022ba5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

