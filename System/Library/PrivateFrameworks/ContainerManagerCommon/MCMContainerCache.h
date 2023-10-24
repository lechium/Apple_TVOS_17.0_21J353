//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache, NSMutableDictionary, NSString;
@protocol MCMChildParentMapCache, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMContainerCache : NSObject
{
    NSMutableDictionary *_queue_cache;	// 8 = 0x8
    MCMUserIdentityCache *_userIdentityCache;	// 16 = 0x10
    id <MCMChildParentMapCache> _childParentMapCache;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    Class _cacheEntryClass;	// 40 = 0x28
    Class _classCacheClass;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000afead
@property(readonly, nonatomic) Class classCacheClass; // @synthesize classCacheClass=_classCacheClass;
@property(readonly, nonatomic) Class cacheEntryClass; // @synthesize cacheEntryClass=_cacheEntryClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <MCMChildParentMapCache> childParentMapCache; // @synthesize childParentMapCache=_childParentMapCache;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (void)_queue_setContainerClassCache:(id)arg1;	// IMP=0x00000000000afd0a
- (id)_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x00000000000afc2e
- (id)_queue_containerClassCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x00000000000afb70
- (id)_queue_containerClassCacheForContainerClassPath:(id)arg1;	// IMP=0x00000000000af98c
- (void)_queue_flushCacheForContainerClassPath:(id)arg1;	// IMP=0x00000000000af8c2
- (void)_queue_invalidateUserIdentity:(id)arg1;	// IMP=0x00000000000af796
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;	// IMP=0x00000000000af765
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x00000000000af725
- (void)invalidateUserIdentity:(id)arg1;	// IMP=0x00000000000af672
- (void)flushCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x00000000000af5a2
- (_Bool)removeContainerForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000af314
- (id)addContainerMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aef72
- (id)entriesForUserIdentities:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000ae88b
- (long long)countContainersForOtherUserIdentitiesWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ae6b6
- (id)entryForContainerIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ae5a3
- (id)entryForContainerIdentity:(id)arg1 classCache:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ae1b5
- (id)classCacheForContainerIdentity:(id)arg1;	// IMP=0x00000000000ae029
- (void)setContainerClassCache:(id)arg1;	// IMP=0x00000000000adf76
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 error:(id *)arg5;	// IMP=0x00000000000adeaa
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 queue:(id)arg5;	// IMP=0x00000000000add7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
