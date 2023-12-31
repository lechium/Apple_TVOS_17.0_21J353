//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSString, NSTimer, TVSSWaveformData, TVSSWaveformSettings, UIColor;

@interface TVSSWaveformView : UIView
{
    TVSSWaveformData *_waveformData;	// 8 = 0x8
    UIColor *_fillColor;	// 16 = 0x10
    NSString *_remoteRouteSymbol;	// 24 = 0x18
    unsigned long long _context;	// 32 = 0x20
    CALayer *_contentLayer;	// 40 = 0x28
    CALayer *_fallbackLayer;	// 48 = 0x30
    UIView *_barsView;	// 56 = 0x38
    UIView *_barsContainerView;	// 64 = 0x40
    NSArray *_bars;	// 72 = 0x48
    TVSSWaveformSettings *_settings;	// 80 = 0x50
    NSTimer *_transitionTimer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000101eb0
@property(retain, nonatomic) NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(retain, nonatomic) TVSSWaveformSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSArray *bars; // @synthesize bars=_bars;
@property(retain, nonatomic) UIView *barsContainerView; // @synthesize barsContainerView=_barsContainerView;
@property(retain, nonatomic) UIView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) CALayer *fallbackLayer; // @synthesize fallbackLayer=_fallbackLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *remoteRouteSymbol; // @synthesize remoteRouteSymbol=_remoteRouteSymbol;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) TVSSWaveformData *waveformData; // @synthesize waveformData=_waveformData;
- (void)updateVisualStyle;	// IMP=0x00100000001019b0
- (void)applyContext:(unsigned long long)arg1;	// IMP=0x00100000001014a0
- (void)updateLayers;	// IMP=0x00100000001012f0
- (void)tintColorDidChange;	// IMP=0x00100000001010a0
- (void)layoutSubviews;	// IMP=0x0010000000100a20
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2;	// IMP=0x00100000001003f0

@end

