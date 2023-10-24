//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, HMDNotificationRegistration, NSDictionary, NSObject, NSSet, NSString;
@protocol HMDCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicsAvailabilityListener : HMFObject
{
    NSSet *_availableCharacteristics;	// 8 = 0x8
    NSDictionary *_interestedCharacteristicTypesByServiceType;	// 16 = 0x10
    id <HMDCharacteristicsAvailabilityListenerDelegate> _delegate;	// 24 = 0x18
    HMDHAPAccessory *_accessory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMDNotificationRegistration *_notificationRegistration;	// 48 = 0x30
    NSString *_logIdentifier;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000cec691
- (void).cxx_destruct;	// IMP=0x0000000000cec449
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property __weak id <HMDCharacteristicsAvailabilityListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSDictionary *interestedCharacteristicTypesByServiceType; // @synthesize interestedCharacteristicTypesByServiceType=_interestedCharacteristicTypesByServiceType;
@property(copy) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
- (void)handleServicesUpdated:(id)arg1;	// IMP=0x0000000000cec313
- (void)handleCharacteristicsUpdated:(id)arg1;	// IMP=0x0000000000cec2a2
- (void)_notifyDelegate;	// IMP=0x0000000000cec0c6
- (id)_accessoryCharacteristicsToObserve;	// IMP=0x0000000000cebd01
- (void)_registerForNotifications;	// IMP=0x0000000000cebc19
- (void)start;	// IMP=0x0000000000cebbb9
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 interestedCharacteristicTypesByServiceType:(id)arg3;	// IMP=0x0000000000ceb9d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

