//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TVSSCameraZoomButton, UIStackView;
@protocol TVSSCameraLensSwitcherViewDelegate;

@interface TVSSCameraLensSwitcherView : UIView
{
    _Bool _supportsWideCamera;	// 8 = 0x8
    _Bool _supportsUltraWideCamera;	// 9 = 0x9
    _Bool _usingWideForFraming;	// 10 = 0xa
    _Bool _manuallyFraming;	// 11 = 0xb
    _Bool _containsFocusedButton;	// 12 = 0xc
    id <TVSSCameraLensSwitcherViewDelegate> _delegate;	// 16 = 0x10
    double _zoomFactor;	// 24 = 0x18
    UIView *_platterView;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    TVSSCameraZoomButton *_wideLensButton;	// 48 = 0x30
    TVSSCameraZoomButton *_ultraWideLensButton;	// 56 = 0x38
    double _defaultWideZoomFactor;	// 64 = 0x40
    double _defaultUltraWideZoomFactor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000039830
@property(nonatomic) _Bool containsFocusedButton; // @synthesize containsFocusedButton=_containsFocusedButton;
@property(readonly, nonatomic) double defaultUltraWideZoomFactor; // @synthesize defaultUltraWideZoomFactor=_defaultUltraWideZoomFactor;
@property(readonly, nonatomic) double defaultWideZoomFactor; // @synthesize defaultWideZoomFactor=_defaultWideZoomFactor;
@property(retain, nonatomic) TVSSCameraZoomButton *ultraWideLensButton; // @synthesize ultraWideLensButton=_ultraWideLensButton;
@property(retain, nonatomic) TVSSCameraZoomButton *wideLensButton; // @synthesize wideLensButton=_wideLensButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic, getter=isManuallyFraming) _Bool manuallyFraming; // @synthesize manuallyFraming=_manuallyFraming;
@property(nonatomic, getter=isUsingWideForFraming) _Bool usingWideForFraming; // @synthesize usingWideForFraming=_usingWideForFraming;
@property(readonly, nonatomic) _Bool supportsUltraWideCamera; // @synthesize supportsUltraWideCamera=_supportsUltraWideCamera;
@property(readonly, nonatomic) _Bool supportsWideCamera; // @synthesize supportsWideCamera=_supportsWideCamera;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) __weak id <TVSSCameraLensSwitcherViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePlatterAnimated:(_Bool)arg1;	// IMP=0x00100000000393b0
- (void)selectUltraWideLensButton;	// IMP=0x0010000000039070
- (void)selectWideLensButton;	// IMP=0x0010000000038d80
- (void)_updateButtonSelection;	// IMP=0x0010000000038bf0
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000038780
- (void)updateButtonTitleForUltraWideZoomFactor:(double)arg1;	// IMP=0x0010000000038620
- (void)updateButtonTitleForWideZoomFactor:(double)arg1;	// IMP=0x00100000000385b0
- (void)layoutSubviews;	// IMP=0x00100000000384d0
- (id)initWithCurrentZoomFactor:(double)arg1 supportsWideCamera:(_Bool)arg2 supportsUltraWideCamera:(_Bool)arg3 isUsingWideForFraming:(_Bool)arg4 defaultWideZoomFactor:(double)arg5 defaultUltraWideZoomFactor:(double)arg6;	// IMP=0x0010000000037180

@end

