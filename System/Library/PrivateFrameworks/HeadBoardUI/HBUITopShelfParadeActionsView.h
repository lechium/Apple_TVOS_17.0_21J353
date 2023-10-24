//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HBUITopShelfParadeButton;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeActionsView : UIView
{
    HBUITopShelfParadeButton *_primaryActionButton;	// 8 = 0x8
    HBUITopShelfParadeButton *_secondaryActionButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000109d2
@property(readonly, nonatomic) HBUITopShelfParadeButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(readonly, nonatomic) HBUITopShelfParadeButton *primaryActionButton; // @synthesize primaryActionButton=_primaryActionButton;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000108f1
- (id)preferredFocusEnvironments;	// IMP=0x0000000000010877
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000103ec

@end

