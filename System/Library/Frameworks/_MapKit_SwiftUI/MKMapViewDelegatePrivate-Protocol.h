//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <_MapKit_SwiftUI/MKMapViewDelegate-Protocol.h>

@class GEORouteMatch, MKAnnotationView, MKMapView, NSError, NSString, UIControl, UITouch, VKLabelMarker, VKNavigationPuckLocationTracingEvent, VKVenueBuildingFeatureMarker, VKVenueFeatureMarker;

@protocol MKMapViewDelegatePrivate <MKMapViewDelegate>

@optional
- (void)mapView:(MKMapView *)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(_Bool)arg4 tiltDirection:(long long)arg5;
- (void)mapView:(MKMapView *)arg1 didGetHikingToolTipRegionId:(unsigned long long)arg2;
- (void)mapView:(MKMapView *)arg1 didUpdateYaw:(double)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeDisplayedFloorOrdinal:(short)arg2 forVenue:(VKVenueFeatureMarker *)arg3;
- (void)mapView:(MKMapView *)arg1 didChangeFocusedVenue:(VKVenueFeatureMarker *)arg2 focusedBuilding:(VKVenueBuildingFeatureMarker *)arg3;
- (void)mapView:(MKMapView *)arg1 calloutPrimaryActionTriggeredForAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 calloutPrimaryActionTriggeredForLabelMarker:(VKLabelMarker *)arg2;
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(MKMapView *)arg1;
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(MKMapView *)arg1;
- (void)mapViewNavigationCameraHasStoppedPanning:(MKMapView *)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(MKMapView *)arg1;
- (GEORouteMatch *)mapViewCurrentRouteMatch:(MKMapView *)arg1;
- (void)mapViewDidFinishCalloutExpansion:(MKMapView *)arg1;
- (void)mapViewCompass3DButtonTapped:(MKMapView *)arg1;
- (_Bool)mapViewCompass3DButtonEnabled:(MKMapView *)arg1;
- (struct CGPoint)mapView:(MKMapView *)arg1 focusPointForPoint:(struct CGPoint)arg2 gesture:(long long)arg3;
- (void)mapView:(MKMapView *)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(_Bool)arg5 tiltDirection:(long long)arg6;
- (void)mapView:(MKMapView *)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;
- (void)mapViewDidStopUserInteraction:(MKMapView *)arg1;
- (void)mapViewDidStartUserInteraction:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapView:(MKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (void)mapView:(MKMapView *)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;
- (void)mapViewWillStartFlyoverTour:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 showingFlyoverDidChange:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 canShowFlyoverDidChange:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 didBecomePitched:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 canZoomInDidChange:(_Bool)arg2;
- (void)_mapView:(MKMapView *)arg1 calloutDidAppearForAnnotationView:(MKAnnotationView *)arg2;
- (void)mapViewDidAnimateInAnnotationViews:(MKMapView *)arg1;
- (void)mapViewWillAnimateInAnnotationViews:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 didDeselectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 didSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 willSelectLabelMarker:(VKLabelMarker *)arg2;
- (_Bool)mapView:(MKMapView *)arg1 shouldSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)mapView:(MKMapView *)arg1 labelMarker:(VKLabelMarker *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (_Bool)mapViewShouldHandleTapToDeselect:(MKMapView *)arg1;
- (_Bool)mapView:(MKMapView *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeMapType:(unsigned long long)arg2;
- (void)mapView:(MKMapView *)arg1 didPerformPitchAction:(_Bool)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;
- (double)mapView:(MKMapView *)arg1 shouldDelayTapResponse:(UITouch *)arg2 onAnnotationView:(MKAnnotationView *)arg3 forDuration:(double)arg4;
- (void)mapViewDidFinishInitialUserTrackingModeAnimation:(MKMapView *)arg1;
- (_Bool)_mapViewCanChangeUserTrackingModeWhenRegionDidChange:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 puckLocationTracingEvent:(VKNavigationPuckLocationTracingEvent *)arg2;
- (void)mapView:(MKMapView *)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)mapViewARSessionInterruptionEnded:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)mapView:(MKMapView *)arg1 didEncounterARError:(NSError *)arg2;
- (void)mapViewDidExitAR:(MKMapView *)arg1;
- (void)mapViewDidEnterAR:(MKMapView *)arg1;
- (void)mapViewWillEnterAR:(MKMapView *)arg1;
- (void)_mapView:(MKMapView *)arg1 willDeselectLabelMarker:(VKLabelMarker *)arg2;
- (void)_mapView:(MKMapView *)arg1 willDeselectAnnotationView:(MKAnnotationView *)arg2;
@end

