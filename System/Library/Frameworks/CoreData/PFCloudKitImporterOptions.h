//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDatabase, NSCloudKitMirroringDelegateOptions, NSURL, PFCloudKitStoreMonitor;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterOptions : NSObject
{
    CKDatabase *_database;	// 8 = 0x8
    PFCloudKitStoreMonitor *_monitor;	// 16 = 0x10
    NSCloudKitMirroringDelegateOptions *_options;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSURL *_assetStorageURL;	// 40 = 0x28
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f3b8
- (id)copy;	// IMP=0x000000000021f374
- (void)dealloc;	// IMP=0x000000000021f30b
- (id)initWithOptions:(id)arg1 monitor:(id)arg2 assetStorageURL:(id)arg3 workQueue:(id)arg4 andDatabase:(id)arg5;	// IMP=0x000000000021f267

@end

