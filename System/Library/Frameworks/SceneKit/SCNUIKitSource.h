//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNImageSource.h"

@class CALayer, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface SCNUIKitSource : SCNImageSource
{
    id _uiView;	// 8 = 0x8
    id _uiWindow;	// 16 = 0x10
    CALayer *_uiWindowLayer;	// 24 = 0x18
    _Bool _isOpaque;	// 32 = 0x20
    _Bool _windowPreparing;	// 33 = 0x21
}

@property(retain, nonatomic) UIWindow *uiWindow; // @synthesize uiWindow=_uiWindow;
@property(retain, nonatomic) UIView *uiView; // @synthesize uiView=_uiView;
- (void)dealloc;	// IMP=0x000000000028af49
- (_Bool)isOpaque;	// IMP=0x000000000028af39
- (id)textureSource;	// IMP=0x000000000028ae4b
- (id)prepareWindowIfNeeded;	// IMP=0x000000000028abc8
- (_Bool)supportsMetal;	// IMP=0x000000000028abc0
- (id)init;	// IMP=0x000000000028ab91

@end

