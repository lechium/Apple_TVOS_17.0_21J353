//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents, NSString;

__attribute__((visibility("hidden")))
@interface HMDSunriseSunsetTimePeriodElement
{
    NSString *_significantEvent;	// 8 = 0x8
    NSDateComponents *_offset;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000764030
+ (id)type;	// IMP=0x0010000000764023
- (void).cxx_destruct;	// IMP=0x0000000000763ff2
@property(readonly, copy) NSDateComponents *offset; // @synthesize offset=_offset;
@property(readonly, copy) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)attributeDescriptions;	// IMP=0x0000000000763ea8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000763de6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000763d38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000763d2d
- (unsigned long long)hash;	// IMP=0x0000000000763ce9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000763b9e
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x0000000000763aa4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000763925
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;	// IMP=0x0000000000763883

@end
