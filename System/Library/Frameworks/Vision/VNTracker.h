//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNTracker : NSObject
{
    struct shared_ptr<vision::mod::ObjectTrackerAbstract> mTrackerImpl;	// 8 = 0x8
    VNRequestSpecifier *_originatingRequestSpecifier;	// 24 = 0x18
    unsigned int _trackedFrameCVPixelBufferFormat;	// 32 = 0x20
    NSString *_level;	// 40 = 0x28
    long long _trackedFrameNumber;	// 48 = 0x30
    NSUUID *_key;	// 56 = 0x38
    struct CGRect _lastTrackedBBox;	// 64 = 0x40
}

+ (id)supportedComputeDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002a333c
+ (long long)VNTrackerOptionToTrackerType:(id)arg1;	// IMP=0x00100000002a3282
- (id).cxx_construct;	// IMP=0x00000000002a2f89
- (void).cxx_destruct;	// IMP=0x00000000002a2f26
@property(readonly) NSUUID *key; // @synthesize key=_key;
@property struct CGRect lastTrackedBBox; // @synthesize lastTrackedBBox=_lastTrackedBBox;
@property long long trackedFrameNumber; // @synthesize trackedFrameNumber=_trackedFrameNumber;
@property(readonly) NSString *level; // @synthesize level=_level;
@property unsigned int trackedFrameCVPixelBufferFormat; // @synthesize trackedFrameCVPixelBufferFormat=_trackedFrameCVPixelBufferFormat;
@property(readonly) VNRequestSpecifier *originatingRequestSpecifier;
- (_Bool)_updateTrackerWithModifiedBBoxForImageBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a2a6b
- (_Bool)_visionBBoxToTrackerBBox:(id)arg1 trackedObjects:(void *)arg2 imageSize:(struct CGSize)arg3 results:(id)arg4 error:(id *)arg5;	// IMP=0x00000000002a2437
- (id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a22e3
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a22d6
@property(readonly) _Bool isResettable;
@property(readonly) _Bool isTracking;
- (_Bool)reset:(id *)arg1;	// IMP=0x00000000002a2186
- (id)trackInFrame:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a1ae8
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a16d2
- (void *)_createTrackerWithLevel:(id)arg1 options:(struct ObjectTrackerOptions *)arg2 error:(id *)arg3;	// IMP=0x00000000002a14bc
- (unsigned long long)hash;	// IMP=0x00000000002a1469
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a13ea
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a11be

@end

