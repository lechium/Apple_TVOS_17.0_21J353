//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/NSObject-Protocol.h>

@class CLCircularRegion, CLLocation, GEOMapItemStorage, NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID, RTDiagnosticOptions, RTEnumerationOptions, RTEstimatedLocationOptions, RTFamiliarityIndexOptions, RTLocationsForTripSegmentFetchOptions, RTPlaceInferenceOptions, RTPredictedLocationOfInterest, RTStoredElevationEnumerationOptions, RTStoredLocationEnumerationContext, RTStoredTripSegmentFetchOptions, RTStoredVehicleFetchOptions, RTStoredVisitFetchOptions, RTTripSegmentMetadataFetchOptions;

@protocol RTDaemonProtocol <NSObject>
- (void)fetchElevationsWithOptions:(RTStoredElevationEnumerationOptions *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)addElevations:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (void)deleteTripSegmentWithUUID:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)fetchTripSegmentMetadataWithOptions:(RTTripSegmentMetadataFetchOptions *)arg1 reply:(void (^)(RTTripSegmentMetadata *, NSError *))arg2;
- (void)fetchVehiclesWithOptions:(RTStoredVehicleFetchOptions *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsForTripSegmentWithOptions:(RTLocationsForTripSegmentFetchOptions *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsCountForTripSegmentWithOptions:(RTLocationsForTripSegmentFetchOptions *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)fetchTripSegmentsWithOptions:(RTStoredTripSegmentFetchOptions *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)userInteractionWithPredictedLocationOfInterest:(RTPredictedLocationOfInterest *)arg1 interaction:(unsigned long long)arg2 feedback:(NSString *)arg3 geoMapItem:(GEOMapItemStorage *)arg4 reply:(void (^)(NSError *))arg5;
- (void)fetchEnumerableObjectsWithOptions:(RTEnumerationOptions *)arg1 offset:(NSNumber *)arg2 reply:(void (^)(NSArray *, NSNumber *, NSError *))arg3;
- (void)fetchEstimatedLocationAtDate:(NSDate *)arg1 options:(RTEstimatedLocationOptions *)arg2 reply:(void (^)(CLLocation *, NSError *))arg3;
- (void)fetchFamiliarityIndexResultsWithOptions:(RTFamiliarityIndexOptions *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchStoredLocationsWithContext:(RTStoredLocationEnumerationContext *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLookbackWindowStarDateWithLocation:(CLLocation *)arg1 reply:(void (^)(NSDate *, NSError *))arg2;
- (void)fetchFormattedPostalAddressesFromMeCard:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchPlaceInferencesWithOptions:(RTPlaceInferenceOptions *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)extendLifetimeOfVisitsWithIdentifiers:(NSSet *)arg1 reply:(void (^)(NSError *))arg2;
- (void)removeVisitWithIdentifier:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setHintForRegionState:(long long)arg1 significantRegion:(CLCircularRegion *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)fetchDedupedLocationOfInterestIdentifiersWithIdentifier:(NSUUID *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)removeLocationOfInterestWithIdentifier:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 type:(long long)arg2 customLabel:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 customLabel:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 type:(long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 mapItemStorage:(GEOMapItemStorage *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateLocationOfInterestWithIdentifier:(NSUUID *)arg1 type:(long long)arg2 mapItemStorage:(GEOMapItemStorage *)arg3 customLabel:(NSString *)arg4 reply:(void (^)(RTLocationOfInterest *, NSError *))arg5;
- (void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(GEOMapItemStorage *)arg2 customLabel:(NSString *)arg3 reply:(void (^)(RTLocationOfInterest *, NSError *))arg4;
- (void)fetchLocationOfInterestForRegion:(CLCircularRegion *)arg1 reply:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (void)fetchLocationOfInterestAtLocation:(CLLocation *)arg1 reply:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchLocationOfInterestWithIdentifier:(NSUUID *)arg1 reply:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)stopMonitoringVehicleEventsWithReply:(void (^)(NSError *))arg1;
- (void)startMonitoringVehicleEventsWithReply:(void (^)(NSError *))arg1;
- (void)engageInVehicleEventWithIdentifier:(NSUUID *)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 location:(CLLocation *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 geoMapItem:(GEOMapItemStorage *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 photo:(NSData *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateVehicleEventWithIdentifier:(NSUUID *)arg1 notes:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)clearAllVehicleEventsWithReply:(void (^)(NSError *))arg1;
- (void)vehicleEventAtLocation:(CLLocation *)arg1 notes:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)fetchLastVehicleEventsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)setTargetUserSession:(_Bool)arg1;
- (void)setRestorationIdentifier:(NSString *)arg1;
- (void)fetchMonitoredScenarioTriggerTypesWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)fetchTransitionsBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchPredictedExitDatesFromLocation:(CLLocation *)arg1 onDate:(NSDate *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchPathToDiagnosticFilesWithOptions:(RTDiagnosticOptions *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)processHindsightVisitsWithReply:(void (^)(NSError *))arg1;
- (void)fetchStoredVisitsWithOptions:(RTStoredVisitFetchOptions *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)stopLeechingLowConfidenceVisitsWithReply:(void (^)(NSError *))arg1;
- (void)startLeechingLowConfidenceVisitsWithReply:(void (^)(NSError *))arg1;
- (void)stopLeechingVisitsWithReply:(void (^)(NSError *))arg1;
- (void)startLeechingVisitsWithReply:(void (^)(NSError *))arg1;
- (void)stopMonitoringVisitsWithReply:(void (^)(NSError *))arg1;
- (void)startMonitoringVisitsWithReply:(void (^)(NSError *))arg1;
- (void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(void (^)(NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchPredictedLocationsOfInterestOnDate:(NSDate *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(NSString *)arg1 location:(NSString *)arg2 calendarIdentifier:(NSString *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchRoutineModeFromLocation:(CLLocation *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (void)fetchAllLocationsOfInterestForSettingsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)updateCloudSyncProvisionedForAccount:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)fetchCloudSyncAuthorizationStateWithReply:(void (^)(long long, NSError *))arg1;
- (void)clearRoutineWithReply:(void (^)(NSError *))arg1;
- (void)setRoutineEnabled:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
- (void)fetchRoutineEnabledWithReply:(void (^)(_Bool))arg1;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(CLLocation *)arg1 startDate:(NSDate *)arg2 timeInterval:(double)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(CLLocation *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
@end

