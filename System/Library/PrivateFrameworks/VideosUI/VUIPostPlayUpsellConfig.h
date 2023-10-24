//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPostPlayUpsellConfig : NSObject
{
    _Bool _isUpsellOnPlaybackExitDisabled;	// 8 = 0x8
    _Bool _isUpsellOnPIPPlaybackExitEnabled;	// 9 = 0x9
    _Bool _isUpsellLimitedPerShow;	// 10 = 0xa
    _Bool _isUpsellLimitedPerChannel;	// 11 = 0xb
    double _minPlaybackProgressPercentage;	// 16 = 0x10
    unsigned long long _upsellMaxCountPerShow;	// 24 = 0x18
    double _upsellCountDurationPerShow;	// 32 = 0x20
    unsigned long long _upsellMaxCountPerChannel;	// 40 = 0x28
    double _upsellCountDurationPerChannel;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00600000000b6775
@property(nonatomic) double upsellCountDurationPerChannel; // @synthesize upsellCountDurationPerChannel=_upsellCountDurationPerChannel;
@property(nonatomic) unsigned long long upsellMaxCountPerChannel; // @synthesize upsellMaxCountPerChannel=_upsellMaxCountPerChannel;
@property(nonatomic) _Bool isUpsellLimitedPerChannel; // @synthesize isUpsellLimitedPerChannel=_isUpsellLimitedPerChannel;
@property(nonatomic) double upsellCountDurationPerShow; // @synthesize upsellCountDurationPerShow=_upsellCountDurationPerShow;
@property(nonatomic) unsigned long long upsellMaxCountPerShow; // @synthesize upsellMaxCountPerShow=_upsellMaxCountPerShow;
@property(nonatomic) _Bool isUpsellLimitedPerShow; // @synthesize isUpsellLimitedPerShow=_isUpsellLimitedPerShow;
@property(nonatomic) double minPlaybackProgressPercentage; // @synthesize minPlaybackProgressPercentage=_minPlaybackProgressPercentage;
@property(nonatomic) _Bool isUpsellOnPIPPlaybackExitEnabled; // @synthesize isUpsellOnPIPPlaybackExitEnabled=_isUpsellOnPIPPlaybackExitEnabled;
@property(nonatomic) _Bool isUpsellOnPlaybackExitDisabled; // @synthesize isUpsellOnPlaybackExitDisabled=_isUpsellOnPlaybackExitDisabled;
- (id)_trimHistoryArray:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3 atCurrentDate:(id)arg4;	// IMP=0x00000000000b7ed0
- (_Bool)_isHistoryArrayFull:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3;	// IMP=0x00000000000b7da5
- (id)_cleanupHistory:(id)arg1 atCurrentDate:(id)arg2 isShow:(_Bool)arg3;	// IMP=0x00000000000b7aa4
- (void)_recordUpsellHistoryForShowId:(id)arg1 onChannelId:(id)arg2;	// IMP=0x00000000000b76e3
- (_Bool)_isFullScreenPlaybackUIShown;	// IMP=0x00000000000b7698
- (_Bool)canShowUpsellForMediaItem:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x00000000000b6e9c
- (void)setChannelLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2;	// IMP=0x00000000000b6da9
- (void)setShowLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2;	// IMP=0x00000000000b6cb6
- (void)setMinPlaybackProgressPercentageForUpsellOnExit:(double)arg1;	// IMP=0x00000000000b6c05
- (void)enableUpsellOnPIPPlaybackExit:(_Bool)arg1;	// IMP=0x00000000000b6b54
- (void)disableUpsellOnPlaybackExit:(_Bool)arg1;	// IMP=0x00000000000b6aa3
- (void)configureUsingDictionary:(id)arg1;	// IMP=0x00000000000b682d

@end
