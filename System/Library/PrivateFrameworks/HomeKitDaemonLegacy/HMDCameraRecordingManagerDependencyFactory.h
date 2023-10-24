//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFPreferences, NSString;
@protocol HMDFeaturesDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingManagerDependencyFactory : HMFObject
{
}

- (id)createRecordingSessionRetryContextWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2;	// IMP=0x0000000000820e79
- (id)createTimerWithTimeInterval:(double)arg1;	// IMP=0x0000000000820e3c
- (id)createBulkSendSessionReaderWithWorkQueue:(id)arg1 session:(id)arg2 readTimeout:(double)arg3 logIdentifier:(id)arg4;	// IMP=0x0000000000820da2
- (id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x0000000000820d30
- (id)createSessionNotificationTrigger:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000820cbe
- (id)createRecordingSessionWithWorkQueue:(id)arg1 camera:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 localZone:(id)arg5 configuredFragmentDuration:(double)arg6 timelineManager:(id)arg7 homePresenceByPairingIdentity:(id)arg8;	// IMP=0x0000000000820b9d
- (id)createLoadBalancingAttemptWithLocalResponseTimeout:(double)arg1 logIdentifier:(id)arg2;	// IMP=0x0000000000820b3e
- (id)createTimelineManagerWithWorkQueue:(id)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x0000000000820aa4
- (id)createSettingsControl:(id)arg1 accessory:(id)arg2 managementService:(id)arg3;	// IMP=0x0000000000820a14
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly) HMFPreferences *preferences;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

