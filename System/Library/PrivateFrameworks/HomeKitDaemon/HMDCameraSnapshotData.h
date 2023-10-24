//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDVideoResolution, HMFOSTransaction, NSData;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotData : HMFObject
{
    NSData *_snapshotData;	// 8 = 0x8
    HMFOSTransaction *_snapshotDataTrasaction;	// 16 = 0x10
    HMDVideoResolution *_videoResolution;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000796543
@property(readonly) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;
@property(readonly) HMFOSTransaction *snapshotDataTrasaction; // @synthesize snapshotDataTrasaction=_snapshotDataTrasaction;
@property(readonly) NSData *snapshotData; // @synthesize snapshotData=_snapshotData;
- (void)dealloc;	// IMP=0x00000000007964b7
- (id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2;	// IMP=0x00000000007963d3
- (id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3;	// IMP=0x0000000000796309

@end
