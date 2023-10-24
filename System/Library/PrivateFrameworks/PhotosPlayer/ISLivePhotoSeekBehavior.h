//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ISLivePhotoSeekBehavior
{
    _Bool _isSeeking;	// 8 = 0x8
    _Bool _needsSeek;	// 9 = 0x9
    _Bool _needsTransitionToVideo;	// 10 = 0xa
    CDUnknownBlockType _seekCompletionHandler;	// 16 = 0x10
    CDStruct_1b6d18a9 _seekTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000010ddb
@property(copy, nonatomic) CDUnknownBlockType seekCompletionHandler; // @synthesize seekCompletionHandler=_seekCompletionHandler;
@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
- (long long)behaviorType;	// IMP=0x0000000000010d8e
- (void)_handleDidSeekToSeekTime:(_Bool)arg1;	// IMP=0x0000000000010caa
- (void)_callSeekCompletionHandler:(_Bool)arg1;	// IMP=0x0000000000010c20
- (void)_seekIfNeeded;	// IMP=0x0000000000010b73
- (void)activeDidChange;	// IMP=0x0000000000010a6f
- (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000109c2

@end

