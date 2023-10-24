//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKGame.h>

@interface GKGame (GKSpringboardSupport)
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002000000002335a
+ (id)platformDisplayString:(id)arg1;	// IMP=0x0020000000029e46
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000029461
+ (struct CGSize)serverImageSizeForIconStyle:(long long)arg1;	// IMP=0x002000000002845b
- (id)logoImageWithMaximumSize:(struct CGSize)arg1;	// IMP=0x0010000000029729
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029331
- (id)loadIconForSize:(struct CGSize)arg1 scale:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000029136
- (id)_imageSourceForIconSize:(struct CGSize)arg1;	// IMP=0x0010000000028cc2
- (id)URLStringForImageWithShineIfNeeded;	// IMP=0x0010000000028cae
- (id)cachedIconForStyle:(long long)arg1;	// IMP=0x0010000000028c28
- (id)iconForStyle:(long long)arg1;	// IMP=0x0010000000028ba2
- (id)imageSourceForIconStyle:(long long)arg1;	// IMP=0x0010000000028ab7
- (id)macBrushForIconStyle:(long long)arg1;	// IMP=0x0010000000028a4e
- (id)imageSourceForiOSIconStyle:(long long)arg1;	// IMP=0x001000000002867a
- (id)_imageURLForIconStyle:(long long)arg1;	// IMP=0x001000000002859c
- (id)localImageSourceWithName:(id)arg1 imageBrush:(id)arg2;	// IMP=0x00100000000283e9
- (id)networkImageSourceWithName:(id)arg1 imageBrush:(id)arg2;	// IMP=0x0010000000028377
- (id)utilityService;	// IMP=0x0010000000028320
@property(readonly, nonatomic, getter=isInstalled) _Bool installedGame;
@end

