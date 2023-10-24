//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3ImportOperation.h"

@class ML3DatabaseConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ML3ProtoSyncImportOperation : ML3ImportOperation
{
    unsigned int _totalSyncPackageCount;	// 8 = 0x8
    unsigned int _syncPackageNum;	// 12 = 0xc
    _Bool _syncSessionStarted;	// 16 = 0x10
    int _syncType;	// 20 = 0x14
    ML3DatabaseConnection *_connection;	// 24 = 0x18
    _Bool _isServerImport;	// 32 = 0x20
    long long _readSourceState;	// 40 = 0x28
    _Bool _isReadSourceCancelled;	// 48 = 0x30
    _Bool _importFinished;	// 49 = 0x31
    _Bool _pairedDeviceCanProcessStandAloneCollections;	// 50 = 0x32
    NSMutableSet *_syncIdsToUnlink;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_accessQueue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_readSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000daa0e
- (void)_unlinkUnavailableMediaItems;	// IMP=0x00000000000da3f5
- (_Bool)_processAlbumOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x00000000000d99bc
- (_Bool)_processAlbumArtistOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x00000000000d9389
- (_Bool)_processPlaylistOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x00000000000d8ddd
- (_Bool)_processMediaItemOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x00000000000d6f18
- (_Bool)_processSyncOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x00000000000d6dc3
- (_Bool)_processSyncError:(id)arg1;	// IMP=0x00000000000d6cac
- (_Bool)_processSyncHeader:(id)arg1;	// IMP=0x00000000000d6a66
- (_Bool)_processSyncPackage:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x00000000000d68ff
- (_Bool)_performImportWithTransaction:(id)arg1;	// IMP=0x00000000000d57a2
- (void)cancel;	// IMP=0x00000000000d5699
- (void)main;	// IMP=0x00000000000d5252
- (id)initWithDatabaseImport:(id)arg1;	// IMP=0x00000000000d5157
- (unsigned long long)importSource;	// IMP=0x00000000000d514c

@end
