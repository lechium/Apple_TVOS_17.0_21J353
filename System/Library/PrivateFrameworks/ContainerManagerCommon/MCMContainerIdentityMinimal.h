//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentity, NSString;

__attribute__((visibility("hidden")))
@interface MCMContainerIdentityMinimal : NSObject
{
    unsigned int _platform;	// 8 = 0x8
    unsigned int _disposition;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _containerClass;	// 24 = 0x18
    MCMUserIdentity *_userIdentity;	// 32 = 0x20
}

+ (id)minimalContainerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x001000000000eac0
- (void).cxx_destruct;	// IMP=0x000000000000e6e2
@property(readonly, nonatomic) unsigned int disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e52f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e4a4
- (_Bool)isEqualToContainerIdentity:(id)arg1;	// IMP=0x000000000000e40f
- (unsigned long long)hash;	// IMP=0x000000000000e3a1
- (id)debugDescription;	// IMP=0x000000000000e317
- (id)description;	// IMP=0x000000000000e28d
- (id)identityByChangingUserIdentity:(id)arg1;	// IMP=0x000000000000e21f
- (id)identityBySettingPlatform:(unsigned int)arg1;	// IMP=0x000000000000e1d6
- (id)minimalIdentity;	// IMP=0x000000000000e027
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000db06
- (id)initWithPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000000d9d7
- (id)plist;	// IMP=0x000000000000d879
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000000000d3b7
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 error:(unsigned long long *)arg5;	// IMP=0x000000000000cea0
- (id)init;	// IMP=0x000000000000cdee

@end
