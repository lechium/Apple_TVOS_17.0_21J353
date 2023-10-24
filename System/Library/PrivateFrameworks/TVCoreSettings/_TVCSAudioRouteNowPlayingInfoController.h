//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRNowPlayingController, NSString;
@protocol _TVCSAudioRouteNowPlayingInfoDecoratingDelegate;

__attribute__((visibility("hidden")))
@interface _TVCSAudioRouteNowPlayingInfoController : NSObject
{
    NSString *_routeID;	// 8 = 0x8
    MRNowPlayingController *_nowPlayingController;	// 16 = 0x10
    long long _playbackState;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    id <_TVCSAudioRouteNowPlayingInfoDecoratingDelegate> _delegate;	// 40 = 0x28
}

+ (long long)_playbackStateFromMRPlaybackState:(unsigned int)arg1;	// IMP=0x001000000003dab1
- (void).cxx_destruct;	// IMP=0x000000000003daf4
@property(nonatomic) __weak id <_TVCSAudioRouteNowPlayingInfoDecoratingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (void)_updateNowPlayingInfoWithResponse:(id)arg1;	// IMP=0x000000000003d986
- (void)controller:(id)arg1 didUpdateResponse:(id)arg2;	// IMP=0x000000000003d8e0
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;	// IMP=0x000000000003d83a
@property(readonly, copy) NSString *debugDescription;
- (id)initWithRouteID:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000003d639

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

