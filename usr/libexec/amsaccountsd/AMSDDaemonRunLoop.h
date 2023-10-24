//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface AMSDDaemonRunLoop : NSObject
{
    struct os_unfair_lock_s _connectionsLock;	// 8 = 0x8
    NSMutableSet *_connections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000015732
@property(readonly, nonatomic) struct os_unfair_lock_s connectionsLock; // @synthesize connectionsLock=_connectionsLock;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void)_startXPC;	// IMP=0x0010000000015678
- (void)_setupAccountDataSync;	// IMP=0x0010000000015618
- (void)_setupPollJobs;	// IMP=0x0010000000015612
- (void)_setupNotifications;	// IMP=0x0010000000014efc
- (void)_setupMultiUser;	// IMP=0x0010000000014ef6
- (id)_previousBuildVersion;	// IMP=0x0010000000014ea1
- (void)_handleNFCAccessoryNotification:(id)arg1;	// IMP=0x0010000000014e9b
- (void)_handleBiometricsProvisioningNotification;	// IMP=0x0010000000014c4c
- (_Bool)_performStartup;	// IMP=0x00100000000148a4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000014222
- (void)runUntilIdleExit;	// IMP=0x0010000000014070
- (id)init;	// IMP=0x0010000000014013

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

