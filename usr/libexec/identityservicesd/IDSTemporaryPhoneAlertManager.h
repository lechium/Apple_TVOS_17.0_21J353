//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSTemporaryPhoneAlertManager : NSObject
{
}

+ (id)serviceString;	// IMP=0x00400000000db91f
+ (void)clearNonExpirationFollowUps;	// IMP=0x00100000000db919
+ (void)retractLockscreenAlerts;	// IMP=0x00100000000db913
+ (void)attemptPresentationOfExpirationAlertForUser:(id)arg1;	// IMP=0x00100000000db90d
+ (void)attemptPresentationOfNearExpirationAlertForUser:(id)arg1;	// IMP=0x00100000000db907
+ (void)presentSuccessAlertForUser:(id)arg1;	// IMP=0x00100000000db901

@end

