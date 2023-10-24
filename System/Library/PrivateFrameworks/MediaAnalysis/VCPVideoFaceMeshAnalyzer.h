//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoFaceMeshAnalyzer : NSObject
{
    _Bool _bufferRotated;	// 8 = 0x8
    NSDictionary *_blendShapes;	// 16 = 0x10
    unsigned long long _vertexCount;	// 24 = 0x18
    const MISSING_TYPE **_vertices;	// 32 = 0x20
    const float *_landmarks;	// 40 = 0x28
    CDStruct_14d5dc5e _pose;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000028b376
@property(readonly, nonatomic) _Bool bufferRotated; // @synthesize bufferRotated=_bufferRotated;
@property(readonly, nonatomic) const float *landmarks; // @synthesize landmarks=_landmarks;
@property(readonly, nonatomic) const MISSING_TYPE **vertices; // @synthesize vertices=_vertices;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) NSDictionary *blendShapes; // @synthesize blendShapes=_blendShapes;
@property(readonly, nonatomic) CDStruct_14d5dc5e pose; // @synthesize pose=_pose;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceRect:(struct CGRect)arg2 withRotation:(int)arg3 withTimestamp:(CDStruct_1b6d18a9)arg4;	// IMP=0x000000000028b312
- (_Bool)isTracked;	// IMP=0x000000000028b30a
- (_Bool)updateFocalLengthInPixels:(float)arg1;	// IMP=0x000000000028b302
- (id)initWithFocalLengthInPixels:(float)arg1 offline:(_Bool)arg2 isFastMode:(_Bool)arg3;	// IMP=0x000000000028b2f4

@end

