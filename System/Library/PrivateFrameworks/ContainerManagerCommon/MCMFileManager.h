//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MCMFileManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x001000000002c1ba
- (_Bool)_fixOwnershipOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 statfs:(struct statfs *)arg4 uid:(unsigned int)arg5 gid:(unsigned int)arg6 error:(id *)arg7;	// IMP=0x000000000002a8f1
- (_Bool)_fixFlagsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x000000000002a6d4
- (_Bool)_fixPOSIXBitsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x000000000002a4b1
- (_Bool)_fixPOSIXPermsOnFD:(int)arg1 FTSENT:(struct _ftsent *)arg2 stat:(struct stat *)arg3 error:(id *)arg4;	// IMP=0x000000000002a0a8
- (_Bool)_fixACLOnFD:(int)arg1 removeACLFilesec:(struct _filesec *)arg2 denyDeleteFilesec:(struct _filesec *)arg3 denyDeleteText:(const char *)arg4 path:(const char *)arg5 error:(id *)arg6;	// IMP=0x0000000000029897
- (_Bool)_withEveryoneDenyDeleteACLDoBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029669
- (struct _filesec *)_denyDeleteACLFilesecWithACLText:(char **)arg1;	// IMP=0x000000000002956e
- (struct _filesec *)_removeACLFilesec;	// IMP=0x0000000000029506
- (_Bool)repairPermissionsAtURL:(id)arg1 uid:(unsigned int)arg2 gid:(unsigned int)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000028ac9
- (id)fsSanitizedStringFromString:(id)arg1;	// IMP=0x000000000002896c
- (id)fsNodeOfURL:(id)arg1 followSymlinks:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000287f5
- (id)copyDescriptionOfURL:(id)arg1;	// IMP=0x00000000000285ad
- (_Bool)removeExclusionFromBackupFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000284fa
- (_Bool)fixUserPermissionsAtURL:(id)arg1 limitToTopLevelURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000282b8
- (unsigned long long)dataWritingOptionsForFileAtURL:(id)arg1;	// IMP=0x0000000000027fbd
- (_Bool)stripACLFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027f79
- (_Bool)_enumeratePOSIX1eACLEntriesAtURL:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027d5a
- (_Bool)checkFileSystemAtURL:(id)arg1 supportsPerFileKeys:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000027bcd
- (_Bool)checkFileSystemAtURL:(id)arg1 isCaseSensitive:(_Bool *)arg2 canAtomicSwap:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000002797d
- (_Bool)compareVolumeForURL:(id)arg1 versusURL:(id)arg2 isSameVolume:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000027513
- (_Bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 mode:(unsigned short)arg4 error:(id *)arg5;	// IMP=0x0000000000026c9d
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 fsNode:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000002656f
- (id)readDataFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000002652c
- (id)realPathForURL:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000263a2
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;	// IMP=0x00000000000249af
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;	// IMP=0x000000000002476a
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;	// IMP=0x00000000000244a3
- (id)_realPathWhatExistsInPath:(id)arg1;	// IMP=0x0000000000024285
- (CDStruct_4bcfbbae)diskUsageForURL:(id)arg1;	// IMP=0x0000000000023e71
- (CDStruct_4bcfbbae)fastDiskUsageForURL:(id)arg1;	// IMP=0x0000000000023e34
- (_Bool)enableFastDiskUsageForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023df5
- (void)printDirectoryStructureAtURL:(id)arg1;	// IMP=0x0000000000023ac2
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toDataProtectionClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00000000000236d7
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 dataProtectionClass:(int *)arg2 error:(id *)arg3;	// IMP=0x000000000002354e
- (_Bool)itemDoesNotExistAtURL:(id)arg1;	// IMP=0x000000000002350e
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 fsNode:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000002310c
- (_Bool)itemAtURL:(id)arg1 followSymlinks:(_Bool)arg2 exists:(_Bool *)arg3 isDirectory:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00000000000230c3
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 isDirectory:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000023076
- (_Bool)itemExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x0000000000023024
- (_Bool)itemAtURL:(id)arg1 exists:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000022fe1
- (_Bool)itemExistsAtURL:(id)arg1;	// IMP=0x0000000000022fa2
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022b85
- (_Bool)standardizeOwnershipAtURL:(id)arg1 toPOSIXUser:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000022718
- (_Bool)standardizeAllSystemContainerACLsAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000220d8
- (_Bool)standardizeACLsForSystemContainerAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022093
- (_Bool)standardizeACLsAtURL:(id)arg1 isSystemContainer:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000022060
- (_Bool)setTopLevelSystemContainerACLAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002202d
- (struct _acl *)_CopyTopLevelSystemContainerACLWithError:(id *)arg1;	// IMP=0x0000000000021f13
- (struct _acl *)_CopySystemContainerACLWithNumACEs:(int)arg1 isDir:(_Bool)arg2 inheritOnly:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x0000000000021dc6
- (_Bool)_CreateSystemUserACEInACL:(struct _acl **)arg1 withPermissions:(int)arg2 andFlags:(int)arg3 withError:(id *)arg4;	// IMP=0x0000000000021973
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000215a6
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002155f
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 withNamePrefix:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002133d
- (_Bool)replaceItemAtDestinationURL:(id)arg1 withSourceURL:(id)arg2 swapped:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000002113e
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000210f8
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000210b2
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002106f
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002102c
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000020bbe
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000020915
- (id)targetOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000206ad
- (_Bool)symbolicallyLinkURL:(id)arg1 toSymlinkTarget:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000020386
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x00000000000202cb
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 dataProtectionClass:(int)arg4 error:(id *)arg5;	// IMP=0x000000000002020f
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000201c6
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 dataProtectionClass:(int)arg5 fsNode:(id *)arg6 error:(id *)arg7;	// IMP=0x000000000001fc38
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 owner:(id)arg4 dataProtectionClass:(int)arg5 error:(id *)arg6;	// IMP=0x000000000001fbe6
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001f794

@end

