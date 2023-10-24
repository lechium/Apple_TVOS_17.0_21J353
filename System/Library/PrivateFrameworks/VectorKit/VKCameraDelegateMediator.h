//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraDelegateMediator : NSObject
{
    id <VKMapViewCameraDelegate> _cameraDelegate;	// 8 = 0x8
    _Bool _isChangingMapType;	// 16 = 0x10
    unsigned long long _regionChangeCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000083466d
@property(nonatomic) _Bool isChangingMapType; // @synthesize isChangingMapType=_isChangingMapType;
@property(nonatomic) __weak id <VKMapViewCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
- (void)mapLayerWasUnableToAnimate;	// IMP=0x00000000008345ac
- (void)mapLayerWillAnimateToLocation:(CDStruct_2c43369c)arg1;	// IMP=0x0000000000834504
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;	// IMP=0x000000000083447c
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;	// IMP=0x00000000008343f4
- (void)mapLayerNavigationCameraHasStoppedPanning;	// IMP=0x000000000083436c
- (void)mapLayerNavigationCameraHasStartedPanning;	// IMP=0x00000000008342e4
- (void)mapLayerCanZoomOutDidChange:(_Bool)arg1;	// IMP=0x0000000000834246
- (void)mapLayerCanZoomInDidChange:(_Bool)arg1;	// IMP=0x00000000008341a8
- (void)mapLayerCanEnter3DModeDidChange:(_Bool)arg1;	// IMP=0x000000000083410a
- (void)mapLayerDidBecomePitched:(_Bool)arg1;	// IMP=0x000000000083406c
- (id)mapLayerPresentationForAnnotation:(id)arg1;	// IMP=0x0000000000833faa
- (void)mapLayerDidFinishInitialTrackingAnimation;	// IMP=0x0000000000833f22
- (void)mapLayerWillPerformZoomBounceAnimation;	// IMP=0x0000000000833e9a
- (void)mapLayerDidChangeRegionAnimated:(_Bool)arg1;	// IMP=0x0000000000833de6
- (void)mapLayerWillChangeRegionAnimated:(_Bool)arg1;	// IMP=0x0000000000833d33
- (void)mapLayerDidChangeVisibleRegion;	// IMP=0x0000000000833ca5
- (id)init;	// IMP=0x0000000000833c49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
