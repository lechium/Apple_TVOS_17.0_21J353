//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackOverlayView : UIView
{
    double _value;	// 8 = 0x8
    double _minimumValue;	// 16 = 0x10
    double _maximumValue;	// 24 = 0x18
    double _startValue;	// 32 = 0x20
    double _endValue;	// 40 = 0x28
    UIImageView *_leftFillView;	// 48 = 0x30
    UIImageView *_rightFillView;	// 56 = 0x38
    unsigned int _editingHandle;	// 64 = 0x40
    unsigned int _editing:1;	// 68 = 0x44
    unsigned int _zoomed:1;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000060ab2a
- (void)layoutSubviews;	// IMP=0x000000000060aad4
- (void)setEditingHandle:(int)arg1;	// IMP=0x000000000060aac4
- (void)setIsZoomed:(_Bool)arg1;	// IMP=0x000000000060aaaa
- (void)setMaximumValue:(double)arg1;	// IMP=0x000000000060aa8b
- (void)setMinimumValue:(double)arg1;	// IMP=0x000000000060aa6c
- (void)setEndValue:(double)arg1;	// IMP=0x000000000060aa3f
- (void)setStartValue:(double)arg1;	// IMP=0x000000000060aa12
- (void)setValue:(double)arg1;	// IMP=0x000000000060a9e5
- (void)setEditing:(_Bool)arg1;	// IMP=0x000000000060a948
- (void)_clampValueAndLayout;	// IMP=0x000000000060a8f8
- (void)animateFillFramesAway;	// IMP=0x000000000060a7fe
- (void)_updateRightFill;	// IMP=0x000000000060a710
- (void)_updateLeftFill;	// IMP=0x000000000060a65d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000060a4ff

@end

