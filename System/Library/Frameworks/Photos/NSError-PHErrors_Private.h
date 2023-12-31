//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (PHErrors_Private)
+ (id)ph_genericEntitlementError;	// IMP=0x00800000001f0065
+ (id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000001eff53
+ (id)ph_genericErrorWithLocalizedDescription:(id)arg1;	// IMP=0x00800000001efe72
+ (id)ph_errorWithCode:(long long)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000001efd3b
+ (id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000001efc68
+ (id)ph_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;	// IMP=0x00800000001ef8d0
@end

