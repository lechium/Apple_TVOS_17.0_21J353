//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSURL;

@interface GEOImageServicePersistence : NSObject
{
    NSURL *_dbFileURL;	// 8 = 0x8
    GEOSQLiteDB *_db;	// 16 = 0x10
    double _maximumAge;	// 24 = 0x18
    unsigned long long _numberOfEntries;	// 32 = 0x20
    unsigned long long _totalDataSize;	// 40 = 0x28
    unsigned long long _maxTotalDataSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002cfec
- (void)getDataForIdentifier:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 callbackQueue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x001000000002c9de
- (void)addData:(id)arg1 forIdentifier:(id)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;	// IMP=0x001000000002c4ee
- (unsigned long long)shrinkBySize:(unsigned long long)arg1;	// IMP=0x001000000002c3f5
- (unsigned long long)shrinkToSize:(unsigned long long)arg1;	// IMP=0x001000000002c2fc
- (unsigned long long)calculateFreeableSize;	// IMP=0x001000000002c238
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;	// IMP=0x001000000002bf91
- (unsigned long long)_shrinkToSize:(unsigned long long)arg1;	// IMP=0x001000000002bf4c
- (_Bool)_deleteAndRecreateDB;	// IMP=0x001000000002bf06
- (unsigned long long)_evictAssetsOlderThanAllowedThreshold;	// IMP=0x001000000002bbf8
- (void)_evictIfNecessary;	// IMP=0x001000000002bbda
- (void)_updateDataSizeOnDBQueue;	// IMP=0x001000000002baff
- (void)tearDown;	// IMP=0x001000000002ba4b
- (_Bool)_setup:(id)arg1;	// IMP=0x001000000002b813
- (id)initWithDBFileURL:(id)arg1 maximumTotalDataSize:(unsigned long long)arg2 maximumAge:(double)arg3;	// IMP=0x001000000002b4e4
- (id)initWithDBFileURL:(id)arg1;	// IMP=0x001000000002b4c8
- (id)init;	// IMP=0x001000000002b4b4

@end

