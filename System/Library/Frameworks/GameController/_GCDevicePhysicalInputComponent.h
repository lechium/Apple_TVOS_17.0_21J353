//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _GCDevicePhysicalInputGroup;
@protocol GCDevice, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputComponent : NSObject
{
    _GCDevicePhysicalInputGroup *_defaultPhysicalInputGroup;	// 8 = 0x8
    id _gamepadEventObservation;	// 16 = 0x10
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 24 = 0x18
    id <GCDevice> _device;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006f6e5
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)physicalInputGroupPoll:(id)arg1 forLatest:(_Bool)arg2;	// IMP=0x000000000006f6cb
- (void)physicalInputGroupPreferredTransactionQueueDepthDidChange:(id)arg1;	// IMP=0x000000000006f6c5
- (void)physicalInputGroupQueueDidChange:(id)arg1;	// IMP=0x000000000006f6bf
- (id)capture;	// IMP=0x000000000006f63f
- (void)setDispatchQueue:(id)arg1;	// IMP=0x000000000006f62e
- (void)setDevice:(id)arg1;	// IMP=0x000000000006f618
- (id)init;	// IMP=0x000000000006f5c3
- (id)initWithIdentifier:(id)arg1 defaultPhysicalInput:(id)arg2;	// IMP=0x000000000006f489
- (id)initWithIdentifier:(id)arg1 physicalInputs:(id)arg2;	// IMP=0x000000000006f3fb
- (void)setGamepadEventSource:(id)arg1;	// IMP=0x000000000006f7e8
- (void)handleGamepadEvent:(id)arg1;	// IMP=0x000000000006f721

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

