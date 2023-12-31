//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKObserverBridgeHandle, NSString;

__attribute__((visibility("hidden")))
@interface _HKFeatureAvailabilityProvidingObserverBridge : NSObject
{
    HKObserverBridgeHandle *_handle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000026b1d6
@property(readonly, nonatomic) HKObserverBridgeHandle *handle; // @synthesize handle=_handle;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;	// IMP=0x000000000026b0ab
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;	// IMP=0x000000000026af8a
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;	// IMP=0x000000000026ae69
- (void)_notifyObserversWithFeatureAvailabilityProviding:(id)arg1;	// IMP=0x000000000026acc2
- (id)initWithHandle:(id)arg1;	// IMP=0x000000000026ac57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

