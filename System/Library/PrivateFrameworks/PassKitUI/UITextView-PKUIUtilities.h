//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class NSString;

@interface UITextView (PKUIUtilities)
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001760d0
+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000176071
+ (void)pkui_styleTextView:(id)arg1;	// IMP=0x0010000000175faa
- (struct CGRect)pkui_textFrame;	// IMP=0x00100000001761b8
- (struct CGRect)pkui_frameForTextFrame:(struct CGRect)arg1;	// IMP=0x001000000017614f
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;	// IMP=0x001000000025a51b
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x001000000025a3d6
- (id)pk_childrenForAppearance;	// IMP=0x001000000025a2c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

