//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDResetConfigPostCleanup : HMFObject
{
}

+ (id)logCategory;	// IMP=0x001000000003ede7
+ (id)resetConfigPostCleanupFileLocation;	// IMP=0x001000000003ed61
+ (void)writePostCleanupRecordToRemoveAllCoreDataFilesWithReason:(unsigned long long)arg1;	// IMP=0x001000000003ed43
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(_Bool)arg3 usingFileManager:(id)arg4;	// IMP=0x001000000003eb14
+ (void)deleteFilesInsideDirectory:(id)arg1 excludingFiles:(id)arg2 shouldSkipDirectories:(_Bool)arg3;	// IMP=0x001000000003ea8f
+ (void)removeFilesAtLocation:(id)arg1 usingFileManager:(id)arg2;	// IMP=0x001000000003e9f8
+ (void)removeFilesAtLocation:(id)arg1;	// IMP=0x001000000003e999
+ (id)sqlFileListToRemove:(id)arg1 fromRootDirectory:(id)arg2;	// IMP=0x001000000003e7ae
+ (id)filesToExcludeFromHomedDirectory;	// IMP=0x001000000003e78e
+ (id)filesToExcludeFromCacheDirectory;	// IMP=0x001000000003e76e
+ (void)performIndividualCleanupTasks:(unsigned long long)arg1 onRootDirectory:(id)arg2;	// IMP=0x001000000003e54b
+ (void)performResetConfigPostCleanupSteps:(unsigned long long)arg1 dueToReason:(unsigned long long)arg2;	// IMP=0x001000000003e243
+ (void)performAnyPostCleanupStepsIfNecessary;	// IMP=0x001000000003df5a
+ (void)writePostCleanupRecordWithReason:(unsigned long long)arg1 steps:(unsigned long long)arg2;	// IMP=0x001000000003d948
+ (id)_readExistingPostCleanupRecord;	// IMP=0x001000000003d2ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

