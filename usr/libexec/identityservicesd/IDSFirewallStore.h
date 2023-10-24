//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSFirewallStore : NSObject
{
    unsigned long long _initialProcessTime;	// 8 = 0x8
    unsigned long long _initialServerTime;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_ivarQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_databaseCloseTimer;	// 32 = 0x20
    double _databaseLastUpdateTime;	// 40 = 0x28
    NSMutableDictionary *_recentlyBlockedHandles;	// 48 = 0x30
    NSString *_filePath;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00400000004226b1
- (void).cxx_destruct;	// IMP=0x002000000042512c
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSMutableDictionary *recentlyBlockedHandles; // @synthesize recentlyBlockedHandles=_recentlyBlockedHandles;
@property(nonatomic) double databaseLastUpdateTime; // @synthesize databaseLastUpdateTime=_databaseLastUpdateTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *databaseCloseTimer; // @synthesize databaseCloseTimer=_databaseCloseTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(nonatomic) unsigned long long initialServerTime; // @synthesize initialServerTime=_initialServerTime;
- (void);	// IMP=0x001000000042508c
@property(nonatomic) unsigned long long initialProcessTime; // @synthesize initialProcessTime=_initialProcessTime;
- (void)_runCleanupWithExpirationInterval:(double)arg1;	// IMP=0x0010000000424d43
- (void)_startCleanupTimer;	// IMP=0x0010000000424baf
- (void)closeDatabase;	// IMP=0x0010000000424a77
- (void)_setDatabaseCloseTimerOnIvarQueue;	// IMP=0x001000000042491c
- (void)_registerSysdiagnoseBlock;	// IMP=0x0010000000424506
- (void)_performInitialHousekeeping;	// IMP=0x00100000004242b7
- (unsigned long long)_currentLocalTime;	// IMP=0x00100000004241d1
- (void)runCleanupWithExpirationInterval:(double)arg1;	// IMP=0x00100000004241bf
- (void)addToBlockedList:(id)arg1 forCategory:(unsigned int)arg2;	// IMP=0x00100000004240d0
- (id)_createFirewallRecordsFromSQLRecords:(struct __CFArray *)arg1;	// IMP=0x0010000000423e49
- (id)blockedEntriesForCategory:(unsigned int)arg1;	// IMP=0x0010000000423dc6
- (id)getDonatedAllowedEntriesForCategory:(unsigned int)arg1;	// IMP=0x0010000000423ca4
- (id)getAllAllowedEntriesForCategory:(unsigned int)arg1;	// IMP=0x0010000000423b5d
- (_Bool)isAllowed:(id)arg1 category:(unsigned int)arg2;	// IMP=0x001000000042392f
- (_Bool)isAllowed:(id)arg1 category:(unsigned int)arg2 isDonated:(_Bool)arg3;	// IMP=0x00100000004237d5
- (_Bool)removeEntriesWithCategory:(unsigned int)arg1 isDonated:(_Bool)arg2;	// IMP=0x0010000000423772
- (_Bool)removeAllEntriesWithCategory:(unsigned int)arg1;	// IMP=0x0010000000423719
- (_Bool)removeAllEntries:(id)arg1 forImpactedServices:(id)arg2 category:(unsigned int)arg3;	// IMP=0x0010000000423322
- (_Bool)removeEntries:(id)arg1 forImpactedServices:(id)arg2 category:(unsigned int)arg3 isDonated:(_Bool)arg4;	// IMP=0x0010000000422f13
- (_Bool)addEntries:(id)arg1 forImpactedServices:(id)arg2 category:(unsigned int)arg3 isDonated:(_Bool)arg4;	// IMP=0x001000000042292c
- (id)initWithFilePath:(id)arg1;	// IMP=0x001000000042271a
- (id)init;	// IMP=0x0010000000422706

@end
