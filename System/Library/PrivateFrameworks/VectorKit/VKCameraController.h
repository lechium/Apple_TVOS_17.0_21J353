//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, NSString, VKCamera;
@protocol MDRenderTarget, VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : NSObject
{
    VKCamera *_vkCamera;	// 8 = 0x8
    shared_ptr_46708168 _camera;	// 16 = 0x10
    id <MDRenderTarget> _canvas;	// 32 = 0x20
    id <VKMapViewCameraDelegate> _cameraDelegate;	// 40 = 0x28
    _Bool _gesturing;	// 48 = 0x30
    unsigned long long _regionChangeCount;	// 56 = 0x38
    _Bool _inProgressRegionChangeIsAnimated;	// 64 = 0x40
    struct VKEdgeInsets _edgeInsets;	// 68 = 0x44
    _Bool _edgeInsetsAnimating;	// 84 = 0x54
    struct MapDataAccess *_mapDataAccess;	// 88 = 0x58
    struct AnimationRunner *_animationRunner;	// 96 = 0x60
    struct RunLoopController *_runLoopController;	// 104 = 0x68
    long long _baseDisplayRate;	// 112 = 0x70
    long long _maxDisplayRate;	// 120 = 0x78
    _Bool _staysCenteredDuringPinch;	// 128 = 0x80
    _Bool _staysCenteredDuringRotation;	// 129 = 0x81
    _Bool _isPitchEnabled;	// 130 = 0x82
    _Bool _isRotateEnabled;	// 131 = 0x83
}

- (id).cxx_construct;	// IMP=0x0000000000175fb0
- (void).cxx_destruct;	// IMP=0x0000000000175f78
@property(readonly, nonatomic) struct RunLoopController *runLoopController; // @synthesize runLoopController=_runLoopController;
@property(readonly, nonatomic) struct AnimationRunner *animationRunner; // @synthesize animationRunner=_animationRunner;
@property(readonly, nonatomic) struct MapDataAccess *mapDataAccess; // @synthesize mapDataAccess=_mapDataAccess;
@property(nonatomic) _Bool isRotateEnabled; // @synthesize isRotateEnabled=_isRotateEnabled;
@property(nonatomic) _Bool isPitchEnabled; // @synthesize isPitchEnabled=_isPitchEnabled;
@property(nonatomic) _Bool staysCenteredDuringRotation; // @synthesize staysCenteredDuringRotation=_staysCenteredDuringRotation;
@property(nonatomic) _Bool staysCenteredDuringPinch; // @synthesize staysCenteredDuringPinch=_staysCenteredDuringPinch;
- (_Bool)usesVKCamera;	// IMP=0x0000000000175ef2
- (void)populateDebugNode:(void *)arg1 withOptions:(const void *)arg2;	// IMP=0x0000000000175e02
- (_Bool)centerCoordinate:(CDStruct_2c43369c *)arg1 andDistanceFromCenter:(double *)arg2 forMapRegion:(id)arg3;	// IMP=0x0000000000175dfa
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000175df4
- (_Bool)wantsTimerTick;	// IMP=0x0000000000175deb
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double maxPitch;
@property(readonly, nonatomic) double minPitch;
@property(nonatomic) double pitch;
@property(readonly, nonatomic) double presentationHeading;
@property(nonatomic) double heading;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_2c43369c centerCoordinate;
@property(readonly, nonatomic) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)updateCameraToPositionOrientationLimits;	// IMP=0x00000000001757f0
- (void)stylesheetDidReload;	// IMP=0x00000000001757ea
- (void)stylesheetDidChange;	// IMP=0x00000000001757e4
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) _Bool canRotate;
@property(readonly, nonatomic) _Bool canPitch;
- (long long)tileSize;	// IMP=0x00000000001757b4
- (_Bool)canZoomOutForTileSize:(long long)arg1;	// IMP=0x000000000017575b
- (_Bool)canZoomInForTileSize:(long long)arg1;	// IMP=0x0000000000175702
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;	// IMP=0x00000000001756bc
- (double)currentZoomLevelForTileSize:(long long)arg1;	// IMP=0x0000000000175676
- (double)maximumZoomLevelForTileSize:(long long)arg1;	// IMP=0x0000000000175630
- (double)minimumZoomLevelForTileSize:(long long)arg1;	// IMP=0x00000000001755ea
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;	// IMP=0x00000000001755a5
- (double)topDownMinimumZoomLevel;	// IMP=0x0000000000175587
- (double)currentZoomLevel;	// IMP=0x0000000000175569
- (double)maximumZoomLevel;	// IMP=0x000000000017554b
- (double)minimumZoomLevel;	// IMP=0x000000000017552d
- (_Bool)edgeInsetsAnimating;	// IMP=0x0000000000175524
- (void)setEdgeInsetsAnimating:(_Bool)arg1;	// IMP=0x000000000017551b
- (struct VKEdgeInsets)edgeInsets;	// IMP=0x000000000017550b
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x00000000001754fe
- (Matrix_443f5d51)cursorFromScreenPoint:(struct CGPoint)arg1;	// IMP=0x00000000001753d6
- (struct CGPoint)scaledScreenPointForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000175338
- (struct CGPoint)centerScreenPoint;	// IMP=0x0000000000175262
- (id)detailedDescription;	// IMP=0x000000000017514c
- (void)checkAndResetRegionChangeCount;	// IMP=0x000000000017513e
- (_Bool)isChangingRegion;	// IMP=0x0000000000175130
- (_Bool)isAnimating;	// IMP=0x0000000000175104
- (void)endRegionChange;	// IMP=0x0000000000175083
- (void)beginRegionChange:(_Bool)arg1;	// IMP=0x0000000000175005
- (void)canvasDidLayout;	// IMP=0x0000000000174fff
- (void)setGesturing:(_Bool)arg1;	// IMP=0x0000000000174ff6
- (_Bool)isGesturing;	// IMP=0x0000000000174fed
- (void)setCameraDelegate:(id)arg1;	// IMP=0x0000000000174f99
- (id)cameraDelegate;	// IMP=0x0000000000174f83
- (void)setCanvas:(id)arg1;	// IMP=0x0000000000174f2f
- (id)canvas;	// IMP=0x0000000000174f19
- (shared_ptr_46708168)camera;	// IMP=0x0000000000174ef7
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x0000000000174ee6
- (id)vkCamera;	// IMP=0x0000000000174ed8
- (void)setVkCamera:(id)arg1;	// IMP=0x0000000000174e94
@property(nonatomic) long long maxDisplayRate;
@property(nonatomic) long long baseDisplayRate;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x0000000000174db6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

