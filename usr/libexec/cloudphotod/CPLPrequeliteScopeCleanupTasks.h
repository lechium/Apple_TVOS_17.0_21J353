//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteScopeCleanupTasks
{
}

- (id)statusDictionary;	// IMP=0x002000000007c25b
- (id)status;	// IMP=0x001000000007c1b2
- (_Bool)hasCleanupTasks;	// IMP=0x001000000007c13e
- (_Bool)deleteCleanupTaskForScopeWithIndex:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000007c058
- (long long)nextCleanupTaskScopeIndexOfType:(unsigned long long *)arg1;	// IMP=0x001000000007bf49
- (_Bool)addCleanupTaskForScopeWithIndex:(long long)arg1 scopeIdentifier:(id)arg2 scopeType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000007be37
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000007be1b
- (_Bool)initializeStorage;	// IMP=0x001000000007bdc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
