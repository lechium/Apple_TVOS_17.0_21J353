//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, NSString;
@protocol OS_dispatch_queue;

@interface PartialDownloadPurgeCoordinator : NSObject
{
    AppInstallsDatabaseStore *_databaseStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000010b186
- (long long)_purgeForDesiredSpace:(long long)arg1;	// IMP=0x001000000010a75b
- (long long)_calculatePurgeableSpace;	// IMP=0x001000000010a3b0
- (long long)purgeableForVolume:(id)arg1 urgency:(long long)arg2 client:(id)arg3;	// IMP=0x001000000010a2f4
- (long long)purgeForVolume:(id)arg1 urgency:(long long)arg2 desiredPurge:(id)arg3 client:(id)arg4;	// IMP=0x001000000010a1ce
- (id)allPurgeablesForVolume:(id)arg1 reason:(id)arg2 client:(id)arg3;	// IMP=0x0010000000109fac
- (id)init;	// IMP=0x0010000000109f0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

