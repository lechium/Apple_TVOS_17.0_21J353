//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSObject, NSString, NSURL;
@protocol HMDFileManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLaunchHandler : HMFObject
{
    NSURL *_relaunchPlistFileURL;	// 8 = 0x8
    id <HMDFileManager> _fileManager;	// 16 = 0x10
    CDUnknownBlockType _jetsamPriorityHandler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 32 = 0x20
    NSMutableSet *_registeredRelaunchClients;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000007d5917
+ (id)sharedHandler;	// IMP=0x00100000007d58b4
- (void).cxx_destruct;	// IMP=0x00000000007d5333
@property(readonly, nonatomic) NSMutableSet *registeredRelaunchClients; // @synthesize registeredRelaunchClients=_registeredRelaunchClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(readonly, nonatomic) CDUnknownBlockType jetsamPriorityHandler; // @synthesize jetsamPriorityHandler=_jetsamPriorityHandler;
@property(readonly, nonatomic) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy, nonatomic) NSURL *relaunchPlistFileURL; // @synthesize relaunchPlistFileURL=_relaunchPlistFileURL;
- (void)_setJetsamPriorityElevated:(_Bool)arg1;	// IMP=0x00000000007d50e5
- (void)_updateOrRemoveRelaunchPlist;	// IMP=0x00000000007d4b64
- (void)deregisterRelaunchClientWithUUID:(id)arg1;	// IMP=0x00000000007d4aac
- (void)registerRelaunchClientWithUUID:(id)arg1;	// IMP=0x00000000007d49f3
- (void)removePersistentRelaunchRegistrationsIfNecessary;	// IMP=0x00000000007d4982
- (id)initWithRelaunchPlistFileURL:(id)arg1 fileManager:(id)arg2 jetsamPriorityHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007d482b
- (id)init;	// IMP=0x00000000007d478a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

