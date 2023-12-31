//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKUtilityService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000003ed1
+ (Class)interfaceClass;	// IMP=0x0010000000003ec0
- (oneway void)openGameCenterSettings;	// IMP=0x0020000000005f82
- (oneway void)completeGameRecording;	// IMP=0x0010000000005e23
- (oneway void)recordGameStart;	// IMP=0x0010000000005ddf
- (oneway void)completeMatchRecording:(id)arg1 matchType:(id)arg2;	// IMP=0x0010000000005afb
- (oneway void)recordSharePlayDevices:(id)arg1;	// IMP=0x0010000000005a8e
- (oneway void)recordActiveDevices:(id)arg1;	// IMP=0x0010000000005a21
- (oneway void)recordMatchServer:(id)arg1;	// IMP=0x00100000000059b4
- (oneway void)recordMatchStart:(id)arg1 minPlayers:(id)arg2 maxPlayers:(id)arg3;	// IMP=0x00100000000057db
- (oneway void)reportMultiplayerActivityMetricsEvent:(id)arg1;	// IMP=0x0010000000005723
- (oneway void)reportPerformanceMetricsEvent:(id)arg1;	// IMP=0x001000000000566b
- (oneway void)reportMetricsEventWithTopic:(id)arg1 shouldFlush:(id)arg2 metricsFields:(id)arg3;	// IMP=0x0010000000005571
- (oneway void)viewableThresholdWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005292
- (id)ampController;	// IMP=0x0010000000005279
- (oneway void)openSoftwareUpdateSettings;	// IMP=0x0010000000005235
- (oneway void)openICloudSettings;	// IMP=0x00100000000051f1
- (oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004d55
- (oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000049a8
- (oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000453f
- (oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000444a
- (id)_bagValuesForKeys:(id)arg1;	// IMP=0x00100000000041e5
- (oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003ee4
- (_Bool)requiresAuthentication;	// IMP=0x0010000000003edc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

