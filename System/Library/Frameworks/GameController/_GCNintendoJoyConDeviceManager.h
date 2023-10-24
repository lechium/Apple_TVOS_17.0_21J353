//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, _GCNintendoJoyConDevice;
@protocol NSObject><NSCopying><NSSecureCoding, OS_dispatch_queue, _GCPhysicalDeviceRegistry, _GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry;

__attribute__((visibility("hidden")))
@interface _GCNintendoJoyConDeviceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> _deviceRegistry;	// 16 = 0x10
    NSMutableSet *_claimedServices;	// 24 = 0x18
    NSMutableDictionary *_pendingDevices;	// 32 = 0x20
    NSMutableDictionary *_physicalDevices;	// 40 = 0x28
    _GCNintendoJoyConDevice *_pendingJoyCon;	// 48 = 0x30
    NSMutableSet *_fusionGestureDevices;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002fd67
- (_Bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x000000000002f913
- (_Bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x000000000002f662
- (void)relinquishHIDService:(id)arg1;	// IMP=0x000000000002f478
- (void)_onqueue_relinquishHIDService:(id)arg1;	// IMP=0x000000000002f272
- (void)claimHIDService:(id)arg1;	// IMP=0x000000000002eab0
- (id)matchHIDService:(id)arg1;	// IMP=0x000000000002e989
- (void)_onqueue_registerDefaultConfigurationsForDevice:(id)arg1;	// IMP=0x000000000002e919
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1;	// IMP=0x000000000002e6fa
- (void)_onqueue_registerDefaultConfigurationForJoyConDevice:(id)arg1;	// IMP=0x000000000002e4c6
- (void)_onqueue_tryRegisteringFusionConfigurationWithDevice:(id)arg1;	// IMP=0x000000000002e2d7
- (void)_onqueue_registerFusionConfigurationWithLeftDevice:(id)arg1 rightDevice:(id)arg2;	// IMP=0x000000000002e034
- (void)deactivateLogicalDevice:(id)arg1;	// IMP=0x000000000002dfb2
- (void)activateLogicalDevice:(id)arg1;	// IMP=0x000000000002df2f
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;	// IMP=0x000000000002d707
@property __weak id <_GCPhysicalDeviceRegistry> deviceRegistry;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
- (void)device:(id)arg1 fusionGestureActive:(_Bool)arg2;	// IMP=0x000000000002ce3b
- (id)init;	// IMP=0x000000000002cd7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

