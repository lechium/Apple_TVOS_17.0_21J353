//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SUCoreLog, SUCorePersistedState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAutoAssetPersisted : NSObject
{
    SUCorePersistedState *_persistedConfig;	// 8 = 0x8
    SUCoreLog *_logger;	// 16 = 0x10
    NSString *_logLeader;	// 24 = 0x18
    NSString *_moduleName;	// 32 = 0x20
    NSString *_moduleCurrentVersion;	// 40 = 0x28
    NSString *_latestSafeSummary;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_persistedQueue;	// 56 = 0x38
    SUCorePersistedState *_entryTableOfContents;	// 64 = 0x40
    NSMutableArray *_currentEntryIDs;	// 72 = 0x48
    CDUnknownBlockType _moduleVersionMigrator;	// 80 = 0x50
}

+ (id)persistedComponentSymbol:(id)arg1;	// IMP=0x00600000000720c9
+ (id)persistedOperationSymbol:(id)arg1;	// IMP=0x0060000000071fa7
+ (long long)persistedEntryStatusValue:(id)arg1;	// IMP=0x0060000000071ebf
+ (id)persistedEntryStatusName:(long long)arg1;	// IMP=0x0060000000071ea0
+ (id)entryFileIDForModule:(id)arg1 fromFilename:(id)arg2;	// IMP=0x0060000000071d4e
+ (id)persistedStateFilename:(id)arg1 forFileID:(id)arg2 ofEntryName:(id)arg3;	// IMP=0x0060000000071c6a
- (void).cxx_destruct;	// IMP=0x000000000007236d
@property(readonly, copy, nonatomic) CDUnknownBlockType moduleVersionMigrator; // @synthesize moduleVersionMigrator=_moduleVersionMigrator;
@property(retain, nonatomic) NSMutableArray *currentEntryIDs; // @synthesize currentEntryIDs=_currentEntryIDs;
@property(readonly, retain, nonatomic) SUCorePersistedState *entryTableOfContents; // @synthesize entryTableOfContents=_entryTableOfContents;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *persistedQueue; // @synthesize persistedQueue=_persistedQueue;
@property(retain, nonatomic) NSString *latestSafeSummary; // @synthesize latestSafeSummary=_latestSafeSummary;
@property(readonly, retain, nonatomic) NSString *moduleCurrentVersion; // @synthesize moduleCurrentVersion=_moduleCurrentVersion;
@property(readonly, retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(readonly, retain, nonatomic) NSString *logLeader; // @synthesize logLeader=_logLeader;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
@property(readonly, retain, nonatomic) SUCorePersistedState *persistedConfig; // @synthesize persistedConfig=_persistedConfig;
- (id)_summaryLeader:(id)arg1 fromLocation:(id)arg2;	// IMP=0x0000000000071b25
- (id)_summary;	// IMP=0x00000000000719ab
- (id)summary;	// IMP=0x0000000000071999
- (id)description;	// IMP=0x0000000000071987
- (void)_removeEntriesMissingFromTableOfContents:(id)arg1;	// IMP=0x0000000000071217
- (void)_removeEntryFile:(id)arg1 reason:(id)arg2 fromLocation:(id)arg3;	// IMP=0x000000000007101c
- (id)_contentsOfModulePersistedPath:(id)arg1 fromLocation:(id)arg2;	// IMP=0x0000000000070d52
- (_Bool)_verifyEntryFileExists:(id)arg1 fromLocation:(id)arg2 expectingExists:(_Bool)arg3;	// IMP=0x0000000000070b99
- (_Bool)_verifyPersistedDirectoryExistsOrCreate:(id)arg1;	// IMP=0x00000000000707cf
- (_Bool)_preExistingPersistedStateValid:(id)arg1 fromLocation:(id)arg2;	// IMP=0x0000000000070717
- (long long)_validateLoadedEntry:(id)arg1 fromLocation:(id)arg2 forEntryName:(id)arg3 loadedWithEntryStatus:(long long)arg4;	// IMP=0x00000000000706c9
- (void)_persistStatusChange:(id)arg1 ofEntryName:(id)arg2 withEntrySummary:(id)arg3 currentStatus:(long long)arg4 fromLocation:(id)arg5;	// IMP=0x000000000007061a
- (id)_loadPersistedEntry:(id)arg1 forEntryName:(id)arg2 withEntryStatus:(long long)arg3;	// IMP=0x000000000006f868
- (void)_persistTableOfContents:(id)arg1 forEntryName:(id)arg2 withEntryStatus:(long long)arg3;	// IMP=0x000000000006f7c6
- (long long)persistedEntryCount:(id)arg1;	// IMP=0x000000000006f74d
- (id)persistedEntryIDs:(id)arg1;	// IMP=0x000000000006f5cc
- (void)removeAllPersistedEntries:(id)arg1;	// IMP=0x000000000006f25c
- (void)removePersistedEntry:(id)arg1 fromLocation:(id)arg2;	// IMP=0x000000000006ee29
- (void)storePersistedEntry:(id)arg1 withEntrySummary:(id)arg2 fromLocation:(id)arg3;	// IMP=0x000000000006ec3b
- (id)persistedEntry:(id)arg1 fromLocation:(id)arg2;	// IMP=0x000000000006eb1a
- (_Bool)persistedEntryAlreadyExists:(id)arg1 fromLocation:(id)arg2;	// IMP=0x000000000006ea2a
- (void)loadPersistedState:(id)arg1;	// IMP=0x000000000006dd81
- (id)initForModule:(id)arg1 ofModuleVersion:(id)arg2 usingDispatchQueue:(id)arg3 usingLogger:(id)arg4 loggingByName:(id)arg5 withVersionMigrator:(CDUnknownBlockType)arg6;	// IMP=0x000000000006da25

@end

