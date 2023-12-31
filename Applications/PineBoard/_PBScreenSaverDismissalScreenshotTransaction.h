//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class FBSceneSnapshot, PBScreenSaverContentPresentingViewController;

@interface _PBScreenSaverDismissalScreenshotTransaction : BSTransaction
{
    _Bool _shouldUpdateWallpaper;	// 8 = 0x8
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    FBSceneSnapshot *_sceneSnapshot;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001435d2
@property(readonly, nonatomic) _Bool shouldUpdateWallpaper; // @synthesize shouldUpdateWallpaper=_shouldUpdateWallpaper;
@property(readonly, nonatomic) FBSceneSnapshot *sceneSnapshot; // @synthesize sceneSnapshot=_sceneSnapshot;
@property(readonly, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_didFinishWork;	// IMP=0x0010000000143556
- (void)_begin;	// IMP=0x001000000014322c
- (_Bool)_canBeInterrupted;	// IMP=0x0010000000143224
- (id)initWithScreenSaverViewController:(id)arg1 sceneSnapshot:(id)arg2 shouldUpdateWallpaper:(_Bool)arg3;	// IMP=0x0010000000143171

@end

