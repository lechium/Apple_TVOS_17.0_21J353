//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MKIconDiskCache : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_storingQueue;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
    NSMutableArray *_inProgressUUIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000097fdf
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;	// IMP=0x0000000000097fcd
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 isCarplay:(_Bool)arg4 isTransit:(_Bool)arg5 isTransparent:(_Bool)arg6 isNightMode:(_Bool)arg7 drawingBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000000975d1
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 drawingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000097596
- (void)_updateVersionsInfo;	// IMP=0x0000000000097075
- (void)dealloc;	// IMP=0x0000000000096fc2
- (id)initWithDirectoryURL:(id)arg1;	// IMP=0x0000000000096e11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

