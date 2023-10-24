//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKDPCSCache;
@protocol CKSQLiteItem;

@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo
{
    id <CKSQLiteItem> _itemID;	// 8 = 0x8
    CKDPCSCache *_cache;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002bd8d0
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) CKDPCSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <CKSQLiteItem> itemID; // @synthesize itemID=_itemID;

@end

