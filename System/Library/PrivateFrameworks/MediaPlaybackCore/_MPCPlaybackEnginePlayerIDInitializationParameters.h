//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEnginePlayerIDInitializationParameters : NSObject
{
    MPNowPlayingInfoCenter *_nowPlayingInfoCenter;	// 8 = 0x8
    MPRemoteCommandCenter *_remoteCommandCenter;	// 16 = 0x10
    AVAudioSession *_audioSession;	// 24 = 0x18
    NSString *_playerID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000295f2e
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // @synthesize remoteCommandCenter=_remoteCommandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *nowPlayingInfoCenter; // @synthesize nowPlayingInfoCenter=_nowPlayingInfoCenter;
- (id)initWithPlayerID:(id)arg1;	// IMP=0x0000000000295e1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

