//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventBulletinNotificationRegistration
{
    NSUUID *_cameraIdentifier;	// 8 = 0x8
    unsigned long long _notificationModes;	// 16 = 0x10
    unsigned long long _significantEventTypes;	// 24 = 0x18
    unsigned long long _personFamiliarityOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000ae9f62
+ (id)type;	// IMP=0x0010000000ae9f55
- (void).cxx_destruct;	// IMP=0x0000000000ae9ebb
@property(readonly) unsigned long long personFamiliarityOptions; // @synthesize personFamiliarityOptions=_personFamiliarityOptions;
@property(readonly) unsigned long long significantEventTypes; // @synthesize significantEventTypes=_significantEventTypes;
@property(readonly) unsigned long long notificationModes; // @synthesize notificationModes=_notificationModes;
@property(readonly, copy) NSUUID *cameraIdentifier; // @synthesize cameraIdentifier=_cameraIdentifier;
- (id)attributeDescriptions;	// IMP=0x0000000000ae9c14
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ae99db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ae98d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ae98ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae9734
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x0000000000ae9580
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ae936b
- (id)predicate;	// IMP=0x0000000000ae9194
- (id)initWithCameraIdentifier:(id)arg1 notificationModes:(unsigned long long)arg2 significantEventTypes:(unsigned long long)arg3 personFamiliarityOptions:(unsigned long long)arg4 conditions:(id)arg5;	// IMP=0x0000000000ae90a7

@end

