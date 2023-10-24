//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPBaseFloatingContentControl.h>

@class UIImageView, UILabel;

@interface TVSSCameraFramingButton : TVSPBaseFloatingContentControl
{
    UIImageView *_symbolImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

+ (id)configurationForUserInterfaceStyle:(long long)arg1 controlState:(unsigned long long)arg2;	// IMP=0x00400000000b2640
- (void).cxx_destruct;	// IMP=0x00200000000b2a50
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
- (void)customizeAppearanceForControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000b2870
- (id)foregroundViews;	// IMP=0x00100000000b25c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000b2010

@end

