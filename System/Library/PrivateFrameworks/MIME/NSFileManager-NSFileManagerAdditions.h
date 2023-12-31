//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (NSFileManagerAdditions)
- (id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x0070000000032ab8
- (_Bool)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id *)arg4;	// IMP=0x007000000003296a
- (_Bool)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id *)arg3;	// IMP=0x0070000000032953
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;	// IMP=0x0070000000032879
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;	// IMP=0x00700000000326d3
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(_Bool)arg2;	// IMP=0x007000000003266f
- (_Bool)mf_canWriteToDirectoryAtPath:(id)arg1;	// IMP=0x0070000000032601
- (_Bool)mf_makeCompletePath:(id)arg1 mode:(int)arg2;	// IMP=0x00700000000325f2
- (id)mf_makeUniqueFileInDirectory:(id)arg1;	// IMP=0x0070000000032488
@end

