//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPress, UIPressesEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedPress : NSObject
{
    long long _delayCount;	// 8 = 0x8
    _Bool _cloneForSecondDelivery;	// 16 = 0x10
    UIPress *_press;	// 24 = 0x18
    UIPress *_stateWhenDelayed;	// 32 = 0x20
    UIPress *_stateWhenDelivered;	// 40 = 0x28
    UIPressesEvent *_event;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000836eb8
@property(readonly, copy) NSString *description;
- (double)timestampForDelivery;	// IMP=0x0000000000836d7a
- (long long)phaseForDelivery;	// IMP=0x0000000000836d5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000836c84
- (id)init;	// IMP=0x0000000000836c2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

