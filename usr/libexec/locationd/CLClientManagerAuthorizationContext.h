//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLClientManagerAuthorizationContext : NSObject
{
    _Bool _authorizedForWidgetUpdates;	// 8 = 0x8
    int _transientAwareRegistrationResult;	// 12 = 0xc
    int _registrationResult;	// 16 = 0x10
    int _inUseLevel;	// 20 = 0x14
    unsigned long long _staticServiceMask;	// 24 = 0x18
    unsigned long long _effectiveServiceMask;	// 32 = 0x20
    unsigned long long _provisionalServiceMask;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long provisionalServiceMask; // @synthesize provisionalServiceMask=_provisionalServiceMask;
@property(readonly, nonatomic) unsigned long long effectiveServiceMask; // @synthesize effectiveServiceMask=_effectiveServiceMask;
@property(readonly, nonatomic) unsigned long long staticServiceMask; // @synthesize staticServiceMask=_staticServiceMask;
@property(readonly, nonatomic) int inUseLevel; // @synthesize inUseLevel=_inUseLevel;
@property(readonly, nonatomic) _Bool authorizedForWidgetUpdates; // @synthesize authorizedForWidgetUpdates=_authorizedForWidgetUpdates;
@property(readonly, nonatomic) int registrationResult; // @synthesize registrationResult=_registrationResult;
@property(readonly, nonatomic) int transientAwareRegistrationResult; // @synthesize transientAwareRegistrationResult=_transientAwareRegistrationResult;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000a135af
- (_Bool)inUseLevelIsAtLeast:(int)arg1;	// IMP=0x0010000000a135a3
- (_Bool)isAuthorizedForServiceType:(unsigned long long)arg1;	// IMP=0x0010000000a13584
- (_Bool)isAuthorizedForServiceTypeMask:(unsigned long long)arg1;	// IMP=0x0010000000a1353d
- (_Bool)isNonProvisionallyAuthorizedForServiceType:(unsigned long long)arg1;	// IMP=0x0010000000a1351e
- (_Bool)isNonProvisionallyAuthorizedForServiceTypeMask:(unsigned long long)arg1;	// IMP=0x0010000000a134f8
- (id)description;	// IMP=0x0010000000a134b7
- (id)authorizationContextByANDingServiceMaskTuple:(struct CLClientServiceTypeMaskTuple)arg1;	// IMP=0x0010000000a1342e
- (id)initWithInUseLevel:(int)arg1 registrationResult:(int)arg2 transientAwareRegistrationResult:(int)arg3 serviceMaskTuple:(struct CLClientServiceTypeMaskTuple)arg4 authorizedForWidgetUpdates:(_Bool)arg5;	// IMP=0x0010000000a133c6

@end

