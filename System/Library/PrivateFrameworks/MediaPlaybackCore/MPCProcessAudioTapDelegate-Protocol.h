//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@protocol MPCProcessAudioTapDelegate <NSObject>
- (void)processAudioTapDidReceiveAudioSamples:(void *)arg1 numberOfSamples:(unsigned int)arg2;

@optional
- (void)processAudioTapDidStop;
@end

