//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSettingsiTunesMoviesFacade : NSObject
{
    long long _playbackQuality;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000bf8c4
@property(nonatomic) long long playbackQuality; // @synthesize playbackQuality=_playbackQuality;
- (void)_updatePlaybackQuality;	// IMP=0x00100000000bfb17
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000bfab2
- (void)dealloc;	// IMP=0x00100000000bf9b7
- (id)init;	// IMP=0x00100000000bf919

@end

