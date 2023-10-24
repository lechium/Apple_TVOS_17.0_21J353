//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDMPCSessionController, HMDResidentDevice, NSObject, NSString, NSUUID;
@protocol HMDMediaActionRouterDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaActionRouter : HMFObject
{
    _Bool _shouldExecuteOnCurrentDevice;	// 8 = 0x8
    id <HMDMediaActionRouterDataSource> _dataSource;	// 16 = 0x10
    HMDResidentDevice *_targetResidentDeviceOverride;	// 24 = 0x18
    HMDMPCSessionController *_mpcSessionController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005d29f7
@property(readonly, nonatomic) HMDMPCSessionController *mpcSessionController; // @synthesize mpcSessionController=_mpcSessionController;
@property(nonatomic) __weak HMDResidentDevice *targetResidentDeviceOverride; // @synthesize targetResidentDeviceOverride=_targetResidentDeviceOverride;
@property(readonly, nonatomic) _Bool shouldExecuteOnCurrentDevice; // @synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice;
@property(readonly, nonatomic) __weak id <HMDMediaActionRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)mediaProfileWithUUID:(id)arg1;	// IMP=0x00000000005d2916
@property(readonly) __weak HMDHome *home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005d26f7
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(_Bool)arg2;	// IMP=0x00000000005d14d8
- (void)gatherTargetDevicesForExecutingMediaActionWithProfiles:(id)arg1 targetSystemMediaApplication:(_Bool)arg2 outResidentDevicesInMediaAction:(id *)arg3 outHomePodsInMediaAction:(id *)arg4 outResidentDevicesSupportingMediaActions:(id *)arg5 outHomePodsSupportingMediaActions:(id *)arg6 outNonOdeonHomePodsSupportingMediaActions:(id *)arg7 outNonOdeonResidentDevicesSupportingMediaActions:(id *)arg8 outNonOdeonResidentDevicesInMediaAction:(id *)arg9 outNonOdeonHomePodsInMediaAction:(id *)arg10 dataSource:(id)arg11;	// IMP=0x00000000005d0daa
- (void)routeMessage:(id)arg1;	// IMP=0x00000000005d0a08
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(_Bool)arg3 canForwardMessage:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000005d0640
- (void)sendMediaActionMessageToCompanionWithSessionData:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005d0482
- (void)sendMediaActionMessageToResident:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005d034e
- (void)handleNonResidentMediaActionExecutionWithSessionData:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005d01ea
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005cffd2
- (void)routeMediaActionForExecution:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005cfcac
- (void)_registerForMessages;	// IMP=0x00000000005cfb30
- (void)dealloc;	// IMP=0x00000000005cfa89
- (id)init;	// IMP=0x00000000005cf9e1
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000005cf28f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
