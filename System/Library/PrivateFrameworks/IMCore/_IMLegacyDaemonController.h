//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMDaemonListener, IMDaemonQueryController, IMLocalObject, IMRemoteObject, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSProtocolChecker, NSRecursiveLock, NSString;
@protocol IMDaemonProtocol, OS_dispatch_queue;

@interface _IMLegacyDaemonController : NSObject
{
    _Bool _requestingConnection;	// 8 = 0x8
    _Bool __blocksConnectionAtResume;	// 9 = 0x9
    _Bool _hasCheckedForDaemon;	// 10 = 0xa
    _Bool _preventReconnect;	// 11 = 0xb
    _Bool _inBlockingConnect;	// 12 = 0xc
    _Bool _acquiringDaemonConnection;	// 13 = 0xd
    _Bool _hasBeenSuspended;	// 14 = 0xe
    _Bool __autoReconnect;	// 15 = 0xf
    unsigned int _gMyFZListenerCapabilities;	// 16 = 0x10
    unsigned int _cachedCapabilities;	// 20 = 0x14
    unsigned int _lastUpdatedCapabilities;	// 24 = 0x18
    unsigned int __capabilities;	// 28 = 0x1c
    IMDaemonListener *_daemonListener;	// 32 = 0x20
    NSString *_listenerID;	// 40 = 0x28
    id <IMDaemonProtocol> _replyingRemoteDaemon;	// 48 = 0x30
    id <IMDaemonProtocol> _synchronousReplyingRemoteDaemon;	// 56 = 0x38
    IMDaemonQueryController *_queryController;	// 64 = 0x40
    NSArray *__servicesToAllow;	// 72 = 0x48
    NSArray *__servicesToDeny;	// 80 = 0x50
    id _delegate;	// 88 = 0x58
    IMRemoteObject<IMDaemonProtocol> *_remoteObject;	// 96 = 0x60
    NSMutableDictionary *_listenerMap;	// 104 = 0x68
    IMLocalObject *_localObject;	// 112 = 0x70
    NSMutableArray *_services;	// 120 = 0x78
    NSProtocolChecker *_protocol;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_listenerLockQueue;	// 136 = 0x88
    struct os_unfair_recursive_lock_s _remoteDaemonLock;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_daemonConnectionQueue;	// 160 = 0xa0
    NSRecursiveLock *_connectionLock;	// 168 = 0xa8
    struct __CFRunLoopSource *_runLoopSource;	// 176 = 0xb0
    NSLock *_blockingLock;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;	// 192 = 0xc0
}

+ (void)_setApplicationWillTerminate;	// IMP=0x001000000004fe07
+ (void)_blockUntilSendQueueIsEmpty;	// IMP=0x001000000004fcbf
+ (_Bool)_applicationWillTerminate;	// IMP=0x001000000004fcb3
- (void).cxx_destruct;	// IMP=0x0000000000053ac4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue; // @synthesize remoteMessageQueue=_remoteMessageQueue;
@property(setter=_setAutoReconnect:) _Bool _autoReconnect; // @synthesize _autoReconnect=__autoReconnect;
@property(setter=__setCapabilities:) unsigned int _capabilities; // @synthesize _capabilities=__capabilities;
@property(nonatomic) unsigned int lastUpdatedCapabilities; // @synthesize lastUpdatedCapabilities=_lastUpdatedCapabilities;
@property(nonatomic) unsigned int cachedCapabilities; // @synthesize cachedCapabilities=_cachedCapabilities;
@property(nonatomic) unsigned int gMyFZListenerCapabilities; // @synthesize gMyFZListenerCapabilities=_gMyFZListenerCapabilities;
@property(nonatomic) _Bool hasBeenSuspended; // @synthesize hasBeenSuspended=_hasBeenSuspended;
@property(nonatomic) _Bool acquiringDaemonConnection; // @synthesize acquiringDaemonConnection=_acquiringDaemonConnection;
@property(nonatomic) _Bool inBlockingConnect; // @synthesize inBlockingConnect=_inBlockingConnect;
@property(nonatomic) _Bool preventReconnect; // @synthesize preventReconnect=_preventReconnect;
@property(nonatomic) _Bool hasCheckedForDaemon; // @synthesize hasCheckedForDaemon=_hasCheckedForDaemon;
@property(retain, nonatomic) NSLock *blockingLock; // @synthesize blockingLock=_blockingLock;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource; // @synthesize runLoopSource=_runLoopSource;
@property(retain, nonatomic) NSRecursiveLock *connectionLock; // @synthesize connectionLock=_connectionLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *daemonConnectionQueue; // @synthesize daemonConnectionQueue=_daemonConnectionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *localObjectLockQueue; // @synthesize localObjectLockQueue=_localObjectLockQueue;
@property(nonatomic) struct os_unfair_recursive_lock_s remoteDaemonLock; // @synthesize remoteDaemonLock=_remoteDaemonLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *listenerLockQueue; // @synthesize listenerLockQueue=_listenerLockQueue;
@property(retain, nonatomic) NSProtocolChecker *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) IMLocalObject *localObject; // @synthesize localObject=_localObject;
@property(retain, nonatomic) NSMutableDictionary *listenerMap; // @synthesize listenerMap=_listenerMap;
@property(retain, nonatomic) IMRemoteObject<IMDaemonProtocol> *remoteObject; // @synthesize remoteObject=_remoteObject;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setBlocksConnectionAtResume:) _Bool _blocksConnectionAtResume; // @synthesize _blocksConnectionAtResume=__blocksConnectionAtResume;
@property(retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // @synthesize _servicesToDeny=__servicesToDeny;
@property(retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // @synthesize _servicesToAllow=__servicesToAllow;
@property(readonly, nonatomic) IMDaemonQueryController *queryController; // @synthesize queryController=_queryController;
@property(readonly, nonatomic) id <IMDaemonProtocol> synchronousReplyingRemoteDaemon; // @synthesize synchronousReplyingRemoteDaemon=_synchronousReplyingRemoteDaemon;
@property(readonly, nonatomic) id <IMDaemonProtocol> replyingRemoteDaemon; // @synthesize replyingRemoteDaemon=_replyingRemoteDaemon;
@property(readonly, nonatomic, getter=isRequestingConnection) _Bool requestingConnection; // @synthesize requestingConnection=_requestingConnection;
@property(retain, nonatomic, setter=_setListenerID:) NSString *listenerID; // @synthesize listenerID=_listenerID;
@property(retain, nonatomic) IMDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void)systemApplicationDidResume;	// IMP=0x0000000000053738
- (void)systemApplicationWillEnterForeground;	// IMP=0x00000000000536a5
- (void)systemApplicationDidEnterBackground;	// IMP=0x000000000005366a
- (void)systemApplicationDidSuspend;	// IMP=0x000000000005362f
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000531fd
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000531e4
- (_Bool)consumeQueryContext:(id)arg1;	// IMP=0x0000000000053118
- (void)unsetQueryContext:(id)arg1;	// IMP=0x000000000005304e
- (void)setQueryContext:(id)arg1;	// IMP=0x0000000000052f7d
- (void)sendQueryWithReply:(_Bool)arg1 query:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052f00
- (void)setDaemonLogsOutWithoutStatusListeners:(_Bool)arg1;	// IMP=0x0000000000052efa
- (void)setDaemonTerminatesWithoutListeners:(_Bool)arg1;	// IMP=0x0000000000052ef4
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;	// IMP=0x0000000000052e65
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;	// IMP=0x0000000000052dd6
- (void)remoteObjectDiedNotification:(id)arg1;	// IMP=0x0000000000052b7c
- (void)localObjectDiedNotification:(id)arg1;	// IMP=0x0000000000052a31
- (void)_setCapabilities:(unsigned int)arg1;	// IMP=0x0000000000052979
@property(readonly, nonatomic) unsigned int capabilities;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;	// IMP=0x0000000000052795
- (void)_remoteObjectCleanup;	// IMP=0x0000000000052710
- (void)_localObjectCleanup;	// IMP=0x0000000000052671
- (_Bool)localObjectExists;	// IMP=0x00000000000525bd
- (_Bool)remoteObjectExists;	// IMP=0x0000000000052500
- (_Bool)__isRemoteObjectValid;	// IMP=0x0000000000052407
- (_Bool)__isLocalObjectValidOnQueue:(id)arg1;	// IMP=0x00000000000522e9
- (void)_noteSetupComplete;	// IMP=0x00000000000522cb
- (void)blockUntilConnected;	// IMP=0x0000000000051b01
- (double)_connectionTimeout;	// IMP=0x0000000000051ace
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic) _Bool isConnecting;
- (_Bool)_acquiringDaemonConnection;	// IMP=0x000000000005191e
- (id)_remoteObject;	// IMP=0x00000000000517d6
- (unsigned long long)processCapabilities;	// IMP=0x00000000000517c1
- (_Bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;	// IMP=0x000000000005160a
- (unsigned int)capabilitiesForListenerID:(id)arg1;	// IMP=0x00000000000514a8
- (_Bool)removeListenerID:(id)arg1;	// IMP=0x0000000000051251
- (_Bool)hasListenerForID:(id)arg1;	// IMP=0x0000000000051130
- (_Bool)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;	// IMP=0x0000000000050f5d
- (void)_listenerSetUpdated;	// IMP=0x0000000000050cce
@property(readonly, nonatomic) id <IMDaemonProtocol> synchronousRemoteDaemon;
@property(readonly, nonatomic) id <IMDaemonProtocol> remoteDaemon;
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(_Bool)arg3;	// IMP=0x0000000000050bb9
- (_Bool)connectToDaemon;	// IMP=0x0000000000050ba2
- (_Bool)connectToDaemonWithLaunch:(_Bool)arg1;	// IMP=0x0000000000050b8b
- (void)_connectToDaemonWithLaunch:(_Bool)arg1 capabilities:(unsigned int)arg2;	// IMP=0x00000000000507b4
- (void)disconnectFromDaemon;	// IMP=0x00000000000507ae
- (void)_disconnectFromDaemonWithForce:(_Bool)arg1;	// IMP=0x000000000004fe3b
- (void)disconnectFromDaemonWithForce:(_Bool)arg1;	// IMP=0x000000000004fe27
- (void)killDaemon;	// IMP=0x000000000004fda3
- (void)_blockUntilSendQueueIsEmpty;	// IMP=0x000000000004fcc5
- (_Bool)_makeConnectionWithLaunch:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ebc6
- (void)_handleDaemonException:(id)arg1;	// IMP=0x000000000004e659
- (void)_agentDidLaunchNotification:(id)arg1;	// IMP=0x000000000004e615
- (void)dealloc;	// IMP=0x000000000004e4e1
- (id)init;	// IMP=0x000000000004e100

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
