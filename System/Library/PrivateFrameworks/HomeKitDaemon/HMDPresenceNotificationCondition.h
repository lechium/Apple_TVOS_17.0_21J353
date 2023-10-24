//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

__attribute__((visibility("hidden")))
@interface HMDPresenceNotificationCondition
{
    unsigned long long _presenceEventType;	// 8 = 0x8
    unsigned long long _presenceEventUserType;	// 16 = 0x10
    NSSet *_userUUIDs;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000086df61
+ (id)type;	// IMP=0x001000000086df54
- (void).cxx_destruct;	// IMP=0x000000000086dedf
@property(readonly, copy) NSSet *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(readonly) unsigned long long presenceEventUserType; // @synthesize presenceEventUserType=_presenceEventUserType;
@property(readonly) unsigned long long presenceEventType; // @synthesize presenceEventType=_presenceEventType;
- (id)attributeDescriptions;	// IMP=0x000000000086dd18
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000086dbc5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000086dacd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000086dac2
- (unsigned long long)hash;	// IMP=0x000000000086da86
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000086d954
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x000000000086d774
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000086d5bc
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceEventUserType:(unsigned long long)arg2 userUUIDs:(id)arg3;	// IMP=0x000000000086d528

@end
