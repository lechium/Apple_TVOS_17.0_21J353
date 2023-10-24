//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapCameraController
{
    void *_mapEngine;	// 96 = 0x60
    VKTimedAnimation *_horizontalOffsetAnimation;	// 104 = 0x68
    double _minDistanceToGroundAlongForwardVector;	// 112 = 0x70
    double _maxDistanceToGroundAlongForwardVector;	// 120 = 0x78
    double _finalYaw;	// 128 = 0x80
    double _finalPitch;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001971de
@property(nonatomic) void *mapEngine; // @synthesize mapEngine=_mapEngine;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000197152
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x0000000000196e07
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x0000000000196df0
- (double)topDownMinimumZoomLevel;	// IMP=0x0000000000196dd9
- (double)currentZoomLevel;	// IMP=0x0000000000196dc2
- (double)maximumZoomLevel;	// IMP=0x0000000000196dab
- (double)minimumZoomLevel;	// IMP=0x0000000000196d94
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196b6e
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001968c6
- (void)setCenterCoordinateDistanceRange:(CDStruct_fbb5cfe5)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000001962b4
- (double)pitch;	// IMP=0x0000000000196213
- (double)heading;	// IMP=0x0000000000196172
- (double)altitude;	// IMP=0x00000000001960dd
- (double)distanceFromCenterCoordinate;	// IMP=0x0000000000196056
- (CDStruct_2c43369c)centerCoordinate;	// IMP=0x0000000000195f00
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000195e31
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 forceDestination:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000000195c7f
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000195c64
- (void)_jumpToCenterPoint:(Matrix_6e1d3589)arg1 pitchRadians:(double)arg2 yawRadians:(double)arg3;	// IMP=0x0000000000195827
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 forceDestination:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000019437e
- (void)_animateToPosition:(Matrix_6e1d3589)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000194364
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;	// IMP=0x00000000001942c4
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000193ea4
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x0000000000193d60
- (CDStruct_2c43369c)_mercatorCenterCoordinateForMapRegion:(id)arg1;	// IMP=0x0000000000193d1d
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001935c9
- (double)yaw;	// IMP=0x0000000000193528
- (double)presentationYaw;	// IMP=0x00000000001934bc
- (void)updateCameraZBounds;	// IMP=0x0000000000192335
- (void)updateCameraToPositionOrientationLimits;	// IMP=0x0000000000192305
- (_Bool)canRotate;	// IMP=0x00000000001922e8
- (void)clampZoomLevelIfNecessaryAnimated:(_Bool)arg1;	// IMP=0x0000000000191a0b
- (void)setGesturing:(_Bool)arg1;	// IMP=0x00000000001919b7
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000191214
- (_Bool)canEnter3DMode;	// IMP=0x00000000001911af
- (double)maxPitch;	// IMP=0x0000000000191176
- (double)minPitch;	// IMP=0x000000000019113d
- (_Bool)isFullyPitched;	// IMP=0x0000000000191081
- (_Bool)isPitched;	// IMP=0x0000000000191020
- (void)exit3DMode;	// IMP=0x0000000000190ff8
- (void)enter3DMode;	// IMP=0x0000000000190ced
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;	// IMP=0x0000000000190c22
- (void)clampPitch:(double *)arg1 yaw:(double *)arg2 atTargetPositionZ:(double)arg3;	// IMP=0x0000000000190961
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000001906c8
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x000000000019033b
- (void)zoomToLevel:(double)arg1 withPoint:(Matrix_6e1d3589)arg2;	// IMP=0x000000000018fcc8
- (void)zoom:(double)arg1 withPoint:(Matrix_6e1d3589)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000018f78e
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000018f61f
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000018f575
- (void)rotateToYaw:(double)arg1 withPoint:(const void *)arg2 animated:(_Bool)arg3;	// IMP=0x000000000018ed95
- (void)rotateToPitch:(double)arg1 withPoint:(const void *)arg2 preserveAltitude:(_Bool)arg3 animated:(_Bool)arg4 exaggerate:(_Bool)arg5;	// IMP=0x000000000018e10a
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000018e051
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000018e01b
- (float)minimumPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000018dfe5
- (float)normalizedZoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x000000000018df99
- (float)currentTopDownMinimumNormalizedZoomLevel;	// IMP=0x000000000018debe
- (float)currentMinimumNormalizedZoomLevel;	// IMP=0x000000000018de45
- (float)currentMaximumNormalizedZoomLevel;	// IMP=0x000000000018dd6a
- (float)maximumNormalizedZoomLevel;	// IMP=0x000000000018db06
- (float)minimumNormalizedZoomLevel;	// IMP=0x000000000018da6c
- (float)currentStyleZoomLevel;	// IMP=0x000000000018d9ee
- (float)currentNormalizedZoomLevel;	// IMP=0x000000000018d8b2
- (float)currentDisplayZoomLevel;	// IMP=0x000000000018d6b4
- (long long)tileSize;	// IMP=0x000000000018d686
- (void)canvasDidLayout;	// IMP=0x000000000018d5a1
- (void)dealloc;	// IMP=0x000000000018d523
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x000000000018d408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

