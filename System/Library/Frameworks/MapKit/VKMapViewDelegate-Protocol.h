//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSError, NSString, VKARWalkingElevationRequestFailureInfo, VKARWalkingFeatureDidUpdateInfo, VKARWalkingFeatureSet, VKLabelMarker, VKMapView, VKNavigationPuckLocationTracingEvent, VKVenueBuildingFeatureMarker, VKVenueFeatureMarker;

@protocol VKMapViewDelegate <NSObject>

@optional
- (void)mapLayer:(VKMapView *)arg1 puckLocationTracingEvent:(VKNavigationPuckLocationTracingEvent *)arg2;
- (void)mapLayer:(VKMapView *)arg1 arWalkingElevationRequestFailure:(VKARWalkingElevationRequestFailureInfo *)arg2;
- (void)mapLayer:(VKMapView *)arg1 activeARWalkingFeatureDidUpdate:(VKARWalkingFeatureDidUpdateInfo *)arg2;
- (void)mapLayer:(VKMapView *)arg1 arWalkingFeatureSetStateDidUpdate:(VKARWalkingFeatureSet *)arg2;
- (void)mapLayer:(VKMapView *)arg1 locationInHikingToolTipRegion:(unsigned long long)arg2;
- (void)mapLayer:(VKMapView *)arg1 venueWithFocusDidChange:(VKVenueFeatureMarker *)arg2 building:(VKVenueBuildingFeatureMarker *)arg3;
- (void)mapLayer:(VKMapView *)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)mapLayer:(VKMapView *)arg1 willTransitionTo:(long long)arg2;
- (void)mapLayerLabelsDidLayout:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 labelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didFinishChangingMapDisplayStyle:(CDStruct_80aa614a)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;
- (void)mapLayerWillStartFlyoverTour:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)mapLayerARSessionInterruptionEnded:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)mapLayer:(VKMapView *)arg1 didEncounterARError:(NSError *)arg2;
- (void)mapLayerDidExitAR:(VKMapView *)arg1;
- (void)mapLayerWillExitAR:(VKMapView *)arg1;
- (void)mapLayerDidEnterAR:(VKMapView *)arg1;
- (void)mapLayerWillEnterAR:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 canShowFlyoverDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 showingFlyoverDidChange:(_Bool)arg2;
- (void)mapLayerDidChangeSceneState:(VKMapView *)arg1 withState:(unsigned long long)arg2;
- (void)mapLayerDidReloadStylesheet:(VKMapView *)arg1;
- (void)mapLayerDidDraw:(VKMapView *)arg1;
- (void)mapLayerDidFailLoadingTiles:(VKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapLayerDidFinishLoadingTiles:(VKMapView *)arg1;
- (void)mapLayerDidStartLoadingTiles:(VKMapView *)arg1;
@end

