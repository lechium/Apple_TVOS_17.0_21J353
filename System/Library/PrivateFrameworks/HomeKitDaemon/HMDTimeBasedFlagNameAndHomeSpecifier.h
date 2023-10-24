//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagNameAndHomeSpecifier : NSObject
{
    NSString *_flagName;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b4e84
+ (id)specifierWithFlagName:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00100000000b4e12
- (void).cxx_destruct;	// IMP=0x00000000000b4dea
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) NSString *flagName; // @synthesize flagName=_flagName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b4b64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b4b59
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b4aab
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b49d1
- (id)initWithFlagName:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000000b4938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
