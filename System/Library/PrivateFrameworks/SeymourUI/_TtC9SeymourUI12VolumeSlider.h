//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI12VolumeSlider : UIView
{
    MISSING_TYPE *onVolumeChanged;	// 8 = 0x8
    MISSING_TYPE *sliderView;	// 24 = 0x18
    MISSING_TYPE *stackView;	// 32 = 0x20
    MISSING_TYPE *styleProvider;	// 40 = 0x28
    MISSING_TYPE *timerProvider;	// 96 = 0x60
    MISSING_TYPE *isTracking;	// 136 = 0x88
    MISSING_TYPE *route;	// 144 = 0x90
    MISSING_TYPE *volumeCommitTimer;	// 152 = 0x98
    MISSING_TYPE *volumeController;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000589a0
- (void)didMoveToWindow;	// IMP=0x0000000000057fb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057ee0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000057eb0

@end

