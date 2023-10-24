//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventHitTestLayerInformation, BKSHIDTouchRoutingPolicy, BKSWindowServerHitTestSecurityAnalysis, NSArray, NSMutableSet, NSString;

@interface BKTouchContact : NSObject
{
    long long _pathIndex;	// 8 = 0x8
    unsigned int _touchIdentifier;	// 16 = 0x10
    unsigned int _userIdentifier;	// 20 = 0x14
    unsigned int _slotID;	// 24 = 0x18
    long long _presence;	// 32 = 0x20
    long long _previousPresence;	// 40 = 0x28
    long long _hitTestPolicy;	// 48 = 0x30
    unsigned int _transducerType;	// 56 = 0x38
    struct CGRect _hitTestRegion;	// 64 = 0x40
    struct CGRect _exclusiveHitTestRegion;	// 96 = 0x60
    struct CGPoint _normalLocation;	// 128 = 0x80
    struct CGPoint _offset;	// 144 = 0x90
    struct BKPathZGradientInfo _zGradient;	// 160 = 0xa0
    struct BKPointTriple _denormalizedLocation;	// 184 = 0xb8
    BKSHIDTouchRoutingPolicy *_routingPolicy;	// 240 = 0xf0
    BKSHIDEventHitTestLayerInformation *_hitTestInformationAtDown;	// 248 = 0xf8
    BKSWindowServerHitTestSecurityAnalysis *_hitTestSecurityAnalysis;	// 256 = 0x100
    NSMutableSet *_destinations;	// 264 = 0x108
    NSArray *_hostingChain;	// 272 = 0x110
    _Bool _touchDetached;	// 280 = 0x118
    _Bool _transferred;	// 281 = 0x119
    _Bool _tapToWake;	// 282 = 0x11a
}

- (void).cxx_destruct;	// IMP=0x00200000000662fc
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x001000000006610c
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000660a0
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x0010000000065ff2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
