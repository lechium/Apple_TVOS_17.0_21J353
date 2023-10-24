//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class PBVolumeSlider, PBVolumeSliderWrapperView;

@interface PBVolumeHUDViewController : UIViewController
{
    _Bool _volumeUpButtonIsDown;	// 8 = 0x8
    _Bool _volumeDownButtonIsDown;	// 9 = 0x9
    PBVolumeSlider *_volumeSlider;	// 16 = 0x10
    PBVolumeSliderWrapperView *_wrapperView;	// 24 = 0x18
    long long _state;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000008a2c0
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) PBVolumeSliderWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) PBVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) _Bool volumeDownButtonIsDown; // @synthesize volumeDownButtonIsDown=_volumeDownButtonIsDown;
@property(nonatomic) _Bool volumeUpButtonIsDown; // @synthesize volumeUpButtonIsDown=_volumeUpButtonIsDown;
- (_Bool)controlCenterActive;	// IMP=0x001000000008a1a1
- (_Bool)stretchVolumeSliderForMinimumVolumeUpdateIfNeeded;	// IMP=0x001000000008a12f
- (_Bool)stretchVolumeSliderForMaximumVolumeUpdateIfNeeded;	// IMP=0x001000000008a0c1
- (void)noteVolumeDownWasHit:(_Bool)arg1;	// IMP=0x0010000000089f1a
- (void)noteVolumeUpWasHit:(_Bool)arg1;	// IMP=0x0010000000089eb1
- (void)dismissVolumeHUDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000089a7a
- (void)stretchVolumeHUDWithLevel:(id)arg1;	// IMP=0x0010000000089706
- (void)updateVolumeHUDWithLevel:(id)arg1;	// IMP=0x001000000008938e
- (void)initializeVolumeHUDWithImage:(id)arg1 level:(id)arg2;	// IMP=0x0010000000088e6e

@end
