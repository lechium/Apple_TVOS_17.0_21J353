//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVObservationController, UIAction;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerAudioEnhancementsMenuProvider
{
    AVObservationController *_observationController;	// 8 = 0x8
    UIAction *_reduceLoudSoundsAction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fcfe7
@property(readonly, nonatomic) UIAction *reduceLoudSoundsAction; // @synthesize reduceLoudSoundsAction=_reduceLoudSoundsAction;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
- (void)_setOption:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x00000000000fcf69
- (void)setAllowOptionsForVideoContent:(_Bool)arg1;	// IMP=0x00000000000fcf63
- (void)_registerOberservers;	// IMP=0x00000000000fcec3
- (void)_updateState;	// IMP=0x00000000000fce33
- (void)_setupActions;	// IMP=0x00000000000fcd89
- (id)children;	// IMP=0x00000000000fccd4
- (void)dealloc;	// IMP=0x00000000000fcc8b
- (id)initWithTitle:(id)arg1 image:(id)arg2 menuOptions:(unsigned long long)arg3;	// IMP=0x00000000000fcc1d

@end

