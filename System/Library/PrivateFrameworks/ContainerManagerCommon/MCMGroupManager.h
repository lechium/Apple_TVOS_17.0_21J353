//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache;

__attribute__((visibility("hidden")))
@interface MCMGroupManager : NSObject
{
    MCMUserIdentityCache *_userIdentityCache;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x006000000007f82c
- (void).cxx_destruct;	// IMP=0x000000000007f740
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (id)groupContainerIdentifiersForOwnerIdentifier:(id)arg1 groupContainerClass:(unsigned long long)arg2 codeSignInfo:(id)arg3 withError:(id *)arg4;	// IMP=0x000000000007f2f0
- (void)_cleanupUnreferencedGroupContainersForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 referenceCounts:(id)arg3 context:(id)arg4;	// IMP=0x000000000007eabb
- (void)reconcileGroupContainersForContainerClass:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x000000000007e859
- (id)initWithUserIdentityCache:(id)arg1;	// IMP=0x000000000007e7ce

@end

