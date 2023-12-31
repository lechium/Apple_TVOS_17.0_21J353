//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface MCMConcreteContainerIdentity
{
    NSUUID *_uuid;	// 48 = 0x30
}

+ (id)concreteContainerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x006000000001161c
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 error:(unsigned long long *)arg6;	// IMP=0x0060000000011546
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x0060000000011465
- (void).cxx_destruct;	// IMP=0x000000000001103d
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010f67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010eb5
- (_Bool)isEqualToConcreteContainerIdentity:(id)arg1;	// IMP=0x0000000000010e1a
- (unsigned long long)hash;	// IMP=0x0000000000010da1
- (id)debugDescription;	// IMP=0x0000000000010d17
- (id)description;	// IMP=0x0000000000010c8d
- (id)containerIdentity;	// IMP=0x0000000000010b95
- (struct container_object_s *)createLibsystemContainerWithContainerPathIdentifier:(id)arg1 existed:(_Bool)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000001096c
- (id)plist;	// IMP=0x000000000001086b
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000107a3
- (id)initWithVersion1PlistDictionary:(id)arg1 containerIdentity:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000001054d
- (id)initWithContainerIdentity:(id)arg1 UUID:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000001041a
- (id)initWithPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000102d7
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x00000000000100f4
- (id)init;	// IMP=0x000000000001000d

@end

