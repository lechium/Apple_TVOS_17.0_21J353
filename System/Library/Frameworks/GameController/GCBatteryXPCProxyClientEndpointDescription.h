//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCBatteryXPCProxyClientEndpoint, GCDeviceBattery, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCBatteryXPCProxyClientEndpointDescription : NSObject
{
    GCDeviceBattery *_initialBattery;	// 8 = 0x8
    GCBatteryXPCProxyClientEndpoint *_materializedObject;	// 16 = 0x10
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000c04f
- (void).cxx_destruct;	// IMP=0x000000000000c567
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x000000000000c278
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c20b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c122
- (id)init;	// IMP=0x000000000000c0ff
- (id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2;	// IMP=0x000000000000c057

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

