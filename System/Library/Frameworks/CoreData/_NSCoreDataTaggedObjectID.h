//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSCoreDataTaggedObjectID
{
}

+ (_Bool)_usesTaggedPointers;	// IMP=0x008000000008819d
+ (void)_storeDeallocated;	// IMP=0x0080000000088197
+ (void)_setStoreInfo1:(id)arg1;	// IMP=0x0080000000088191
+ (id)_storeInfo1;	// IMP=0x008000000008818b
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x0080000000088185
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;	// IMP=0x008000000008813a
+ (unsigned int)allocateBatch:(id *)arg1 count:(unsigned int)arg2;	// IMP=0x0080000000088134
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;	// IMP=0x0080000000087e1a
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000087b7e
+ (id)alloc;	// IMP=0x0080000000087b75
+ (void)initialize;	// IMP=0x00800000000877ec
- (id)_storeInfo1;	// IMP=0x0000000000088140
- (id)_retainedURIString;	// IMP=0x0000000000087d1e
- (_Bool)_isPersistentStoreAlive;	// IMP=0x0000000000087cef
- (id)_storeIdentifier;	// IMP=0x0000000000087ccb
- (long long)_referenceData64;	// IMP=0x0000000000087c89
- (_Bool)isTemporaryID;	// IMP=0x0000000000087c75
- (id)persistentStore;	// IMP=0x0000000000087c52
- (id)entityName;	// IMP=0x0000000000087c2e
- (id)entity;	// IMP=0x0000000000087c0a
- (unsigned long long)hash;	// IMP=0x0000000000087c01
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087bf5
- (id)copy;	// IMP=0x0000000000087bec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000087be3
- (void)dealloc;	// IMP=0x0000000000087bdd
- (unsigned long long)retainCount;	// IMP=0x0000000000087bd0
- (oneway void)release;	// IMP=0x0000000000087bca
- (id)retain;	// IMP=0x0000000000087bc1
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000087b8d
- (id)initWithPK64:(long long)arg1;	// IMP=0x0000000000087b87

@end

