//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33TVFilterOptionsListViewController : UIViewController
{
    MISSING_TYPE *layout;	// 8 = 0x8
    MISSING_TYPE *visibility;	// 80 = 0x50
    MISSING_TYPE *dependencies;	// 88 = 0x58
    MISSING_TYPE *lastFocusedIndexPath;	// 0 = 0x0
    MISSING_TYPE *settlingTimer;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *timerProvider;	// 1769300575 = 0x6975625f
    MISSING_TYPE *optionsActionsHeightConstraint;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *optionsActionView;	// 0 = 0x0
    MISSING_TYPE *titleLabel;	// 11150896 = 0xaa2630
    MISSING_TYPE *dataProvider;	// 1740 = 0x6cc
    MISSING_TYPE *metricPublishingDelegate;	// 11150896 = 0xaa2630
}

- (void).cxx_destruct;	// IMP=0x00000000000b35d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000b3570
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000b3500
- (void)handleActionButtonTapped;	// IMP=0x00000000000b34c0
- (void)menuButtonTapped;	// IMP=0x00000000000b3490
- (void)viewDidLoad;	// IMP=0x00000000000b3320
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b2ae0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end
