//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHouseholdDataEventCounterGroupSpecifier
{
    NSUUID *_homeUUID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000009b4d9f
+ (id)specifierWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;	// IMP=0x00600000009b4d0f
- (void).cxx_destruct;	// IMP=0x00000000009b4cfc
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)description;	// IMP=0x00000000009b4c2e
- (unsigned long long)hash;	// IMP=0x00000000009b4b78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009b49b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009b491a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009b487f
- (id)initWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;	// IMP=0x00000000009b47fd

@end

