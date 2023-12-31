//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSWPLinkManagerDelegate, WPContinuity;

@interface IDSWPLinkManager : NSObject
{
    id <WPContinuity> _continuity;	// 8 = 0x8
    _Bool _systemIsFastUserSwitched;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSMutableSet *_advertisingTypes;	// 32 = 0x20
    NSMutableSet *_scanningTypes;	// 40 = 0x28
    NSMutableDictionary *_linkIDToLink;	// 48 = 0x30
    NSMutableDictionary *_linkIDsConnecting;	// 56 = 0x38
    NSMutableDictionary *_linkIDsDisconnecting;	// 64 = 0x40
    NSMutableSet *_linkIDsAlwaysConnected;	// 72 = 0x48
    id <IDSWPLinkManagerDelegate> _delegate;	// 80 = 0x50
    NSHashTable *_connectivityDelegates;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x0020000000164ee1
- (void).cxx_destruct;	// IMP=0x0020000000168e9e
- (void)sendReset;	// IMP=0x0010000000168e98
- (unsigned long long)sendData:(id)arg1 peerID:(id)arg2;	// IMP=0x0010000000168c48
- (void)removeLink:(id)arg1;	// IMP=0x0010000000168a1b
- (void)disconnectFromPeer:(id)arg1;	// IMP=0x0010000000168951
- (void)disconnectOnMainQueueFromPeer:(id)arg1;	// IMP=0x001000000016846a
- (void)connectToPeer:(id)arg1;	// IMP=0x00100000001683a0
- (void)connectOnMainQueueToPeer:(id)arg1;	// IMP=0x0010000000167b1e
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x0010000000167b18
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x0010000000167b12
- (void)stopScanningForType:(long long)arg1;	// IMP=0x00100000001678df
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;	// IMP=0x00100000001674a6
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;	// IMP=0x0010000000166fcd
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;	// IMP=0x0010000000166c30
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;	// IMP=0x00100000001667c6
- (void)stopAdvertisingOfType:(long long)arg1;	// IMP=0x0010000000166593
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;	// IMP=0x0010000000166217
- (void)clientInstancesRemoved;	// IMP=0x0010000000165c27
- (void)clientInstanceCreatedWithMessageContext:(id)arg1;	// IMP=0x001000000016595e
- (void)setAlwaysConnectedForCBUUID:(id)arg1;	// IMP=0x0010000000165727
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x0010000000165711
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x00100000001654e5
- (_Bool)isScanningOrAdvertising;	// IMP=0x001000000016548a
- (void)setDelegateOnMainQueue:(id)arg1;	// IMP=0x001000000016545f
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000165395
- (void)_checkWPContinuitySetup;	// IMP=0x0010000000165137
- (id)init;	// IMP=0x0010000000164f36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

