//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTRDeviceController.h"

@class MTRDeviceControllerXPCConnection, NSObject;
@protocol NSCopying, OS_dispatch_queue;

@interface MTRDeviceControllerOverXPC : MTRDeviceController
{
    id <NSCopying> _controllerID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    MTRDeviceControllerXPCConnection *_xpcConnection;	// 24 = 0x18
}

+ (id)sharedControllerWithID:(id)arg1 xpcConnectBlock:(CDUnknownBlockType)arg2;	// IMP=0x006000000063e924
- (void).cxx_destruct;	// IMP=0x000000000063ff2a
@property(readonly, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) id <NSCopying> controllerID; // @synthesize controllerID=_controllerID;
- (id)initWithControllerID:(id)arg1 workQueue:(id)arg2 connectBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000063fe1b
- (id)initWithControllerID:(id)arg1 workQueue:(id)arg2 xpcConnection:(id)arg3;	// IMP=0x000000000063fd65
- (id)openPairingWindowWithPIN:(unsigned long long)arg1 duration:(unsigned long long)arg2 discriminator:(unsigned long long)arg3 setupPIN:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000063fcd5
- (_Bool)openPairingWindow:(unsigned long long)arg1 duration:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000063fc45
- (id)baseDeviceForNodeID:(id)arg1;	// IMP=0x000000000063fba0
- (void)fetchControllerIdWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000063f3dd
- (_Bool)getBaseDevice:(unsigned long long)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000063f248
- (id)deviceBeingCommissionedWithNodeID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000063f170
- (_Bool)cancelCommissioningForNodeID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000063f098
- (_Bool)commissionNodeWithID:(id)arg1 commissioningParams:(id)arg2 error:(id *)arg3;	// IMP=0x000000000063efc0
- (id)getDeviceBeingCommissioned:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000063eee8
- (_Bool)stopDevicePairing:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000063ee10
- (_Bool)commissionDevice:(unsigned long long)arg1 commissioningParams:(id)arg2 error:(id *)arg3;	// IMP=0x000000000063ed38
- (_Bool)pairDevice:(unsigned long long)arg1 onboardingPayload:(id)arg2 error:(id *)arg3;	// IMP=0x000000000063ec60
- (_Bool)pairDevice:(unsigned long long)arg1 address:(id)arg2 port:(unsigned short)arg3 discriminator:(unsigned short)arg4 setupPINCode:(unsigned int)arg5 error:(id *)arg6;	// IMP=0x000000000063eb87
- (_Bool)pairDevice:(unsigned long long)arg1 discriminator:(unsigned short)arg2 setupPINCode:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x000000000063eaaf
- (_Bool)setupCommissioningSessionWithPayload:(id)arg1 newNodeID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000063e9d7

@end
