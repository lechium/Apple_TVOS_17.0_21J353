//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSMPFullDeviceIdentityContainer, IDSMPFullLegacyIdentity, IDSNGMKeyRollingTicket, NSString;

@interface IDSRegistrationKeyConfig : NSObject
{
    IDSMPFullDeviceIdentityContainer *_registeredIdentityContainer;	// 8 = 0x8
    IDSMPFullDeviceIdentityContainer *_previousRegisteredIdentityContainer;	// 16 = 0x10
    IDSMPFullDeviceIdentityContainer *_unregisteredIdentityContainer;	// 24 = 0x18
    IDSNGMKeyRollingTicket *_unappliedRollingTicket;	// 32 = 0x20
    NSString *_buildOfIdentityGeneration;	// 40 = 0x28
    NSString *_buildOfUnregisteredIdentityGeneration;	// 48 = 0x30
    IDSMPFullLegacyIdentity *_identityClassA;	// 56 = 0x38
    IDSMPFullLegacyIdentity *_unSavedidentityClassA;	// 64 = 0x40
    IDSMPFullLegacyIdentity *_identityClassC;	// 72 = 0x48
    IDSMPFullLegacyIdentity *_unSavedidentityClassC;	// 80 = 0x50
    IDSMPFullLegacyIdentity *_identityClassD;	// 88 = 0x58
    IDSMPFullLegacyIdentity *_unSavedidentityClassD;	// 96 = 0x60
    struct __SecKey *_privateKey;	// 104 = 0x68
    struct __SecKey *_publicKey;	// 112 = 0x70
    NSString *_signature;	// 120 = 0x78
    _Bool _isMigratedSignature;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000002a071
@property(nonatomic) _Bool isMigratedSignature; // @synthesize isMigratedSignature=_isMigratedSignature;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *unSavedidentityClassD; // @synthesize unSavedidentityClassD=_unSavedidentityClassD;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *identityClassD; // @synthesize identityClassD=_identityClassD;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *unSavedidentityClassC; // @synthesize unSavedidentityClassC=_unSavedidentityClassC;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *identityClassC; // @synthesize identityClassC=_identityClassC;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *unSavedidentityClassA; // @synthesize unSavedidentityClassA=_unSavedidentityClassA;
@property(retain, nonatomic) IDSMPFullLegacyIdentity *identityClassA; // @synthesize identityClassA=_identityClassA;
@property(retain, nonatomic) NSString *buildOfUnregisteredIdentityGeneration; // @synthesize buildOfUnregisteredIdentityGeneration=_buildOfUnregisteredIdentityGeneration;
@property(retain, nonatomic) NSString *buildOfIdentityGeneration; // @synthesize buildOfIdentityGeneration=_buildOfIdentityGeneration;
@property(retain, nonatomic) IDSNGMKeyRollingTicket *unappliedRollingTicket; // @synthesize unappliedRollingTicket=_unappliedRollingTicket;
@property(retain, nonatomic) IDSMPFullDeviceIdentityContainer *unregisteredIdentityContainer; // @synthesize unregisteredIdentityContainer=_unregisteredIdentityContainer;
@property(retain, nonatomic) IDSMPFullDeviceIdentityContainer *previousRegisteredIdentityContainer; // @synthesize previousRegisteredIdentityContainer=_previousRegisteredIdentityContainer;
@property(retain, nonatomic) IDSMPFullDeviceIdentityContainer *registeredIdentityContainer; // @synthesize registeredIdentityContainer=_registeredIdentityContainer;
- (void)dealloc;	// IMP=0x0010000000029e0d

@end

