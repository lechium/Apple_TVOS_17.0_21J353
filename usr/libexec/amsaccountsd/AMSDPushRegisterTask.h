//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSBag, NSData, NSString;

@interface AMSDPushRegisterTask : AMSTask
{
    ACAccount *_account;	// 8 = 0x8
    AMSBag *_bag;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
    NSData *_token;	// 32 = 0x20
}

+ (void)_updateThrottleForAccount:(id)arg1 environment:(id)arg2 throttleTime:(id)arg3;	// IMP=0x00400000000342f1
+ (void)_updateThrottleForAccount:(id)arg1 environment:(id)arg2;	// IMP=0x0010000000034250
+ (_Bool)_shouldThrottleForAccount:(id)arg1 environment:(id)arg2 currentTimestamp:(double)arg3;	// IMP=0x0010000000033f73
+ (_Bool)_shouldThrottleForAccount:(id)arg1 environment:(id)arg2;	// IMP=0x0010000000033ef0
+ (id)_createCriteriaWithToken:(id)arg1;	// IMP=0x0010000000033e08
+ (_Bool)shouldPerformForAccount:(id)arg1 environment:(id)arg2 token:(id)arg3;	// IMP=0x0010000000033736
- (void).cxx_destruct;	// IMP=0x00200000000344ea
@property(readonly, copy, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_updateCachedCriteriaWithToken:(id)arg1;	// IMP=0x001000000003408f
- (id)perform;	// IMP=0x0010000000032b82
- (id)initWithAccount:(id)arg1 token:(id)arg2 environment:(id)arg3 bag:(id)arg4;	// IMP=0x0010000000032a6a

@end

