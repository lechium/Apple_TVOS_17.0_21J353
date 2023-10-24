//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInterfaceActionGroupView.h"

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView
{
    _Bool _scrollableHeaderViewHasRealContent;	// 8 = 0x8
    UIAlertController *_alertController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f0ba3
@property(nonatomic) _Bool scrollableHeaderViewHasRealContent; // @synthesize scrollableHeaderViewHasRealContent=_scrollableHeaderViewHasRealContent;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void)_applyVisualStyle;	// IMP=0x00000000000f0a2e
- (_Bool)_shouldInstallContentGuideConstraints;	// IMP=0x00000000000f0a26
- (_Bool)_shouldShowSeparatorAboveActionsSequenceView;	// IMP=0x00000000000f09dd
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;	// IMP=0x00000000000f0903
- (id)_alertController;	// IMP=0x00000000000f08ea
- (id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;	// IMP=0x00000000000f086e

@end
