//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLStepCountSubscriptionAdapter : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_stepCountSubscription;	// 16 = 0x10
}

@property(nonatomic) void *stepCountSubscription; // @synthesize stepCountSubscription=_stepCountSubscription;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x00100000008fecdd
- (id)initWithStepCountSubscription:(void *)arg1;	// IMP=0x00100000008feca0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

