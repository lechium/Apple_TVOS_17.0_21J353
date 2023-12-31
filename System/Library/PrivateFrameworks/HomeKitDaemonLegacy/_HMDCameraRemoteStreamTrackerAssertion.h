//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraRemoteStreamTracker, HMDCameraStreamSessionID;

__attribute__((visibility("hidden")))
@interface _HMDCameraRemoteStreamTrackerAssertion : HMFObject
{
    HMDCameraRemoteStreamTracker *_streamTracker;	// 8 = 0x8
    HMDCameraStreamSessionID *_streamSessionID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000686bfe
@property(readonly) HMDCameraStreamSessionID *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property __weak HMDCameraRemoteStreamTracker *streamTracker; // @synthesize streamTracker=_streamTracker;
- (void)dealloc;	// IMP=0x0000000000686b50
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;	// IMP=0x0000000000686ab5

@end

