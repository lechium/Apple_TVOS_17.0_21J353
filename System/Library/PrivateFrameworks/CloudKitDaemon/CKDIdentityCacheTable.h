//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDIdentityCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x0080000000083903
+ (id)dbProperties;	// IMP=0x00800000000838f6
- (id)cachedIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000083cf2
- (id)insertUserIdentity:(id)arg1 forLookupInfo:(id)arg2 container:(id)arg3;	// IMP=0x0000000000083b2c
- (void)deleteUserIdentityForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000083a8c
- (id)predicateForMatchingLookupInfoInContainer;	// IMP=0x0000000000083a6a
- (id)valuesDictionaryForLookupInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000083914

@end

