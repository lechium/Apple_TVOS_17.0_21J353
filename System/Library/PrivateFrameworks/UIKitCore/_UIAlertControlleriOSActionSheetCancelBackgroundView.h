//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSActionSheetCancelBackgroundView : UIView
{
    UIView *backgroundView;	// 8 = 0x8
    UIView *highlightBackgroundView;	// 16 = 0x10
    UIView *highlightView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000feade5
- (void)setPressed:(_Bool)arg1;	// IMP=0x0000000000feaddf
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000fead7a
- (void)setRoundedCornerPosition:(unsigned long long)arg1;	// IMP=0x0000000000feaca8
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x0000000000feac3f
- (void)setCornerRadius:(double)arg1;	// IMP=0x0000000000feabd6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000fea956

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

