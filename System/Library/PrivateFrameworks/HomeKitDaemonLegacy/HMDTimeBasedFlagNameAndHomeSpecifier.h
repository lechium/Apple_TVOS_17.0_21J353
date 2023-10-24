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

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004a8fb5
+ (id)specifierWithFlagName:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00100000004a8f43
- (void).cxx_destruct;	// IMP=0x00000000004a8f1b
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) NSString *flagName; // @synthesize flagName=_flagName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004a8c95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004a8c8a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004a8bdc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004a8b02
- (id)initWithFlagName:(id)arg1 homeUUID:(id)arg2;	// IMP=0x00000000004a8a69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
