//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPlaybackUtilities : NSObject
{
}

+ (_Bool)playerIsLive:(id)arg1;	// IMP=0x00800000000ca301
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(_Bool)arg5;	// IMP=0x00800000000ca29c
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4;	// IMP=0x00800000000ca281
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x00800000000ca217
+ (double)playedThresholdTimeForDuration:(double)arg1;	// IMP=0x00800000000ca169

@end

