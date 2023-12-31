//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSHFlipbookSpecification;
@protocol BLSHBacklightEnvironmentSessionProviding, BLSHBacklightPlatformProviderObserver, BLSHFlipbookTelemetry;

@protocol BLSHBacklightPlatformProvider <NSObject>
@property(readonly, nonatomic, getter=isShowingBlankingWindow) _Bool showingBlankingWindow;
@property(readonly, nonatomic) id <BLSHBacklightEnvironmentSessionProviding> sessionProvider;
@property(readonly, nonatomic) double backlightFadeOutDuration;
@property(readonly, nonatomic) double backlightFadeInDuration;
- (void)removeObserver:(id <BLSHBacklightPlatformProviderObserver>)arg1;
- (void)addObserver:(id <BLSHBacklightPlatformProviderObserver>)arg1;
- (void)showBlankingWindow:(_Bool)arg1 withFadeDuration:(double)arg2;

@optional
@property(readonly, nonatomic) _Bool suppressionSupported;
@property(readonly, nonatomic) double backlightDimmingDuration;
@property(readonly, nonatomic) float backlightDimmedFactor;
@property(readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) _Bool useAlwaysOnBrightnessCurve;
@property(readonly, nonatomic) id <BLSHFlipbookTelemetry> flipbookTelemetryDelegate;
@property(readonly, nonatomic) BLSHFlipbookSpecification *flipbookSpecification;
@property(readonly, nonatomic, getter=isAlwaysOnEnabled) _Bool alwaysOnEnabled;
- (void)useAlwaysOnBrightnessCurve:(_Bool)arg1 withRampDuration:(double)arg2;
@end

