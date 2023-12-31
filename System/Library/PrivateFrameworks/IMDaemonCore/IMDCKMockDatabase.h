//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabase.h>

@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase
{
    NSDictionary *_identifierToZoneMap;	// 8 = 0x8
}

@property(readonly, nonatomic) NSDictionary *identifierToZoneMap; // @synthesize identifierToZoneMap=_identifierToZoneMap;
- (void)addOperation:(id)arg1;	// IMP=0x000000000005ff69
- (id)_zoneIdentifierForOperation:(id)arg1;	// IMP=0x000000000005fae7
- (id)_zoneManager;	// IMP=0x000000000005face
- (void)dealloc;	// IMP=0x000000000005fa8c
- (id)init;	// IMP=0x000000000005f9d2
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;	// IMP=0x000000000005f834

@end

