//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLMiLoConnectionSubscriptionAdapter : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_subscription;	// 16 = 0x10
}

@property(nonatomic) void *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x001000000027fefa
- (void)onMiLoGenericEvent:(id)arg1;	// IMP=0x001000000027fcc1
- (void)onMiLoObservationMetaInfo:(id)arg1;	// IMP=0x001000000027f971
- (void)onMiLoConnectionStatusEventUpdate:(id)arg1;	// IMP=0x001000000027f7ac
- (void)onMiLoDebugResponse:(id)arg1;	// IMP=0x001000000027f572
- (void)onMiLoPredictionEventUpdate:(id)arg1;	// IMP=0x001000000027f3e8
- (void)onMiLoServiceEventUpdate:(id)arg1;	// IMP=0x001000000027e91d
- (id)initWithMiLoConnectionSubscription:(void *)arg1;	// IMP=0x001000000027e8e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

