//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSArray, NSError, VKARWalkingElevationRequestFailureInfo, VKARWalkingFeatureDidUpdateInfo, VKARWalkingFeatureSet, VKNavigationPuckLocationTracingEvent;

@protocol MapEngineDelegate <NSObject>
- (void)didUpdateVerticalYawTo:(double)arg1;
- (void)labelMarkerDidChangeState:(const void *)arg1;
- (void)selectedLabelMarkerWillDisappear:(const void *)arg1;
- (void)labelManagerDidLayout;
- (void)didFinishDaVinciTransition;
- (_Bool)isChangingRegionWithoutAnimating;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)willBecomeFullyDrawn;
- (void)didFinishLoadingDataWithError:(NSError *)arg1;
- (void)didFinishLoadingData;
- (void)didStartLoadingData;
- (_Bool)canChangeVenueFocus;
- (void)locationInHikingToolTipRegion:(unsigned long long)arg1;
- (void)nearestVenueDidChange:(const void *)arg1 building:(const void *)arg2;
- (_Bool)wantsTimerTick;
- (void)didPresent;
- (void)willLayoutWithTimestamp:(double)arg1 withContext:(void *)arg2;

@optional
- (void)puckLocationTracingEvent:(VKNavigationPuckLocationTracingEvent *)arg1;
- (void)injectDebugARUserRouteCoordinate:(struct PolylineCoordinate)arg1;
- (void)injectDebugARFeatures:(NSArray *)arg1;
- (void)arWalkingElevationRequestFailure:(VKARWalkingElevationRequestFailureInfo *)arg1;
- (void)activeARWalkingFeatureDidUpdate:(VKARWalkingFeatureDidUpdateInfo *)arg1;
- (void)arWalkingFeatureSetStateDidUpdate:(VKARWalkingFeatureSet *)arg1;
@end

