//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXCompleteResourceMigrationSimpleTask
{
}

+ (id)taskGroupIdentifier;	// IMP=0x0040000000005222
- (void)_cleanupVoiceSubscriptions;	// IMP=0x0040000000005b90
- (_Bool)_resourceInUseByOtherTechnologies:(id)arg1;	// IMP=0x00100000000059e8
- (void)_completeMigrationForLegacyResource:(id)arg1 withDownloadedResource:(id)arg2;	// IMP=0x00100000000057a3
- (void)_purgeLegacyResource:(id)arg1;	// IMP=0x001000000000551b
- (void)run:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005236

@end

