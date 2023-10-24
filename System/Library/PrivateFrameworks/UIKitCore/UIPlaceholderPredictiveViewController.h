//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPlaceholderPredictiveViewController : UIViewController
{
    _Bool _showsRemoteInputDashViewController;	// 8 = 0x8
}

@property(nonatomic) _Bool showsRemoteInputDashViewController; // @synthesize showsRemoteInputDashViewController=_showsRemoteInputDashViewController;
- (_Bool)requiresKeyboard;	// IMP=0x000000000096c9ec
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (_Bool)hidesExpandableButton;	// IMP=0x000000000096c9dc
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x000000000096c9c3
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x000000000096c5c2
- (id)_currentTextSuggestions;	// IMP=0x000000000096c541
- (_Bool)_isVisibleForAutocorrectionType:(long long)arg1;	// IMP=0x000000000096c47f
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000096c477

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

