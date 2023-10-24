//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BSUICAPackageView, NSString, TVSSFakeWaveformContent;
@protocol TVSSVisualContent;

@interface TVSSFakeWaveformContentView : UIView
{
    TVSSFakeWaveformContent *_content;	// 8 = 0x8
    BSUICAPackageView *_packageView;	// 16 = 0x10
    UIView *_vibrantView;	// 24 = 0x18
    unsigned long long _visualizedControlState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000117ad0
@property(nonatomic) unsigned long long visualizedControlState; // @synthesize visualizedControlState=_visualizedControlState;
@property(copy, nonatomic) id <TVSSVisualContent> content; // @synthesize content=_content;
- (void)_updateAppearance;	// IMP=0x00100000001177d0
- (void)_startAnimating;	// IMP=0x0010000000117760
- (void)layoutSubviews;	// IMP=0x0010000000117180
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000117130
- (void)didMoveToWindow;	// IMP=0x00100000001170b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000116f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

