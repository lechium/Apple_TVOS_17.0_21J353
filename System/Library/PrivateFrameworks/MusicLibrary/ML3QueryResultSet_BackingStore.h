//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_1ee95920 _persistentIDs;	// 8 = 0x8
    struct vector<unsigned char, std::allocator<unsigned char>> _sections;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000013eeb0
- (void).cxx_destruct;	// IMP=0x000000000013ee76
- (id)backingStoreByRemovingPersistentIDs:(const void *)arg1;	// IMP=0x000000000013ebe9
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013ea42
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013e895
- (_Bool)containsPersistentIDs:(const void *)arg1;	// IMP=0x000000000013e840
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013e7c5
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013e73b
- (long long)persistentIDAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013e6e3
@property(readonly, nonatomic) unsigned long long count;

@end
