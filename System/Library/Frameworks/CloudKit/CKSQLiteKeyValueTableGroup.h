//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKSQLiteSharedTableGroup.h"

@class CKSQLiteKeyValueStore;

@interface CKSQLiteKeyValueTableGroup : CKSQLiteSharedTableGroup
{
    CKSQLiteKeyValueStore *_store;	// 8 = 0x8
}

+ (id)keyValueStoreInDatabase:(id)arg1;	// IMP=0x00600000000bde5a
- (void).cxx_destruct;	// IMP=0x00000000000bdfce
- (id)createTables:(id *)arg1;	// IMP=0x00000000000bdf24

@end
