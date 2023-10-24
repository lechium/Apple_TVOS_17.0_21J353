//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDPCSSQLCacheTable : CKSQLiteCacheTable
{
}

+ (double)cacheValidTime;	// IMP=0x0080000000310d2d
+ (Class)entryClass;	// IMP=0x0080000000310d1c
+ (id)dbProperties;	// IMP=0x0080000000310d0f
- (id)PCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 accountID:(id)arg4 serviceName:(id)arg5;	// IMP=0x0000000000311305
- (id)deletePCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 accountID:(id)arg4 serviceName:(id)arg5;	// IMP=0x00000000003110e0
- (id)deletePCSDataForShare:(id)arg1 account:(id)arg2 serviceName:(id)arg3;	// IMP=0x0000000000310f62
- (id)deletePCSDataForZone:(id)arg1 account:(id)arg2 serviceName:(id)arg3;	// IMP=0x0000000000310de4
- (id)init;	// IMP=0x0000000000310d84

@end
