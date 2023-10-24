//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UASharedPasteboardDataManager : NSObject
{
    NSString *_currentLocalBlobPath;	// 8 = 0x8
    NSString *_currentRemoteBlobPath;	// 16 = 0x10
    NSMutableDictionary *_tmpArchiveWriteFiles;	// 24 = 0x18
    NSMutableDictionary *_lockTokens;	// 32 = 0x20
    NSMutableDictionary *_providers;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000000dea1
- (void).cxx_destruct;	// IMP=0x0020000000011c19
@property(retain) NSMutableDictionary *providers; // @synthesize providers=_providers;
@property(retain) NSMutableDictionary *lockTokens; // @synthesize lockTokens=_lockTokens;
@property(retain) NSMutableDictionary *tmpArchiveWriteFiles; // @synthesize tmpArchiveWriteFiles=_tmpArchiveWriteFiles;
@property(retain) NSString *currentRemoteBlobPath; // @synthesize currentRemoteBlobPath=_currentRemoteBlobPath;
@property(retain) NSString *currentLocalBlobPath; // @synthesize currentLocalBlobPath=_currentLocalBlobPath;
- (void)cleanupCloneDir;	// IMP=0x00100000000114e6
- (void)cleanupItemsDir;	// IMP=0x0010000000010dc0
- (void)cleanupArchiveDir;	// IMP=0x00100000000109db
- (void)cleanupForItem:(id)arg1;	// IMP=0x00100000000103bf
- (void)cancelAllLocks;	// IMP=0x0010000000010143
- (void)releaseLockForItem:(id)arg1;	// IMP=0x001000000001012f
- (void)releaseLockForItem:(id)arg1 withError:(id)arg2;	// IMP=0x001000000000fef1
- (void)obtainLockForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fd3e
- (void)finishWritingArchiveForUUID:(id)arg1;	// IMP=0x001000000000faed
- (void)writeArchiveData:(id)arg1 forItem:(id)arg2;	// IMP=0x001000000000f8f6
- (_Bool)createTmpArchiveFileWithUUID:(id)arg1;	// IMP=0x001000000000f7ee
- (id)readHandleForArchiveWithUUID:(id)arg1;	// IMP=0x001000000000f76a
- (id)fileURLForArchiveWithUUID:(id)arg1;	// IMP=0x001000000000f66d
- (id)fileURLForPasteboardItem:(id)arg1;	// IMP=0x001000000000f5bf
- (id)fileURLForCloneItems;	// IMP=0x001000000000f391
- (id)subDirForItem:(id)arg1;	// IMP=0x001000000000f322
- (id)remotePasteboardBlobForReading;	// IMP=0x001000000000f291
- (id)createFileForRemotePasteboardBlob;	// IMP=0x001000000000eeec
- (id)localPasteboardBlobForReading;	// IMP=0x001000000000ee5b
- (id)createFileForLocalPasteboardBlob;	// IMP=0x001000000000eab6
- (id)createFolderAtPath:(id)arg1;	// IMP=0x001000000000e8f3
- (_Bool)directoryExistsAtPath:(id)arg1;	// IMP=0x001000000000e82b
- (id)createFileForUUID:(id)arg1 inSubFolder:(id)arg2;	// IMP=0x001000000000e3d1
- (id)createFileForUUID:(id)arg1;	// IMP=0x001000000000e3bd
- (_Bool)fileExistsForUUID:(id)arg1 inSubFolder:(id)arg2;	// IMP=0x001000000000e2b4
- (id)createSharedDataDirectory;	// IMP=0x001000000000e15e
- (id)sharedDataPath;	// IMP=0x001000000000e06d
- (id)init;	// IMP=0x001000000000def6

@end
