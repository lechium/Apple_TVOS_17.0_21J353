//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_TVFocusRedirectView.h"

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductInfoView : _TVFocusRedirectView
{
    NSArray *_viewsAboveInfoSection;	// 8 = 0x8
    NSArray *_infoSectionViews;	// 16 = 0x10
    NSArray *_viewsBelowInfoSection;	// 24 = 0x18
    UIView *_defaultFocusView;	// 32 = 0x20
}

+ (id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00100000000a9ac2
- (void).cxx_destruct;	// IMP=0x00000000000abd78
@property(retain, nonatomic) UIView *defaultFocusView; // @synthesize defaultFocusView=_defaultFocusView;
@property(retain, nonatomic) NSArray *viewsBelowInfoSection; // @synthesize viewsBelowInfoSection=_viewsBelowInfoSection;
@property(retain, nonatomic) NSArray *infoSectionViews; // @synthesize infoSectionViews=_infoSectionViews;
@property(retain, nonatomic) NSArray *viewsAboveInfoSection; // @synthesize viewsAboveInfoSection=_viewsAboveInfoSection;
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x00000000000ab86f
- (void)layoutSubviews;	// IMP=0x00000000000aad55
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000aa624
- (id)preferredFocusEnvironments;	// IMP=0x00000000000aa528
- (_Bool)canBecomeFocused;	// IMP=0x00000000000aa47b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
