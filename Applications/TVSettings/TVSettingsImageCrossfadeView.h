//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSTimer, UIImageView, _TVSettingsImageLoaderQueue;

@interface TVSettingsImageCrossfadeView : UIView
{
    NSTimer *_crossfadeTimer;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    _TVSettingsImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_imageProxies;	// 32 = 0x20
    double _crossfadePeriod;	// 40 = 0x28
    double _crossfadeDuration;	// 48 = 0x30
    struct UIEdgeInsets _padding;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000048460
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void)_crossfadeToImage:(id)arg1;	// IMP=0x00100000000481e8
- (void)_loadNextImage:(id)arg1;	// IMP=0x001000000004814a
- (void)_startTimer;	// IMP=0x00100000000480a1
- (void)layoutSubviews;	// IMP=0x0010000000047a2f
- (void)didMoveToSuperview;	// IMP=0x00100000000479cc
- (void)dealloc;	// IMP=0x0010000000047983
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000047896

@end

