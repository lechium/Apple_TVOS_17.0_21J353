//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerController, AVTimeRange, NSArray, NSTimer;
@protocol AVTransportControlsProviding;

__attribute__((visibility("hidden")))
@interface AVScrubbingController : NSObject
{
    NSTimer *_periodicTimer;	// 8 = 0x8
    _Bool _transportBarHonorsActualThumbnailTime;	// 16 = 0x10
    _Bool _showPauseHintWhenNotDriving;	// 17 = 0x11
    id <AVTransportControlsProviding> _transportBar;	// 24 = 0x18
    AVPlayerController *_playerController;	// 32 = 0x20
    AVTimeRange *_displayTimeRangeForNavigation;	// 40 = 0x28
    double _scrubDisplayTimeInitial;	// 48 = 0x30
    double _scrubbingRate;	// 56 = 0x38
    double _scrubDisplayTime;	// 64 = 0x40
    NSArray *_scrubbingRates;	// 72 = 0x48
    double _timeScrubBegan;	// 80 = 0x50
}

+ (id)defaultScrubbingRates;	// IMP=0x006000000000f45a
- (void).cxx_destruct;	// IMP=0x000000000000f2d2
@property(readonly, nonatomic) _Bool showPauseHintWhenNotDriving; // @synthesize showPauseHintWhenNotDriving=_showPauseHintWhenNotDriving;
@property(nonatomic) double timeScrubBegan; // @synthesize timeScrubBegan=_timeScrubBegan;
@property(retain, nonatomic) NSArray *scrubbingRates; // @synthesize scrubbingRates=_scrubbingRates;
@property(nonatomic) double scrubDisplayTime; // @synthesize scrubDisplayTime=_scrubDisplayTime;
@property(nonatomic) double scrubbingRate; // @synthesize scrubbingRate=_scrubbingRate;
@property(nonatomic) double scrubDisplayTimeInitial; // @synthesize scrubDisplayTimeInitial=_scrubDisplayTimeInitial;
@property(retain, nonatomic) AVTimeRange *displayTimeRangeForNavigation; // @synthesize displayTimeRangeForNavigation=_displayTimeRangeForNavigation;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic) id <AVTransportControlsProviding> transportBar; // @synthesize transportBar=_transportBar;
@property(readonly, nonatomic) long long scrubbingRateIndex;
- (void)stopDrivingScrubber;	// IMP=0x000000000000efe1
- (void)startDrivingScrubberBackward;	// IMP=0x000000000000ef24
- (void)startDrivingScrubberForward;	// IMP=0x000000000000ee67
- (void)advanceLeft;	// IMP=0x000000000000edc7
- (void)advanceRight;	// IMP=0x000000000000ed27
- (void)skipBackward;	// IMP=0x000000000000ed0d
- (void)skipForward;	// IMP=0x000000000000ecf3
- (void)_skipBy:(double)arg1;	// IMP=0x000000000000eba3
- (void)advanceToLowerRate;	// IMP=0x000000000000e9f8
- (void)advanceToHigherRate;	// IMP=0x000000000000e893
- (void)reset;	// IMP=0x000000000000e79c
- (long long)_speedIndexOfRate:(double)arg1;	// IMP=0x000000000000e5ef
@property(readonly, nonatomic) _Bool isDrivingScrubber;
- (void)stop;	// IMP=0x000000000000e4d4
- (void)start;	// IMP=0x000000000000e279
- (void)_updateDisplayTimeRangeForNavigation;	// IMP=0x000000000000e1da
- (void)_updateScrubDisplayTimeInitial;	// IMP=0x000000000000e151
- (void)invalidate;	// IMP=0x000000000000e09a
- (void)dealloc;	// IMP=0x000000000000e05c
- (id)initWithTransportBar:(id)arg1;	// IMP=0x000000000000df7f

@end

