//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVUnifiedPlayerAudioEnhancementsMenuProvider, AVUnifiedPlayerMediaOptionMenuProvider, AVUnifiedPlayerMenuGroupProvider, AVUnifiedPlayerObservingMenuProvider;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerAudioMenuProvider
{
    AVUnifiedPlayerMenuGroupProvider *_standardAudioMenuProvider;	// 8 = 0x8
    AVUnifiedPlayerObservingMenuProvider *_customAudioMenuProvider;	// 16 = 0x10
    AVUnifiedPlayerMediaOptionMenuProvider *_standardAudioMenuMediaOptionMenuProvider;	// 24 = 0x18
    AVUnifiedPlayerAudioEnhancementsMenuProvider *_standardAudioMenuAudioEnhancementsMenuProvider;	// 32 = 0x20
}

+ (id)audioMenuProviderWithMediaOptionsController:(id)arg1;	// IMP=0x00600000000a20bd
- (void).cxx_destruct;	// IMP=0x00000000000a206a
@property(readonly, nonatomic) AVUnifiedPlayerAudioEnhancementsMenuProvider *standardAudioMenuAudioEnhancementsMenuProvider; // @synthesize standardAudioMenuAudioEnhancementsMenuProvider=_standardAudioMenuAudioEnhancementsMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerMediaOptionMenuProvider *standardAudioMenuMediaOptionMenuProvider; // @synthesize standardAudioMenuMediaOptionMenuProvider=_standardAudioMenuMediaOptionMenuProvider;
@property(retain, nonatomic) AVUnifiedPlayerObservingMenuProvider *customAudioMenuProvider; // @synthesize customAudioMenuProvider=_customAudioMenuProvider;
@property(readonly, nonatomic) AVUnifiedPlayerMenuGroupProvider *standardAudioMenuProvider; // @synthesize standardAudioMenuProvider=_standardAudioMenuProvider;
- (id)children;	// IMP=0x00000000000a1fc9
- (void)prepareForDisplay;	// IMP=0x00000000000a1f6d
- (id)initWithTitle:(id)arg1 image:(id)arg2 menuOptions:(unsigned long long)arg3 mediaOptionsController:(id)arg4;	// IMP=0x00000000000a1ca3

@end

