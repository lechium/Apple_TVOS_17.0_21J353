//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI19TVSummaryUpNextView : UIView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *thumbnailView;	// 16 = 0x10
    MISSING_TYPE *gymKitIconView;	// 24 = 0x18
    MISSING_TYPE *workoutTitleLabel;	// 32 = 0x20
    MISSING_TYPE *workoutSubtitleLabel;	// 40 = 0x28
    MISSING_TYPE *summaryQueueCountView;	// 48 = 0x30
    MISSING_TYPE *startButton;	// 56 = 0x38
    MISSING_TYPE *doneButton;	// 64 = 0x40
    MISSING_TYPE *onStartButtonTapped;	// 72 = 0x48
    MISSING_TYPE *onDoneButtonTapped;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003903b0
- (void)doneButtonTapped;	// IMP=0x0000000000390300
- (void)startButtonTapped;	// IMP=0x00000000003902e0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038fee0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000038feb0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end
