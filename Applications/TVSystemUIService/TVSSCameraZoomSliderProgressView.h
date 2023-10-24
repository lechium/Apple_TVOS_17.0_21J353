//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface TVSSCameraZoomSliderProgressView : UIView
{
    float _progress;	// 8 = 0x8
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=_progressCenter) struct CGPoint progressCenter;
- (struct CGSize)_fillSize;	// IMP=0x00100000000a2210
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000a21c0
- (void)tintColorDidChange;	// IMP=0x00100000000a2130
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000000a1da0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000a1cc0

@end

