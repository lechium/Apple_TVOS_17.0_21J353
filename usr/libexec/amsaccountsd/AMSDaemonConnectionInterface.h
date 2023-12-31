//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMSDaemonConnectionInterface : NSObject
{
}

+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)arg1;	// IMP=0x0040000000005df7
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)arg1;	// IMP=0x0010000000005cfa
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)arg1;	// IMP=0x0010000000005c75
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)arg1;	// IMP=0x0010000000005b76
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)arg1;	// IMP=0x00100000000059f1
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)arg1;	// IMP=0x001000000000579d
+ (id)_securityServiceInterface;	// IMP=0x00100000000055de
+ (id)_securityClientInterface;	// IMP=0x0010000000005585
+ (id)_purchaseServiceInterface;	// IMP=0x00000000000051d2
+ (void)_configureURLPresentationDelegateClasses:(id)arg1;	// IMP=0x00100000000050b3
+ (id)_keychainServiceInterface;	// IMP=0x0010000000004ef9
+ (id)_fraudReportServiceInterface;	// IMP=0x0010000000004e5b
+ (id)_dismissQRDialogServiceInterface;	// IMP=0x0010000000004dc4
+ (id)_deviceMessengerServiceInterface;	// IMP=0x0010000000004c33
+ (id)_deviceMessengerClientInterface;	// IMP=0x0010000000004b77
+ (id)_cookieServiceInterface;	// IMP=0x001000000000470d
+ (id)_accountSignOutInterface;	// IMP=0x00100000000046a7
+ (id)_accountCachedServerDataInterface;	// IMP=0x001000000000446d
+ (id)interface;	// IMP=0x0010000000004122

@end

