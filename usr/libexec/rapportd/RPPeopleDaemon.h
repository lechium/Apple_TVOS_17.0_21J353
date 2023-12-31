//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, CUSystemMonitor, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPPeopleDaemon : NSObject
{
    int _airdropModeNotifyToken;	// 8 = 0x8
    int _airdropMode;	// 12 = 0xc
    NSMutableArray *_bufferedCloudMessages;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    unsigned int _deviceDiscoveryID;	// 32 = 0x20
    NSMutableDictionary *_discoveredDevices;	// 40 = 0x28
    NSMutableSet *_discoveryClients;	// 48 = 0x30
    unsigned int _discoveryFlagsAggregate;	// 56 = 0x38
    _Bool _invalidateCalled;	// 60 = 0x3c
    _Bool _invalidateDone;	// 61 = 0x3d
    _Bool _prefPeopleStrangers;	// 62 = 0x3e
    int _prefTrackWhileAsleepState;	// 64 = 0x40
    NSString *_primaryAppleIDCached;	// 72 = 0x48
    CUSystemMonitor *_systemMonitor;	// 80 = 0x50
    NSMutableSet *_xpcConnections;	// 88 = 0x58
    NSXPCListener *_xpcListener;	// 96 = 0x60
    CUSystemMonitor *_familyMemberMonitor;	// 104 = 0x68
    NSMutableDictionary *_familyAccountIdentityMap;	// 112 = 0x70
    NSMutableDictionary *_familyDeviceIdentityMap;	// 120 = 0x78
    unsigned long long _familyFlags;	// 128 = 0x80
    int _familyNotifyToken;	// 136 = 0x88
    NSObject<OS_dispatch_source> *_familySyncCheckTimer;	// 144 = 0x90
    _Bool _prefPeopleDiscoveryFamily;	// 152 = 0x98
    NSMutableDictionary *;	// 160 = 0xa0
    NSMutableDictionary *_friendDeviceIdentityMap;	// 168 = 0xa8
    _Bool _friendPrivacyGetting;	// 176 = 0xb0
    double _friendRequestMaxReachedLastSeconds;	// 184 = 0xb8
    NSArray *_friendsSuggestedArray;	// 192 = 0xc0
    _Bool _friendsSuggestedGetting;	// 200 = 0xc8
    _Bool _friendsSuggestedNeedsUpdate;	// 201 = 0xc9
    int _friendsSuggestedNotifyToken;	// 204 = 0xcc
    NSObject<OS_dispatch_source> *_friendsSuggestedPollTimer;	// 208 = 0xd0
    _Bool _needsFriendAccountUpdate;	// 216 = 0xd8
    long long _prefFamilyIdentityPruneSeconds;	// 224 = 0xe0
    long long _prefFriendAccountPruneSeconds;	// 232 = 0xe8
    long long _prefFriendRefreshMaxSeconds;	// 240 = 0xf0
    long long _prefFriendRefreshMinSeconds;	// 248 = 0xf8
    long long _prefFriendRefreshSeconds;	// 256 = 0x100
    int _prefFriendSuggestMax;	// 264 = 0x108
    int _prefFriendSuggestPollSeconds;	// 268 = 0x10c
    long long _prefFriendSyncDelaySeconds;	// 272 = 0x110
    _Bool _prefPeopleDiscoveryFriends;	// 280 = 0x118
    double _prefPrivacyCoalesceMinSecs;	// 288 = 0x120
    double _prefPrivacyCoalesceMaxSecs;	// 296 = 0x128
    CUCoalescer *_privacyChangedCoalescer;	// 304 = 0x130
    int _privacyChangedNotifyToken;	// 312 = 0x138
    double _pruneLastSeconds;	// 320 = 0x140
    _Bool _prefOneTimeDateRequestedResetCompleted;	// 328 = 0x148
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 336 = 0x150
}

+ (id)sharedPeopleDaemon;	// IMP=0x002000000006b81b
- (void).cxx_destruct;	// IMP=0x002000000007ae2d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x001000000007ad9d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000007aaf4
- (unsigned int)_updateIdentityType:(int)arg1 idsDeviceID:(id)arg2 appleID:(id)arg3 contactID:(id)arg4 msg:(id)arg5;	// IMP=0x0010000000079c9c
- (_Bool)_sendCloudIdentityFrameType:(unsigned char)arg1 destinationID:(id)arg2 flags:(unsigned int)arg3 msgCtx:(id)arg4;	// IMP=0x00100000000798eb
- (void)_processBufferedCloudMessages;	// IMP=0x0010000000079424
- (void)_bufferCloudMessage:(id)arg1 frameType:(unsigned char)arg2 msgCtx:(id)arg3;	// IMP=0x00100000000790d9
- (void)receivedFriendIdentityUpdate:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0010000000078b22
- (void)receivedFriendIdentityResponse:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0010000000078425
- (void)receivedFriendIdentityRequest:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0010000000077e63
- (void)_updateFriendSyncing;	// IMP=0x0010000000076dfb
- (void)_updateFriendPrivacyResults:(id)arg1;	// IMP=0x0010000000076704
- (void)_updateFriendPrivacy;	// IMP=0x001000000007636a
- (_Bool)_updateFriendDevices;	// IMP=0x0010000000076068
- (_Bool)updateFriendIdentityWithAppleID:(id)arg1 contactID:(id)arg2;	// IMP=0x0010000000076042
- (unsigned int)_updateFriendIdentityWithAppleID:(id)arg1 contactID:(id)arg2 sendersKnownAlias:(id)arg3 userAdded:(_Bool)arg4 updateDateRequested:(_Bool)arg5 suggestedContactIDs:(id)arg6;	// IMP=0x0010000000075906
- (_Bool)_updateFriendAccounts;	// IMP=0x0010000000074d29
- (void)_updateFriendIdentities;	// IMP=0x0010000000074c07
- (_Bool)_shouldThrottleFriendSyncing;	// IMP=0x0010000000074ba1
- (void)_resetFriends;	// IMP=0x0010000000074743
- (_Bool)_pruneFriendDevices;	// IMP=0x00100000000743d0
- (_Bool)_pruneFriendAccounts:(_Bool)arg1;	// IMP=0x0010000000073f82
- (_Bool)_pruneFriends:(_Bool)arg1;	// IMP=0x0010000000073d55
- (id)getFriendDeviceIdentities;	// IMP=0x0010000000073d3c
- (void)_friendsUpdateSuggestedIfNeeded;	// IMP=0x001000000007350c
- (void)_friendsEnsureStopped;	// IMP=0x00100000000733d5
- (void)_friendsEnsureStarted;	// IMP=0x00100000000731bd
- (void)_updateFamilyNotification;	// IMP=0x0010000000072fcc
- (void)receivedFamilyIdentityUpdate:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0010000000072c5e
- (void)receivedFamilyIdentityResponse:(id)arg1 msgCtx:(id)arg2;	// IMP=0x001000000007288f
- (void)receivedFamilyIdentityRequest:(id)arg1 msgCtx:(id)arg2;	// IMP=0x00100000000724c9
- (void)_updateFamilySyncing;	// IMP=0x0010000000071b07
- (_Bool)_pruneFamilyDevices;	// IMP=0x0010000000071548
- (_Bool)_updateFamilyDevices;	// IMP=0x0010000000071252
- (_Bool)_updateFamilyIdentityWithFamilyMember:(id)arg1;	// IMP=0x0010000000070df1
- (_Bool)_updateFamilyAccounts;	// IMP=0x00100000000706d6
- (void)_updateFamilyIdentities;	// IMP=0x00100000000705aa
- (id)getFamilyURIs;	// IMP=0x001000000007039b
- (id)getFamilyDeviceIdentities;	// IMP=0x0010000000070385
- (void)_familyEnsureStopped;	// IMP=0x0010000000070233
- (void)_familyEnsureStarted;	// IMP=0x001000000006ff13
- (void)_daemonDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x001000000006fc84
- (void)_daemonDeviceLost:(id)arg1;	// IMP=0x001000000006fa68
- (void)_daemonDeviceFound:(id)arg1;	// IMP=0x001000000006f80d
- (void)_discoveryEnsureStopped;	// IMP=0x001000000006f763
- (void)_discoveryEnsureStarted;	// IMP=0x001000000006eea7
- (void)_regenerateSelfIdentity:(id)arg1;	// IMP=0x001000000006ecb8
- (id)_primaryAppleID:(_Bool)arg1;	// IMP=0x001000000006eba2
- (void)_update;	// IMP=0x001000000006eae4
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x001000000006eadc
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006ead4
- (void)prefsChanged;	// IMP=0x001000000006deef
- (_Bool)addOrUpdateAdHocPairedIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006de3b
- (_Bool)addOrUpdateIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006d854
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000006cc4c
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000006c9db
- (void)_invalidated;	// IMP=0x001000000006c946
- (void)_invalidate;	// IMP=0x001000000006c6db
- (void)invalidate;	// IMP=0x001000000006c677
- (void)_activate;	// IMP=0x001000000006c2e1
- (void)activate;	// IMP=0x001000000006c27b
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x001000000006b8f7
- (id)init;	// IMP=0x001000000006b870

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

