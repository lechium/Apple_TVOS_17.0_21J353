//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DownloadHandlerManager : NSObject
{
    NSMutableDictionary *_clientsByHandlerID;	// 8 = 0x8
    NSMutableDictionary *_disconnectedSessionsByClientID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSMutableDictionary *_globalHandlersByClientID;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observersQueue;	// 48 = 0x30
    NSMutableDictionary *_sessionsByID;	// 56 = 0x38
}

+ (id)handlerManager;	// IMP=0x0040000000176ebe
- (void)_sendMessage:(long long)arg1 forSessionID:(long long)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x002000000017af32
- (id)_popDownloadSessionForSessionID:(long long)arg1;	// IMP=0x001000000017aeab
- (void)_notifyObserversOfSessionChanges:(id)arg1;	// IMP=0x001000000017acea
- (void)_notifyObserversOfSessionChange:(id)arg1;	// IMP=0x001000000017ac8d
- (void)_notifyObserversOfHandlersChange;	// IMP=0x000000000017aae3
- (long long)_globalHandlerIDForClientID:(id)arg1;	// IMP=0x001000000017aab4
- (void)_endSessionWithID:(long long)arg1 state:(long long)arg2;	// IMP=0x001000000017aa54
- (void)_endDisconnectedSessionsForClientID:(id)arg1;	// IMP=0x001000000017a9c8
- (id)_disconnectSessionsForHandlerID:(long long)arg1;	// IMP=0x001000000017a8a0
- (id)_clientForSession:(id)arg1;	// IMP=0x001000000017a830
- (id)_clientForProperties:(id)arg1;	// IMP=0x001000000017a72a
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000017a203
- (void)useCredential:(id)arg1 forAuthenticationSessionWithID:(long long)arg2;	// IMP=0x0010000000179fcf
- (void)setSessionProperties:(id)arg1 forSessionWithID:(long long)arg2;	// IMP=0x0010000000179ef6
- (void)setGlobalDownloadHandlerID:(long long)arg1 forClientID:(id)arg2;	// IMP=0x0010000000179b30
- (id)sessionForSessionID:(long long)arg1;	// IMP=0x00100000001799f7
- (void)retrySessionWithID:(long long)arg1;	// IMP=0x0010000000179801
- (void)resetDisavowedSessionsForHandlerWithID:(long long)arg1;	// IMP=0x001000000017958e
- (void)removeHandlerObserver:(id)arg1;	// IMP=0x0010000000179521
- (void)releaseDownloadSessionWithID:(long long)arg1;	// IMP=0x0010000000179348
- (void)rejectSpaceForAuthenticationSessionWithID:(long long)arg1;	// IMP=0x001000000017916f
- (void)performDefaultForAuthenticationSessionWithID:(long long)arg1;	// IMP=0x0010000000178f96
- (void)pauseSessionWithID:(long long)arg1;	// IMP=0x0010000000178dba
- (id)openSessionWithProperties:(id)arg1;	// IMP=0x0010000000178bc8
- (void)modifyDownloadHandlerWithID:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000178a12
- (void)finishDownloadSessionWithID:(long long)arg1;	// IMP=0x0010000000178839
- (void)failDownloadSessionWithID:(long long)arg1 error:(id)arg2;	// IMP=0x0010000000178605
- (void)endBackgroundTaskForSessionWithID:(long long)arg1 identifier:(id)arg2;	// IMP=0x00100000001784be
- (void)disconnectDownloadSessionWithID:(long long)arg1;	// IMP=0x00100000001782e5
- (void)disavowDownloadSessionWithID:(long long)arg1 error:(id)arg2;	// IMP=0x0010000000178080
- (void)continueAuthenticationSessionWithID:(long long)arg1;	// IMP=0x0010000000177ea7
- (void)closeUnstartedSessionWithID:(long long)arg1;	// IMP=0x0010000000177dfc
- (_Bool)canOpenSessionWithProperties:(id)arg1;	// IMP=0x0010000000177d36
- (void)cancelSessionWithID:(long long)arg1;	// IMP=0x0010000000177b40
- (void)cancelAuthenticationSessionWithID:(long long)arg1;	// IMP=0x0010000000177967
- (void)beginSessionWithID:(long long)arg1;	// IMP=0x001000000017748d
- (id)beginBackgroundTaskForSessionWithID:(long long)arg1 reason:(unsigned int)arg2 expirationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001772f3
- (void)addHandlerObserver:(id)arg1;	// IMP=0x0010000000177286
- (void)addDownloadHandler:(id)arg1;	// IMP=0x0010000000176f3b
- (void)dealloc;	// IMP=0x0010000000176e0e
- (id)init;	// IMP=0x0010000000176d0c

@end

