//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSettingsMusicAudioQualityFacade : NSObject
{
    long long _audioQuality;	// 8 = 0x8
}

+ (long long)_audioQualityForMPMusicResolution:(long long)arg1;	// IMP=0x004000000007e8b6
+ (long long)_MPMusicResolutionForAudioQuality:(long long)arg1;	// IMP=0x001000000007e89c
+ (id)sharedInstance;	// IMP=0x001000000007e51e
@property(nonatomic) long long audioQuality; // @synthesize audioQuality=_audioQuality;
- (void)_qualityDidChange:(id)arg1;	// IMP=0x001000000007e826
@property(nonatomic) _Bool spatialAudio;
- (id)init;	// IMP=0x001000000007e573

@end

