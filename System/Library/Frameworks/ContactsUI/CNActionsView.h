//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, NSObject, UIStackView;
@protocol CNActionsViewProtocol;

__attribute__((visibility("hidden")))
@interface CNActionsView : UIView
{
    NSArray *_sortedActionTypes;	// 8 = 0x8
    NSObject<CNActionsViewProtocol> *_actionsDelegate;	// 16 = 0x10
    double _spacing;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    NSMutableDictionary *_actionItemsByType;	// 48 = 0x30
    NSMutableDictionary *_actionViewsByType;	// 56 = 0x38
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00100000000ca7b7
- (void).cxx_destruct;	// IMP=0x00000000000cac73
@property(retain, nonatomic) NSMutableDictionary *actionViewsByType; // @synthesize actionViewsByType=_actionViewsByType;
@property(retain, nonatomic) NSMutableDictionary *actionItemsByType; // @synthesize actionItemsByType=_actionItemsByType;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) __weak NSObject<CNActionsViewProtocol> *actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(retain, nonatomic) NSArray *sortedActionTypes; // @synthesize sortedActionTypes=_sortedActionTypes;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;	// IMP=0x00000000000ca9ac
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000ca942
- (void)updateConstraints;	// IMP=0x00000000000ca7bf
- (void)resetActions;	// IMP=0x00000000000ca4b1
- (void)addActionItem:(id)arg1;	// IMP=0x00000000000c9f18
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000c9e6f

@end

