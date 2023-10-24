//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventSenderDescriptor, NSSet;
@protocol BKHIDEventDispatcher, BKHIDEventSenderInfo;

@interface BKTouchPadInfo : NSObject
{
    unsigned int _pathIndexInRangeMask;	// 8 = 0x8
    unsigned int _pathIndexTouchingMask;	// 12 = 0xc
    float _maxForce;	// 16 = 0x10
    id <BKHIDEventSenderInfo> _senderInfo;	// 24 = 0x18
    BKSHIDEventSenderDescriptor *_overrideSenderDescriptor;	// 32 = 0x20
    id <BKHIDEventDispatcher> _eventDispatcher;	// 40 = 0x28
    NSSet *_currentDestinations;	// 48 = 0x30
    struct CGSize _digitizerSurfaceDimensions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000007e36
@property(nonatomic) struct CGSize digitizerSurfaceDimensions; // @synthesize digitizerSurfaceDimensions=_digitizerSurfaceDimensions;
@property(nonatomic) float maxForce; // @synthesize maxForce=_maxForce;
@property(nonatomic) unsigned int pathIndexTouchingMask; // @synthesize pathIndexTouchingMask=_pathIndexTouchingMask;
@property(nonatomic) unsigned int pathIndexInRangeMask; // @synthesize pathIndexInRangeMask=_pathIndexInRangeMask;
@property(retain, nonatomic) NSSet *currentDestinations; // @synthesize currentDestinations=_currentDestinations;
@property(retain, nonatomic) id <BKHIDEventDispatcher> eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
@property(retain, nonatomic) BKSHIDEventSenderDescriptor *overrideSenderDescriptor; // @synthesize overrideSenderDescriptor=_overrideSenderDescriptor;
@property(retain, nonatomic) id <BKHIDEventSenderInfo> senderInfo; // @synthesize senderInfo=_senderInfo;
- (void)resetForCancel;	// IMP=0x0010000000007d34
- (id)description;	// IMP=0x0010000000007bba
- (id)initWithService:(id)arg1;	// IMP=0x00100000000079f7

@end

