//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDSiriServer, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTargetControlManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDAccessory *_targetAccessory;	// 16 = 0x10
    NSMutableArray *_configuredControllers;	// 24 = 0x18
    NSMutableArray *_activeControlServices;	// 32 = 0x20
    NSMutableArray *_eventReceivers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
    HMDSiriServer *_siriServer;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000005f438a
- (void).cxx_destruct;	// IMP=0x00000000005f1804
@property(retain, nonatomic) HMDSiriServer *siriServer; // @synthesize siriServer=_siriServer;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDAccessory *targetAccessory; // @synthesize targetAccessory=_targetAccessory;
- (void)__activeSelectionReset:(id)arg1;	// IMP=0x00000000005f1364
- (void)__activeSelectionChanged:(id)arg1;	// IMP=0x00000000005f0b3a
- (void)_handleTargetControlServiceDeselection:(id)arg1;	// IMP=0x00000000005f08c5
- (void)_handleTargetControlServiceSelection:(id)arg1;	// IMP=0x00000000005f06e7
- (void)_handleControllerDisconnected:(id)arg1;	// IMP=0x00000000005f036c
- (void)_targetAccessoryUnconfiguredWithController:(id)arg1;	// IMP=0x00000000005efcb1
- (void)_targetAccessoryConfiguredWithController:(id)arg1;	// IMP=0x00000000005efa00
- (void)__characteristicsEventsReceived:(id)arg1;	// IMP=0x00000000005ef2ea
- (void)_handleButtonEvent:(id)arg1 fromControlService:(id)arg2;	// IMP=0x00000000005ee2f1
- (id)__getOrCreateEventReceiver:(id)arg1;	// IMP=0x00000000005edcdf
- (void)__serviceRemoved:(id)arg1;	// IMP=0x00000000005edc27
- (void)__accessoryRemoved:(id)arg1;	// IMP=0x00000000005edb6f
- (void)__accessoryAdded:(id)arg1;	// IMP=0x00000000005edab7
- (void)__accessoryDisconnected:(id)arg1;	// IMP=0x00000000005ed9ff
- (void)__accessoryUnconfigured:(id)arg1;	// IMP=0x00000000005ed9ed
- (void)__accessoryConnected:(id)arg1;	// IMP=0x00000000005ed935
- (void)__accessoryConfigured:(id)arg1;	// IMP=0x00000000005ed923
- (void)__accessoryNameUpdated:(id)arg1;	// IMP=0x00000000005ed86b
- (void)__controllerRefreshedConfiguration:(id)arg1;	// IMP=0x00000000005ed7b3
- (void)_targetAccessoryRefreshConfigurationWithController:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000005ecd28
- (id)__selectButtonConfiguration:(id)arg1 receiver:(id)arg2;	// IMP=0x00000000005ec438
- (void)__targetAccessoryUnconfiguredForControl:(id)arg1;	// IMP=0x00000000005ec380
- (void)__targetAccessoryConfiguredForControl:(id)arg1;	// IMP=0x00000000005ec2c8
- (void)addTargetControllers:(id)arg1;	// IMP=0x00000000005ebbe8
- (void)removeReceiver:(id)arg1;	// IMP=0x00000000005ebb72
- (void)addReceiver:(id)arg1;	// IMP=0x00000000005ebafc
@property(readonly, nonatomic) NSMutableArray *eventReceivers; // @synthesize eventReceivers=_eventReceivers;
- (void)removeControlService:(id)arg1;	// IMP=0x00000000005eba26
- (void)addControlService:(id)arg1;	// IMP=0x00000000005eb9b0
@property(readonly, nonatomic) NSMutableArray *activeControlServices; // @synthesize activeControlServices=_activeControlServices;
- (void)_removeController:(id)arg1;	// IMP=0x00000000005eb82f
- (void)_addController:(id)arg1;	// IMP=0x00000000005eb6ad
@property(readonly, nonatomic) NSMutableArray *configuredControllers; // @synthesize configuredControllers=_configuredControllers;
- (id)logIdentifier;	// IMP=0x00000000005eb63b
- (void)invalidate;	// IMP=0x00000000005eb2be
- (id)initWithTargetAccessory:(id)arg1 controllers:(id)arg2;	// IMP=0x00000000005ea85f
- (id)init;	// IMP=0x00000000005ea7b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
