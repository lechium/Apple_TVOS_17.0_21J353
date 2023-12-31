//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSAESSIVKey, CKKSWrappedAESSIVKey, CKRecordZoneID, NSString;
@protocol SecCKKSKeyClass;

@interface CKKSKeychainBackedKey : NSObject
{
    NSString *_uuid;	// 8 = 0x8
    NSString *_parentKeyUUID;	// 16 = 0x10
    NSString<SecCKKSKeyClass> *_keyclass;	// 24 = 0x18
    CKRecordZoneID *_zoneID;	// 32 = 0x20
    CKKSWrappedAESSIVKey *_wrappedkey;	// 40 = 0x28
    CKKSAESSIVKey *_aessivkey;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001bc59e
+ (id)loadFromProtobuf:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc2a5
+ (id)fetchKeyMaterialItemFromKeychain:(id)arg1 resave:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00100000001bb2c8
+ (id)queryKeyMaterialInKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bb173
+ (id)setKeyMaterialInKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bad75
+ (id)key:(id)arg1 wrappedByKey:(id)arg2 uuid:(id)arg3 parentKeyUUID:(id)arg4 keyclass:(id)arg5 zoneID:(id)arg6 error:(id *)arg7;	// IMP=0x00100000001bab9c
+ (id)keyWrappedBySelf:(id)arg1 uuid:(id)arg2 keyclass:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001bab6c
+ (id)randomKeyWrappedBySelf:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001baa6f
+ (id)randomKeyWrappedByParent:(id)arg1 keyclass:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001ba8c2
+ (id)randomKeyWrappedByParent:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ba836
- (void).cxx_destruct;	// IMP=0x00200000001ba7e2
@property(retain) CKKSAESSIVKey *aessivkey; // @synthesize aessivkey=_aessivkey;
@property(retain) CKKSWrappedAESSIVKey *wrappedkey; // @synthesize wrappedkey=_wrappedkey;
@property(retain) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
@property(retain) NSString *parentKeyUUID; // @synthesize parentKeyUUID=_parentKeyUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001ba59c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001ba450
- (id)serializeAsProtobuf:(id *)arg1;	// IMP=0x00100000001ba28a
- (id)description;	// IMP=0x00100000001ba180
- (_Bool)deleteKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000001b9e1f
- (_Bool)loadKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x00100000001b9a4b
- (_Bool)saveKeyMaterialToKeychain:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000001b9142
- (_Bool)saveKeyMaterialToKeychain:(id *)arg1;	// IMP=0x00100000001b9128
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b9086
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b8fe4
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b8f58
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b8ecc
- (_Bool)trySelfWrappedKeyCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b8cf5
- (id)ensureKeyLoadedFromKeychain:(id *)arg1;	// IMP=0x00100000001b8c7c
- (_Bool)unwrapSelfWithAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b8be7
- (_Bool)wrapUnder:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b8a3e
- (_Bool)wrapsSelf;	// IMP=0x00100000001b89ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001b874c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001b85fe
- (id)initWithAESKey:(id)arg1 wrappedAESKey:(id)arg2 uuid:(id)arg3 parentKeyUUID:(id)arg4 keyclass:(id)arg5 zoneID:(id)arg6;	// IMP=0x00100000001b84df
- (id)initWithWrappedAESKey:(id)arg1 uuid:(id)arg2 parentKeyUUID:(id)arg3 keyclass:(id)arg4 zoneID:(id)arg5;	// IMP=0x00100000001b84b6

@end

