//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicKitInternal/NSObject-Protocol.h>

@class MusicKit_SoftLinking_MPCPlaybackIntent;
@protocol MusicKit_SoftLinking_MPCPlayerCommandRequest;

@protocol MusicKit_SoftLinking_MPCPlayerResetTracklistCommand <NSObject>
- (id <MusicKit_SoftLinking_MPCPlayerCommandRequest>)musicKit_resetTracklistCommand_clearUpNextItemsCommandRequest;
- (id <MusicKit_SoftLinking_MPCPlayerCommandRequest>)musicKit_resetTracklistCommand_clearCommandRequest;
- (id <MusicKit_SoftLinking_MPCPlayerCommandRequest>)musicKit_resetTracklistCommand_replaceCommandRequestWithPlaybackIntent:(MusicKit_SoftLinking_MPCPlaybackIntent *)arg1 replaceIntent:(long long)arg2;
@end

