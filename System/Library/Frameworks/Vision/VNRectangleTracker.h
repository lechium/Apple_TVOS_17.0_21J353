//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNRectangleTracker
{
    NSMutableDictionary *_cornerTrackersImpl;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_rectangleTrackingProcessingQueue;	// 32 = 0x20
}

+ (id)_trackingRectAroundPoint:(struct CGPoint)arg1 trackingRectSize:(struct CGSize)arg2;	// IMP=0x00600000000b7b29
+ (id)trackedCorners;	// IMP=0x00600000000b7af9
+ (Class)trackerObservationClass;	// IMP=0x00600000000b7ae8
+ (id)supportedComputeDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000b7abf
- (void).cxx_destruct;	// IMP=0x00000000000b6796
- (id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b6240
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b5e8c
- (_Bool)isTracking;	// IMP=0x00000000000b5de2
- (_Bool)reset:(id *)arg1;	// IMP=0x00000000000b5ba3
- (id)trackInFrame:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b56e1
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b5124
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b4d85

@end

