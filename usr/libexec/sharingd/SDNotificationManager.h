//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface SDNotificationManager : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    UNUserNotificationCenter *_homePodMiniNotificationCenter;	// 32 = 0x20
    _Bool _homePodNotifGranted;	// 40 = 0x28
    NSMutableDictionary *_homePodRequests;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    NSMutableDictionary *_tvKeyboardRequests;	// 64 = 0x40
    UNUserNotificationCenter *_tvNotifCenter;	// 72 = 0x48
    _Bool _tvNotifGranted;	// 80 = 0x50
    NSMutableDictionary *_watchKeyboardRequests;	// 88 = 0x58
    UNUserNotificationCenter *_watchNotifCenter;	// 96 = 0x60
    _Bool _watchNotifGranted;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x0020000000107ce4
- (void).cxx_destruct;	// IMP=0x002000000011003a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x001000000010ff41
- (void)testWatchKeyboard;	// IMP=0x001000000010fe75
- (void)testKeyboardUpdate;	// IMP=0x001000000010fda8
- (void)testKeyboardRemove;	// IMP=0x001000000010fcdc
- (void)testKeyboardPostAutoFill;	// IMP=0x001000000010fbfc
- (void)testKeyboardPost;	// IMP=0x001000000010fb2e
- (void)testHandoffPost;	// IMP=0x001000000010f99d
- (void)testAutoFillRemove;	// IMP=0x001000000010f8d1
- (void)testAutofillPost;	// IMP=0x001000000010f805
- (void)testPostBasic;	// IMP=0x001000000010f6ce
- (void)testPost:(id)arg1;	// IMP=0x001000000010f4fb
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010ef88
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010ea98
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010e58a
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010e4b2
- (void)_homePodHandoffRemoveAll;	// IMP=0x001000000010e402
- (void)homePodHandoffRemoveAll;	// IMP=0x001000000010e3a1
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000010e12e
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000010e06d
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010de97
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000010ddbf
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x001000000010d86b
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010d7cf
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010d15b
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010d083
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010cbfd
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010cb25
- (void)_watchKeyboardRemoveAll;	// IMP=0x001000000010caa1
- (void)watchKeyboardRemoveAll;	// IMP=0x001000000010ca40
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x001000000010c8ba
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x001000000010c810
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x001000000010c689
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x001000000010c5df
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x001000000010c29d
- (void)_tvAutoFillRemoveAll;	// IMP=0x001000000010c20d
- (void)tvAutoFillRemoveAll;	// IMP=0x001000000010c1ac
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x001000000010c026
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x001000000010bf7c
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x001000000010bc3c
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x001000000010bb92
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010b487
- (void)riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000010b3af
- (void)_riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010af29
- (void)riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x001000000010ae51
- (void)_riServerRemoveAll;	// IMP=0x001000000010adcd
- (void)riServerRemoveAll;	// IMP=0x001000000010ad6c
- (void)_riServerRemove:(id)arg1;	// IMP=0x001000000010abe6
- (void)riServerRemove:(id)arg1;	// IMP=0x001000000010ab3c
- (void)_riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000010a98b
- (void)riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000010a8cb
- (id)riServerContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000010a5af
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000109f51
- (id)attachmentFromURL:(id)arg1;	// IMP=0x0010000000109d4c
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3 isHomePodMini:(_Bool)arg4;	// IMP=0x0010000000109463
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x001000000010944e
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000108cdd
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000108926
- (void)_riServerEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000108562
- (void)_update;	// IMP=0x0010000000108504
- (void)prefsChanged;	// IMP=0x00100000001084f2
- (void)_invalidate;	// IMP=0x00100000001084a5
- (void)invalidate;	// IMP=0x0010000000108444
- (void)_activate;	// IMP=0x00100000001083c3
- (void)activate;	// IMP=0x0010000000108360
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000107d39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

