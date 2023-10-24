//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKBasicMapView, MKCompassView, MKRotationFilter, MKScaleView, MKTiltGestureRecognizer, MKVariableDelayTapRecognizer, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UITraitCollection, VKCompoundAnimation, VKDynamicAnimation, VKTimedAnimation, _MKDirectionalArrowRecognizer, _MKDirectionalPressGestureRecognizer, _MKOneHandedZoomGestureRecognizer, _MKShoulderPressGestureRecognizer, _MKUserInteractionGestureRecognizer;
@protocol MKMapGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKMapGestureController : NSObject
{
    MKBasicMapView *_mapView;	// 8 = 0x8
    id <MKMapGestureControllerDelegate> _delegate;	// 16 = 0x10
    MKScaleView *_scaleView;	// 24 = 0x18
    MKCompassView *_compassView;	// 32 = 0x20
    MKRotationFilter *_rotationFilter;	// 40 = 0x28
    _Bool _rotationSnappingEnabled;	// 48 = 0x30
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;	// 56 = 0x38
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;	// 64 = 0x40
    UILongPressGestureRecognizer *_twoFingerLongPressGestureRecognizer;	// 72 = 0x48
    UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 80 = 0x50
    UIPanGestureRecognizer *_panGestureRecognizer;	// 88 = 0x58
    _MKOneHandedZoomGestureRecognizer *_oneHandedZoomGestureRecognizer;	// 96 = 0x60
    _MKDirectionalArrowRecognizer *_activeArrowGestureRecognizer;	// 104 = 0x68
    _MKDirectionalArrowRecognizer *_arrowZoomGestureRecognizer;	// 112 = 0x70
    _MKDirectionalArrowRecognizer *_arrowRotateGestureRecognizer;	// 120 = 0x78
    _MKDirectionalArrowRecognizer *_arrowPanGestureRecognizer;	// 128 = 0x80
    VKTimedAnimation *_currentArrowAnimation;	// 136 = 0x88
    double _arrowZoomSpeed;	// 144 = 0x90
    double _arrowZoomStartTimestamp;	// 152 = 0x98
    double _pinchFactorAverageInGesture;	// 160 = 0xa0
    double _lastPinchUpdateTimestamp;	// 168 = 0xa8
    double _lastScale;	// 176 = 0xb0
    VKDynamicAnimation *_pinchDecelerationAnimation;	// 184 = 0xb8
    VKCompoundAnimation *_panDecelerationAnimationGroup;	// 192 = 0xc0
    long long _gestureCount;	// 200 = 0xc8
    _Bool _panWithMomentum;	// 208 = 0xd0
    _MKUserInteractionGestureRecognizer *_touchGestureRecognizer;	// 216 = 0xd8
    UIRotationGestureRecognizer *_rotationGestureRecognizer;	// 224 = 0xe0
    VKDynamicAnimation *_rotationDecelerationAnimation;	// 232 = 0xe8
    MKTiltGestureRecognizer *_tiltGestureRecognizer;	// 240 = 0xf0
    VKDynamicAnimation *_tiltDecelerationAnimation;	// 248 = 0xf8
    _Bool _didStartLongPress;	// 256 = 0x100
    _Bool _isPanning;	// 257 = 0x101
    _Bool _isPinching;	// 258 = 0x102
    UITraitCollection *_traitCollection;	// 264 = 0x108
    struct CGPoint _scrollTranslation;	// 272 = 0x110
    struct CGPoint _lastArrowScrollTranslationDelta;	// 288 = 0x120
    _Bool _isFullRotatingFromArrows;	// 304 = 0x130
    double _lastRotationInGestureDelta;	// 312 = 0x138
    double _lastRotation;	// 320 = 0x140
    _MKDirectionalPressGestureRecognizer *_arrowGestureRecognizer;	// 328 = 0x148
    VKTimedAnimation *_arrowPanAnimation;	// 336 = 0x150
    struct CGPoint _arrowPanTranslationAmount;	// 344 = 0x158
    struct CGSize _arrowPanTranslationVelocity;	// 360 = 0x168
    double _arrowPanStartTimestamp;	// 376 = 0x178
    _MKShoulderPressGestureRecognizer *_gamepadLeftShoulderZoomGestureRecognizer;	// 384 = 0x180
    _MKShoulderPressGestureRecognizer *_gamepadRightShoulderZoomGestureRecognizer;	// 392 = 0x188
    VKTimedAnimation *_shoulderZoomAnimation;	// 400 = 0x190
    UIPanGestureRecognizer *_rightSidePanZoomGestureRecognizer;	// 408 = 0x198
}

- (void).cxx_destruct;	// IMP=0x00000000000a1432
@property(nonatomic) _Bool rotationSnappingEnabled; // @synthesize rotationSnappingEnabled=_rotationSnappingEnabled;
@property(nonatomic) _Bool panWithMomentum; // @synthesize panWithMomentum=_panWithMomentum;
@property(retain, nonatomic) MKRotationFilter *rotationFilter; // @synthesize rotationFilter=_rotationFilter;
@property(retain, nonatomic) MKCompassView *compassView; // @synthesize compassView=_compassView;
@property(retain, nonatomic) MKScaleView *scaleView; // @synthesize scaleView=_scaleView;
@property(readonly, nonatomic) MKBasicMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <MKMapGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *twoFingerLongPressGestureRecognizer; // @synthesize twoFingerLongPressGestureRecognizer=_twoFingerLongPressGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *twoFingerTapGestureRecognizer; // @synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000a1187
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000a103c
- (_Bool)tiltGestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000a0ebc
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000a0e56
- (void)handleArrowZoom:(id)arg1;	// IMP=0x000000000009ff8b
- (void)handleArrowRotate:(id)arg1;	// IMP=0x000000000009f09a
- (void)handleArrowPan:(id)arg1;	// IMP=0x000000000009e4cb
- (void)cancelZoomInOrOut;	// IMP=0x000000000009e48a
- (void)zoomOut;	// IMP=0x000000000009e3c9
- (void)zoomIn;	// IMP=0x000000000009e308
- (void)handleZoomArrowMask:(long long)arg1 speed:(double)arg2;	// IMP=0x000000000009e1aa
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;	// IMP=0x000000000009e0a5
- (void)gestureRecognizerTouchesCanceled:(id)arg1;	// IMP=0x000000000009e093
- (void)gestureRecognizerTouchesEnded:(id)arg1;	// IMP=0x000000000009e081
- (void)gestureRecognizerTouchesBegan:(id)arg1;	// IMP=0x000000000009e06f
- (void)handleTouch:(id)arg1;	// IMP=0x000000000009e069
- (void)handlePan:(id)arg1;	// IMP=0x000000000009d450
- (struct CGPoint)_snapPointToDevicePixels:(struct CGPoint)arg1;	// IMP=0x000000000009d305
- (void)_updateZoomGestureForState:(long long)arg1 focusPoint:(struct CGPoint)arg2 scale:(double)arg3 velocity:(double)arg4 gestureType:(long long)arg5 configuration:(id)arg6;	// IMP=0x000000000009cea0
- (void)handlePanZoom:(id)arg1;	// IMP=0x000000000009ccd4
- (void)_handleRightShoulder:(id)arg1;	// IMP=0x000000000009c5dc
- (void)_handleArrowTap:(id)arg1;	// IMP=0x000000000009b633
- (void)handleTwoFingerLongPress:(id)arg1;	// IMP=0x000000000009b53a
- (void)handleTwoFingerTap:(id)arg1;	// IMP=0x000000000009b2a1
- (void)handleDoubleTap:(id)arg1;	// IMP=0x000000000009afa2
- (void)_updateRotationGestureForState:(long long)arg1 focusPoint:(struct CGPoint)arg2 rotation:(double)arg3 velocity:(double)arg4;	// IMP=0x000000000009a7ac
- (void)handleRotation:(id)arg1;	// IMP=0x000000000009a592
- (void)handleTilt:(id)arg1;	// IMP=0x000000000009a580
- (void)_handleStandardTilt:(id)arg1;	// IMP=0x0000000000099bc0
- (void)_setTraitCollection:(id)arg1;	// IMP=0x0000000000099b50
- (void)clearGestureRecognizersInFlight;	// IMP=0x0000000000099abe
- (void)_clearGesture:(id)arg1;	// IMP=0x0000000000099a49
- (void)stopUserInteractionFromExternalGesture;	// IMP=0x0000000000099a37
- (void)startUserInteractionFromExternalGesture;	// IMP=0x0000000000099a25
- (void)endGesturing;	// IMP=0x00000000000999b6
- (void)beginGesturing;	// IMP=0x0000000000099901
- (void)stopDynamicAnimations;	// IMP=0x0000000000099786
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
- (void)dealloc;	// IMP=0x00000000000995a9
@property(nonatomic, getter=isTiltEnabled) _Bool tiltEnabled;
@property(nonatomic, getter=isRotationEnabled) _Bool rotationEnabled;
- (void)_setOneHandedZoomGestureConfiguration:(id)arg1;	// IMP=0x000000000009952f
@property(readonly, nonatomic) UIGestureRecognizer *oneHandedZoomGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *gamepadRightShoulderZoomGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *gamepadLeftShoulderZoomGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *rightSidePanZoomGestureRecognizer;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;	// IMP=0x00000000000994d9
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;	// IMP=0x0000000000098d94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
