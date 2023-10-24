//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBulletinNotificationRegistration
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
    NSNumber *_serviceInstanceID;	// 16 = 0x10
    NSNumber *_characteristicInstanceID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000124ae
+ (id)type;	// IMP=0x00100000000124a1
- (void).cxx_destruct;	// IMP=0x000000000001245f
@property(readonly, copy) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, copy) NSNumber *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000012248
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011e9f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011d96
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011d8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011ba7
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x0000000000011a67
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000118b9
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 conditions:(id)arg4;	// IMP=0x000000000001175f

@end
