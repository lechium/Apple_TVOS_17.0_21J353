//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VSOnscreenCodeWrapperView;
@protocol VSOnscreenCodeViewDelegate;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeContentView : UIView
{
    _Bool _showButtonLockup;	// 8 = 0x8
    id <VSOnscreenCodeViewDelegate> _delegate;	// 16 = 0x10
    VSOnscreenCodeWrapperView *_qrCodeWrapperView;	// 24 = 0x18
    VSOnscreenCodeWrapperView *_websiteWrapperView;	// 32 = 0x20
    VSOnscreenCodeWrapperView *_separatorWrapperView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001d9b9
@property(retain, nonatomic) VSOnscreenCodeWrapperView *separatorWrapperView; // @synthesize separatorWrapperView=_separatorWrapperView;
@property(retain, nonatomic) VSOnscreenCodeWrapperView *websiteWrapperView; // @synthesize websiteWrapperView=_websiteWrapperView;
@property(retain, nonatomic) VSOnscreenCodeWrapperView *qrCodeWrapperView; // @synthesize qrCodeWrapperView=_qrCodeWrapperView;
@property(nonatomic) _Bool showButtonLockup; // @synthesize showButtonLockup=_showButtonLockup;
@property(nonatomic) __weak id <VSOnscreenCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setupLayout;	// IMP=0x000000000001d0bb
- (void)setupSeparatorContainer;	// IMP=0x000000000001d056
- (void)setupWebsiteContainer;	// IMP=0x000000000001cfc1
- (void)setupQRCodeContainer;	// IMP=0x000000000001cf5c
- (void)buttonLockupPressed;	// IMP=0x000000000001cf1f
- (void)updateUIWithViewModel:(id)arg1;	// IMP=0x000000000001ce7f
- (void)setupViews;	// IMP=0x000000000001ce44
- (id)initWithButtonLockup:(_Bool)arg1;	// IMP=0x000000000001cdd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

