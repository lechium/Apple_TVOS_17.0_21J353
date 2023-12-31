//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol NSObject><NSCopying><NSSecureCoding, OS_dispatch_queue, _GCDefaultDeviceManagerDelegate, _GCDeviceMatchingFilter, _GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry;

__attribute__((visibility("hidden")))
@interface _GCDefaultDeviceManager : NSObject
{
    NSNumber *_probeScore;	// 8 = 0x8
    id <_GCDeviceMatchingFilter> _matchingFilter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableSet *_claimedServices;	// 32 = 0x20
    NSMutableDictionary *_physicalDevices;	// 40 = 0x28
    NSMutableDictionary *_hiddenPhysicalDevices;	// 48 = 0x30
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 56 = 0x38
    id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> _deviceRegistry;	// 64 = 0x40
    id <_GCDefaultDeviceManagerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000036894
@property(nonatomic) __weak id <_GCDefaultDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> deviceRegistry; // @synthesize deviceRegistry=_deviceRegistry;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (_Bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x0000000000036606
- (_Bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;	// IMP=0x00000000000363da
- (void)relinquishHIDService:(id)arg1;	// IMP=0x00000000000361f0
- (void)_onqueue_relinquishHIDDevice:(id)arg1;	// IMP=0x0000000000035b22
- (void)_onqueue_registerPhysicalDevice:(id)arg1 serviceInfo:(id)arg2 checkForDuplicateDevice:(_Bool)arg3;	// IMP=0x000000000003595c
- (void)claimHIDService:(id)arg1;	// IMP=0x0000000000035583
- (void)_onqueue_checkAndHideDuplicateDevice:(id)arg1;	// IMP=0x0000000000035228
- (id)matchHIDService:(id)arg1;	// IMP=0x00000000000351ef
- (void)refreshPhysicalDeviceConfiguration:(id)arg1;	// IMP=0x0000000000034e80
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1 replaceExisting:(_Bool)arg2;	// IMP=0x0000000000034c96
- (id)configurationIdentifierForDevice:(id)arg1;	// IMP=0x0000000000034c06
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;	// IMP=0x0000000000034696
- (id)initWithIdentifier:(id)arg1 matchingFilter:(id)arg2 probeScore:(id)arg3;	// IMP=0x0000000000034479

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

