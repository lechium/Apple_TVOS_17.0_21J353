//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol AXMDataSonifierPlaybackObserver <NSObject>

@optional
- (void)dataSonifierScrubbingDidEndAtPosition:(double)arg1;
- (void)dataSonifierScrubbingPositionDidChange:(double)arg1;
- (void)dataSonifierScrubbingDidBeginAtPosition:(double)arg1;
- (void)dataSonifierPlaybackDidEndAtPosition:(double)arg1;
- (void)dataSonifierPlaybackDidResumeAtPosition:(double)arg1;
- (void)dataSonifierPlaybackDidPauseAtPosition:(double)arg1;
- (void)dataSonifierPlaybackProgressDidChange:(double)arg1;
- (void)dataSonifierPlaybackDidBeginAtPosition:(double)arg1;
@end

