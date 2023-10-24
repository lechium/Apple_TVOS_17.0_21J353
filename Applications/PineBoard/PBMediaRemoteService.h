//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PBSystemServiceConnection;

@interface PBMediaRemoteService : NSObject
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMutableDictionary *_presentationInfoByToken;	// 16 = 0x10
}

+ (_Bool)_connectionHasValidEntitlement:(id)arg1;	// IMP=0x00200000001c830e
+ (void)_updateTVAVRPowerControlAvailableState;	// IMP=0x00100000001c6b9d
+ (void)_updateVolumeControlAvailableState;	// IMP=0x00100000001c6afa
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001c6a90
+ (id)_audioRoutingController;	// IMP=0x00100000001c69d3
+ (void)initialize;	// IMP=0x00100000001c6746
- (void).cxx_destruct;	// IMP=0x00200000001c8401
@property(readonly, nonatomic) NSMutableDictionary *presentationInfoByToken; // @synthesize presentationInfoByToken=_presentationInfoByToken;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (_Bool)_hasValidEntitlement;	// IMP=0x00100000001c82c6
- (void)__volumeControlTargetDeviceTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c816d
- (void)__noteUserPresenceDetected;	// IMP=0x00100000001c7f62
- (void)__dismissPinDialogWithToken:(id)arg1 error:(id)arg2;	// IMP=0x00100000001c7d32
- (void)__dismissPinDialogWithToken:(id)arg1;	// IMP=0x00100000001c7c22
- (void)__showPinDialogWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c74d9
- (void)__stopSiriWithContext:(id)arg1;	// IMP=0x00100000001c72ba
- (void)__startSiriWithContext:(id)arg1;	// IMP=0x00100000001c6fa9
- (void)__activateSiriWithContext:(id)arg1;	// IMP=0x00100000001c6c5d
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00100000001c66c8
- (id)init;	// IMP=0x00100000001c66ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
