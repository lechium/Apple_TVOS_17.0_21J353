//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKOntologyShardRegistryEntry, HKOntologyStore;

@protocol HKOntologyStoreObserver
- (void)ontologyStoreDidReconnect:(HKOntologyStore *)arg1;
- (void)ontologyStore:(HKOntologyStore *)arg1 didImportEntry:(HKOntologyShardRegistryEntry *)arg2;
- (void)ontologyStore:(HKOntologyStore *)arg1 didStageEntry:(HKOntologyShardRegistryEntry *)arg2;
@end

