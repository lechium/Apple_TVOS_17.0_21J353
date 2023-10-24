//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLMotionAlarmSubscriptionAdapter : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_motionAlarmSubscription;	// 16 = 0x10
}

@property(nonatomic) void *motionAlarmSubscription; // @synthesize motionAlarmSubscription=_motionAlarmSubscription;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)fireAlarm:(id)arg1 error:(int)arg2;	// IMP=0x00100000004f8103
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x00100000004f80fd
- (id)initWithMotionAlarmSubscription:(void *)arg1;	// IMP=0x00100000004f80c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

