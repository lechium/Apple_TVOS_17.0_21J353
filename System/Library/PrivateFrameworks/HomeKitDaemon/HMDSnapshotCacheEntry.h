//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSnapshotFile, HMFTimer, NSString;

__attribute__((visibility("hidden")))
@interface HMDSnapshotCacheEntry : HMFObject
{
    HMDSnapshotFile *_snapshotFile;	// 8 = 0x8
    NSString *_snapshotCharacteristicEventUUID;	// 16 = 0x10
    HMFTimer *_timer;	// 24 = 0x18
    CDUnknownBlockType _snapshotRequestCompletion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000aa9413
@property(copy, nonatomic) CDUnknownBlockType snapshotRequestCompletion; // @synthesize snapshotRequestCompletion=_snapshotRequestCompletion;
@property(readonly, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSString *snapshotCharacteristicEventUUID; // @synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID;
@property(readonly, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (id)description;	// IMP=0x0000000000aa932b
- (id)initWithSnapshotCharacteristicEventUUID:(id)arg1 snapshotFile:(id)arg2 timer:(id)arg3;	// IMP=0x0000000000aa9261

@end
