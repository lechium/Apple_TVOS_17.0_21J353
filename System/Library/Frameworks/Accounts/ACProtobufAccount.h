//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufAccountCredential, ACProtobufAccountType, ACProtobufDate, ACProtobufURL, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufAccount : PBCodable
{
    NSString *_accountDescription;	// 8 = 0x8
    ACProtobufAccountType *_accountType;	// 16 = 0x10
    NSString *_authenticationType;	// 24 = 0x18
    ACProtobufAccountCredential *_credential;	// 32 = 0x20
    NSString *_credentialType;	// 40 = 0x28
    NSMutableArray *_dataclassProperties;	// 48 = 0x30
    ACProtobufDate *_date;	// 56 = 0x38
    NSMutableArray *_dirtyAccountProperties;	// 64 = 0x40
    NSMutableArray *_dirtyDataclassProperties;	// 72 = 0x48
    NSMutableArray *_dirtyProperties;	// 80 = 0x50
    NSMutableArray *_enabledDataclasses;	// 88 = 0x58
    NSString *_identifier;	// 96 = 0x60
    ACProtobufDate *_lastCredentialRenewalRejectionDate;	// 104 = 0x68
    NSString *_modificationID;	// 112 = 0x70
    ACProtobufURL *_objectID;	// 120 = 0x78
    NSString *_owningBundleID;	// 128 = 0x80
    ACProtobufAccount *_parentAccount;	// 136 = 0x88
    NSMutableArray *_properties;	// 144 = 0x90
    NSMutableArray *_provisionedDataclasses;	// 152 = 0x98
    NSString *_username;	// 160 = 0xa0
    _Bool _active;	// 168 = 0xa8
    _Bool _authenticated;	// 169 = 0xa9
    _Bool _supportsAuthentication;	// 170 = 0xaa
    _Bool _visible;	// 171 = 0xab
    _Bool _warmingUp;	// 172 = 0xac
    struct {
        unsigned int warmingUp:1;
    } _has;	// 176 = 0xb0
}

+ (Class)dirtyDataclassPropertiesType;	// IMP=0x001000000004a61f
+ (Class)dirtyAccountPropertiesType;	// IMP=0x001000000004a54d
+ (Class)dirtyPropertiesType;	// IMP=0x001000000004a47b
+ (Class)provisionedDataclassesType;	// IMP=0x001000000004a355
+ (Class)enabledDataclassesType;	// IMP=0x001000000004a283
+ (Class)dataclassPropertiesType;	// IMP=0x001000000004a187
+ (Class)propertiesType;	// IMP=0x001000000004a0a0
- (void).cxx_destruct;	// IMP=0x000000000004e691
@property(retain, nonatomic) NSString *modificationID; // @synthesize modificationID=_modificationID;
@property(nonatomic) _Bool warmingUp; // @synthesize warmingUp=_warmingUp;
@property(retain, nonatomic) NSMutableArray *dirtyDataclassProperties; // @synthesize dirtyDataclassProperties=_dirtyDataclassProperties;
@property(retain, nonatomic) NSMutableArray *dirtyAccountProperties; // @synthesize dirtyAccountProperties=_dirtyAccountProperties;
@property(retain, nonatomic) NSMutableArray *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property(retain, nonatomic) NSString *owningBundleID; // @synthesize owningBundleID=_owningBundleID;
@property(retain, nonatomic) ACProtobufDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSString *authenticationType; // @synthesize authenticationType=_authenticationType;
@property(retain, nonatomic) NSMutableArray *provisionedDataclasses; // @synthesize provisionedDataclasses=_provisionedDataclasses;
@property(retain, nonatomic) NSMutableArray *enabledDataclasses; // @synthesize enabledDataclasses=_enabledDataclasses;
@property(retain, nonatomic) ACProtobufAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
@property(retain, nonatomic) ACProtobufURL *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSMutableArray *dataclassProperties; // @synthesize dataclassProperties=_dataclassProperties;
@property(nonatomic) _Bool supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) ACProtobufDate *lastCredentialRenewalRejectionDate; // @synthesize lastCredentialRenewalRejectionDate=_lastCredentialRenewalRejectionDate;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) ACProtobufAccountCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) ACProtobufAccountType *accountType; // @synthesize accountType=_accountType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004d9a5
- (unsigned long long)hash;	// IMP=0x000000000004d6c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d236
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c6a9
- (void)copyTo:(id)arg1;	// IMP=0x000000000004c089
- (void)writeTo:(id)arg1;	// IMP=0x000000000004b831
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004b824
- (id)dictionaryRepresentation;	// IMP=0x000000000004a739
- (id)description;	// IMP=0x000000000004a68a
@property(readonly, nonatomic) _Bool hasModificationID;
@property(nonatomic) _Bool hasWarmingUp;
- (id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a602
- (unsigned long long)dirtyDataclassPropertiesCount;	// IMP=0x000000000004a5e5
- (void)addDirtyDataclassProperties:(id)arg1;	// IMP=0x000000000004a57b
- (void)clearDirtyDataclassProperties;	// IMP=0x000000000004a55e
- (id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a530
- (unsigned long long)dirtyAccountPropertiesCount;	// IMP=0x000000000004a513
- (void)addDirtyAccountProperties:(id)arg1;	// IMP=0x000000000004a4a9
- (void)clearDirtyAccountProperties;	// IMP=0x000000000004a48c
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a45e
- (unsigned long long)dirtyPropertiesCount;	// IMP=0x000000000004a441
- (void)addDirtyProperties:(id)arg1;	// IMP=0x000000000004a3d7
- (void)clearDirtyProperties;	// IMP=0x000000000004a3ba
@property(readonly, nonatomic) _Bool hasOwningBundleID;
@property(readonly, nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasCredentialType;
@property(readonly, nonatomic) _Bool hasAuthenticationType;
- (id)provisionedDataclassesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a338
- (unsigned long long)provisionedDataclassesCount;	// IMP=0x000000000004a31b
- (void)addProvisionedDataclasses:(id)arg1;	// IMP=0x000000000004a2b1
- (void)clearProvisionedDataclasses;	// IMP=0x000000000004a294
- (id)enabledDataclassesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a266
- (unsigned long long)enabledDataclassesCount;	// IMP=0x000000000004a249
- (void)addEnabledDataclasses:(id)arg1;	// IMP=0x000000000004a1df
- (void)clearEnabledDataclasses;	// IMP=0x000000000004a1c2
@property(readonly, nonatomic) _Bool hasParentAccount;
@property(readonly, nonatomic) _Bool hasObjectID;
- (id)dataclassPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a16a
- (unsigned long long)dataclassPropertiesCount;	// IMP=0x000000000004a14d
- (void)addDataclassProperties:(id)arg1;	// IMP=0x000000000004a0e3
- (void)clearDataclassProperties;	// IMP=0x000000000004a0c6
@property(readonly, nonatomic) _Bool hasLastCredentialRenewalRejectionDate;
- (id)propertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004a083
- (unsigned long long)propertiesCount;	// IMP=0x000000000004a066
- (void)addProperties:(id)arg1;	// IMP=0x0000000000049ffc
- (void)clearProperties;	// IMP=0x0000000000049fdf
@property(readonly, nonatomic) _Bool hasUsername;
@property(readonly, nonatomic) _Bool hasAccountDescription;
@property(readonly, nonatomic) _Bool hasCredential;
@property(copy, nonatomic) NSDictionary *dataclassPropertiesDictionary;
@property(copy, nonatomic) NSDictionary *propertiesDictionary;

@end

