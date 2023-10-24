//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMConcreteContainerIdentityForLibsystem
{
    _Bool _existed;	// 56 = 0x38
    NSString *_containerPathIdentifier;	// 64 = 0x40
}

+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(_Bool)arg7 transient:(_Bool)arg8 error:(unsigned long long *)arg9;	// IMP=0x00600000000129fe
- (void).cxx_destruct;	// IMP=0x0000000000012561
@property(readonly, nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012442
- (id)debugDescription;	// IMP=0x00000000000123b8
- (id)description;	// IMP=0x000000000001232e
- (id)identityByChangingContainerPathIdentifier:(id)arg1;	// IMP=0x00000000000121cb
- (id)identityByChangingTransient:(_Bool)arg1;	// IMP=0x0000000000012073
- (id)identityByChangingUUID:(id)arg1;	// IMP=0x0000000000011f14
- (id)nontransientConcreteContainerIdentityForLibsystem;	// IMP=0x0000000000011ed7
- (id)transientConcreteContainerIdentityForLibsystem;	// IMP=0x0000000000011e9a
- (id)nontransientContainerIdentity;	// IMP=0x0000000000011d1b
- (id)transientContainerIdentity;	// IMP=0x0000000000011b9c
- (struct container_object_s *)createLibsystemContainerWithError:(unsigned long long *)arg1;	// IMP=0x0000000000011af8
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 containerPathIdentifier:(id)arg6 existed:(_Bool)arg7 transient:(_Bool)arg8 error:(unsigned long long *)arg9;	// IMP=0x00000000000118fe
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x00000000000117a3
- (id)init;	// IMP=0x00000000000116bc

@end

