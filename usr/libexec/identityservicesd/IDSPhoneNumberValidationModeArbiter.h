//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCTPNRValidationMechanism, IDSServerBag, NSString;

@interface IDSPhoneNumberValidationModeArbiter : NSObject
{
    IDSServerBag *_serverBag;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002c2339
@property(readonly, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(readonly, nonatomic) unsigned int maxAllowableNumberOfValidationAttemptsWhileNoneHaveSentSuccessfully;
@property(readonly, nonatomic) unsigned int maxAllowableNumberOfSuccessfullySentVerifications;
@property(readonly, nonatomic) unsigned int maxAllowableNumberOfPreflightRequests;
@property(readonly, nonatomic) double minimumIntervalBetweenValidationAttempts;
@property(readonly, nonatomic) NSString *preflightTestDataOverride;
@property(readonly, nonatomic) IDSCTPNRValidationMechanism *preflightShortCircuitMechanismOverride;
- (_Bool)isPrefightEnabledByServerBag;	// IMP=0x00100000002c1e06
@property(readonly, nonatomic) long long validationMode;
@property(readonly, nonatomic) _Bool isValidationModeShortCircuitingPreflight;
@property(readonly, nonatomic) _Bool isValidationModeUsingPreflight;
@property(readonly, nonatomic) _Bool isValidationModeLegacy;
- (id)initWithServerBag:(id)arg1;	// IMP=0x00100000002c1b53
- (id)init;	// IMP=0x00100000002c1af7

@end
