//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI30AnalyticsConsentViewController : UIViewController
{
    MISSING_TYPE *layout;	// 8 = 0x8
    MISSING_TYPE *textStackView;	// 56 = 0x38
    MISSING_TYPE *titleLabel;	// 64 = 0x40
    MISSING_TYPE *summaryLabel;	// 72 = 0x48
    MISSING_TYPE *buttonStackView;	// 80 = 0x50
    MISSING_TYPE *shareButton;	// 88 = 0x58
    MISSING_TYPE *doNotShareButton;	// 96 = 0x60
    MISSING_TYPE *featureAreaView;	// 104 = 0x68
    MISSING_TYPE *imageView;	// 112 = 0x70
    MISSING_TYPE *onConsent;	// 120 = 0x78
    MISSING_TYPE *onDismiss;	// 136 = 0x88
    MISSING_TYPE *isPurchaser;	// 152 = 0x98
    MISSING_TYPE *privacyLinkController;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000003930d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000393070
- (void)didTapOptOutButton;	// IMP=0x0000000000392ff0
- (void)didTapOptInButton;	// IMP=0x0000000000392fe0
- (void)doNotSharePressed:(id)arg1;	// IMP=0x0000000000392f30
- (void)sharePressed:(id)arg1;	// IMP=0x0000000000392f20
- (void)viewDidLoad;	// IMP=0x0000000000392ef0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003927b0

@end

