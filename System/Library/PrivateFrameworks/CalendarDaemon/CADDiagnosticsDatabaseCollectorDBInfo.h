//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CADDiagnosticsDatabaseCollectorDBInfo : NSObject
{
    NSURL *_outputURL;	// 8 = 0x8
    NSURL *_walOutputURL;	// 16 = 0x10
    struct CalDatabase *_mainDatabase;	// 24 = 0x18
    void *_auxDatabase;	// 32 = 0x20
    NSString *_movedAsideDatabasePath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000062c98
- (_Bool)redactAndCompress:(id)arg1 context:(id)arg2;	// IMP=0x0000000000062b1d
- (_Bool)collectMovedAsideDatabaseWithoutRedacting:(id)arg1;	// IMP=0x00000000000629db
- (_Bool)redactAndCollectMovedAsideDatabase:(id)arg1;	// IMP=0x00000000000628c1
- (_Bool)backupDatabaseFromPath:(id)arg1 toPath:(id)arg2 context:(id)arg3;	// IMP=0x000000000006266c
- (void)collectMovedAsideDatabase:(id)arg1;	// IMP=0x00000000000625f7
- (void)collectStandardDatabase:(id)arg1;	// IMP=0x0000000000062390
- (void)collect:(id)arg1;	// IMP=0x0000000000062333
- (void)determineExpectedOutputFiles:(id)arg1;	// IMP=0x00000000000622d7
- (void)dealloc;	// IMP=0x000000000006228a
- (id)initWithPossiblyUnmigratedDatabaseDirectory:(id)arg1 context:(id)arg2;	// IMP=0x0000000000061d7a
- (id)initWithMainDatabase:(struct CalDatabase *)arg1 auxDatabase:(void *)arg2 context:(id)arg3;	// IMP=0x0000000000061c68
- (id)initWithMainDatabase:(struct CalDatabase *)arg1 context:(id)arg2;	// IMP=0x0000000000061bb1

@end
