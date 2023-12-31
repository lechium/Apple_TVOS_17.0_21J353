//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_os_transaction;

@interface ClientInterface : NSObject
{
    NSXPCConnection *_conn;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSString *_uniqueIdentifier;	// 24 = 0x18
}

+ (void)updateBadgeCount:(unsigned long long)arg1 bundleID:(id)arg2;	// IMP=0x00200000000051c0
+ (void)refreshBadgesWithItems:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000004fa7
+ (id)allApprovedItemsByBundle;	// IMP=0x0010000000004e89
+ (void)_updateBadgeCounts:(_Bool)arg1 processTelemetry:(id)arg2;	// IMP=0x0010000000004a29
+ (void)updateBadgeCounts:(_Bool)arg1;	// IMP=0x0010000000004a15
+ (id)_badgeQueue;	// IMP=0x0010000000003741
- (void).cxx_destruct;	// IMP=0x00200000000057c7
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)_telemetryProcessor;	// IMP=0x0010000000005753
- (void)postHSA2PasswordResetNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000556f
- (void)didActivateHSA2LoginNotificationNotification:(id)arg1;	// IMP=0x0010000000005502
- (void)tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1;	// IMP=0x00100000000054fc
- (void)postHSA2LoginCode:(id)arg1 withNotification:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000054f6
- (void)postHSA2PasswordChangeForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000054f0
- (void)postHSA2LoginNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000054ea
- (void)_didChangeFollowUpItems;	// IMP=0x001000000000494b
- (id)_predicateForClientIdentifier:(id)arg1;	// IMP=0x0010000000004842
- (id)itemsForClientIdentifier:(id)arg1;	// IMP=0x0010000000004736
- (void)clearPendingFollowUpItemsForClientIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000444a
- (void)updateBadgesForTimer;	// IMP=0x001000000000442f
- (void)clearNotificationForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004192
- (void)clearPendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003e5e
- (void)pendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003de7
- (void)postFollowUpItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003847
- (void)countOfPendingFollowUpItemsForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000037c2
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000003698

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

