//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@interface IDSPairedDevice : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
    NSNumber *_pairingProtocolVersion;	// 16 = 0x10
    NSNumber *_minCompatibilityVersion;	// 24 = 0x18
    NSNumber *_maxCompatibilityVersion;	// 32 = 0x20
    NSNumber *_serviceMinCompatibilityVersion;	// 40 = 0x28
}

+ (id)localIdentitiesFromIdentities:(id)arg1;	// IMP=0x004000000020e43d
+ (id)iCloudIdentitiesFromIdentities:(id)arg1;	// IMP=0x001000000020e228
- (void).cxx_destruct;	// IMP=0x002000000020edc2
- (id)description;	// IMP=0x001000000020ec91
@property(readonly, nonatomic) _Bool isPairing;
@property(readonly, nonatomic) _Bool hasAllPublicKeys;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) unsigned int serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned int maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned int minCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairingProtocolVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSDictionary *privateData;
@property(readonly, nonatomic) NSArray *iCloudURIs;
@property(readonly, nonatomic) NSArray *localIdentities;
@property(readonly, nonatomic) NSArray *iCloudIdentities;
- (id)identities;	// IMP=0x001000000020e208
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSData *publicClassDKey;
@property(readonly, nonatomic) NSData *publicClassCKey;
@property(readonly, nonatomic) NSData *publicClassAKey;
@property(readonly, nonatomic) long long pairingType;
@property(readonly, nonatomic) _Bool supportIPsec;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSUUID *cbuuidUUID;
@property(readonly, nonatomic) NSString *cbuuid;
- (id)persistedProperties;	// IMP=0x001000000020dfcb
- (MISSING_TYPE *)initWithProperties: /* Error: Ran out of types for this method. */;	// IMP=0x001000000020dfa0
- (id)pairedDeviceWithoutSecuredEncryptionKeys;	// IMP=0x001000000020dea1
- (id)initWithPairedDevice:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x001000000020dadf
- (id)initWithPairedDevice:(id)arg1 pairingType:(long long)arg2;	// IMP=0x001000000020d9af
- (id)initWithPairedDevice:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x001000000020d87e
- (id)initWithPairedDevice:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x001000000020d74d
- (id)initWithPairedDevice:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x001000000020d105
- (id)initWithPairedDevice:(id)arg1 capabilityFlags:(unsigned long long)arg2;	// IMP=0x001000000020d05b
- (id)initWithPairedDevice:(id)arg1 deviceUniqueID:(id)arg2 pairingProtocolVersion:(unsigned int)arg3 minCompatibilityVersion:(unsigned int)arg4 maxCompatibilityVersion:(unsigned int)arg5 serviceMinCompatibilityVersion:(unsigned short)arg6 privateData:(id)arg7;	// IMP=0x001000000020ce48
- (id)initWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x001000000020cb80
- (id)initWithProperties:(id)arg1 pairingProtocolVersion:(id)arg2 minCompatibilityVersion:(id)arg3 maxCompatibilityVersion:(id)arg4 serviceMinCompatibilityVersion:(id)arg5;	// IMP=0x001000000020c931

@end

