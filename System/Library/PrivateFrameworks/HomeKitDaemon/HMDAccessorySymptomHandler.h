//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDSymptomManager, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySymptomHandler : HMFObject
{
    NSUUID *_uuid;	// 8 = 0x8
    HMDAccessory *_accessory;	// 16 = 0x10
    NSSet *_symptoms;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMFMessageDispatcher *_msgDispatcher;	// 40 = 0x28
    HMDSymptomManager *_symptomManager;	// 48 = 0x30
    NSUUID *_sfDeviceIdentifier;	// 56 = 0x38
    NSUUID *_accessoryUUID;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000020a63f
+ (id)logCategory;	// IMP=0x001000000020a60f
- (void).cxx_destruct;	// IMP=0x000000000020a36e
@property(readonly, copy, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) NSUUID *sfDeviceIdentifier; // @synthesize sfDeviceIdentifier=_sfDeviceIdentifier;
@property(readonly, nonatomic) HMDSymptomManager *symptomManager; // @synthesize symptomManager=_symptomManager;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSSet *symptoms; // @synthesize symptoms=_symptoms;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)_isWiFiMismatchSymptomCausedByWACPairingInHome:(id)arg1;	// IMP=0x000000000020a241
- (_Bool)_isWiFiMismatchSymptomCausedByWirelessCarPlay:(id)arg1;	// IMP=0x000000000020a1f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000020a0d3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020a0a0
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000209fe9
- (void)symptomManager:(id)arg1 didChangeSFDeviceIdentifier:(id)arg2;	// IMP=0x0000000000209f31
- (void)symptomManager:(id)arg1 didChangeSymptoms:(id)arg2;	// IMP=0x0000000000209e79
- (void)_handleFixErrorMessage:(id)arg1;	// IMP=0x0000000000209b68
- (_Bool)_shouldFilterWiFiMismatchSymptom:(id)arg1;	// IMP=0x0000000000209847
- (id)_filteredSymptomsForSymptoms:(id)arg1;	// IMP=0x00000000002095b8
- (void)_registerMessages;	// IMP=0x000000000020944f
- (void)_updateFrameworkClients;	// IMP=0x0000000000209339
- (void)_updateStateWithNewSFDeviceIdentifier:(id)arg1;	// IMP=0x00000000002091af
- (void)_sendStatusUpdate;	// IMP=0x000000000020900e
- (void)_updateStateWithNewSymptoms:(id)arg1;	// IMP=0x0000000000208f73
- (void)updateSymptoms:(id)arg1;	// IMP=0x0000000000208d22
- (void)handleAccessoryDeviceUpdated;	// IMP=0x0000000000208c3b
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000208ad3
- (id)initWithAccessory:(id)arg1 symptoms:(id)arg2 symptomManager:(id)arg3;	// IMP=0x0000000000208912
- (id)initWithAccessory:(id)arg1 symptoms:(id)arg2;	// IMP=0x000000000020887b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
