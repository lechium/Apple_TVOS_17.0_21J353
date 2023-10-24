//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSDateFormatter, NSDictionary, NSString, UIDatePicker, UILayoutGuide, UIPanGestureRecognizer, _UIDatePickerCompactDateLabel, _UIDatePickerCompactTimeLabel, _UIDatePickerDataModel, _UIDatePickerOverlayPresentation;

__attribute__((visibility("hidden")))
@interface _UIDatePickerIOSCompactView : UIControl
{
    struct {
        unsigned int isEnabled:1;
        unsigned int implementsCustomDidSelectComponent:1;
    } _flags;	// 128 = 0x80
    NSDateFormatter *_dateFormatterMedium;	// 136 = 0x88
    NSDateFormatter *_dateFormatterShort;	// 144 = 0x90
    UILayoutGuide *_timeViewLayoutGuide;	// 152 = 0x98
    UILayoutGuide *_contentLayoutGuide;	// 160 = 0xa0
    NSDateFormatter *_layoutFormatter;	// 168 = 0xa8
    _Bool _dateOnLeadingSide;	// 176 = 0xb0
    NSArray *_dateTimeConstraints;	// 184 = 0xb8
    _UIDatePickerOverlayPresentation *_presentation;	// 192 = 0xc0
    long long _activeComponent;	// 200 = 0xc8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 208 = 0xd0
    UIDatePicker *_datePicker;	// 216 = 0xd8
    _UIDatePickerDataModel *_data;	// 224 = 0xe0
    _UIDatePickerCompactDateLabel *_dateView;	// 232 = 0xe8
    _UIDatePickerCompactTimeLabel *_timeView;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000001227bc1
@property(readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeView; // @synthesize timeView=_timeView;
@property(readonly, nonatomic) _UIDatePickerCompactDateLabel *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (_Bool)hasDefaultSize;	// IMP=0x0000000001227b59
- (struct CGSize)defaultSize;	// IMP=0x0000000001227b43
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000001227b2d
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x0000000001227b09
- (_Bool)usesAutoLayout;	// IMP=0x0000000001227b01
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x0000000001227af9
@property(readonly, nonatomic) struct UIEdgeInsets appliedInsetsToEdgeOfContent;
- (void)didChangeToday;	// IMP=0x0000000001227ad4
- (void)didReset;	// IMP=0x0000000001227aa6
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x00000000012279e8
- (void)didChangeMinuteInterval;	// IMP=0x000000000122792c
- (void)didChangeMaximumDate;	// IMP=0x00000000012278a9
- (void)didChangeMinimumDate;	// IMP=0x0000000001227826
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x00000000012277a1
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000122768b
- (void)didChangeCalendar;	// IMP=0x00000000012275f1
- (void)didChangeTimeZone;	// IMP=0x0000000001227557
- (void)didChangeLocale;	// IMP=0x00000000012274bd
- (void)didChangeMode;	// IMP=0x000000000122747d
@property(readonly, nonatomic) long long datePickerStyle;
- (void)_reloadTimeViewTimeFormat;	// IMP=0x0000000001227273
- (void)updateTimeZoneDisplay;	// IMP=0x0000000001227261
@property(retain, nonatomic) NSDictionary *overrideAttributes;
- (void)_resignActiveComponentAnimated:(_Bool)arg1;	// IMP=0x0000000001227173
- (void)setActiveComponent:(long long)arg1;	// IMP=0x0000000001227116
- (void)_datePickerPresentation:(id)arg1 didChangeActiveMode:(long long)arg2;	// IMP=0x000000000122704c
- (void)didChangeCompactStyleDelegate;	// IMP=0x0000000001226faf
- (id)createDatePickerForCompactDateLabel:(id)arg1;	// IMP=0x0000000001226dbc
- (id)createDatePickerForCompactTimeLabel:(id)arg1;	// IMP=0x0000000001226d07
- (void)compactDateLabelDidEndEditing:(id)arg1;	// IMP=0x0000000001226cd3
- (void)compactDateLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000001226c9f
- (_Bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000001226c01
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000001226bba
- (void)compactTimeLabelDidEndEditing:(id)arg1;	// IMP=0x0000000001226b2e
- (void)compactTimeLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000001226afa
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x00000000012267eb
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000012267d7
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000012267b3
- (void)_didReceivePanGestureRecognizer:(id)arg1;	// IMP=0x000000000122679c
- (void)updateConstraints;	// IMP=0x00000000012236c8
- (void)tintColorDidChange;	// IMP=0x0000000001223620
@property(readonly, nonatomic) _Bool alignConstraintsToLayoutGuide;
- (void)_updateDateViewTextAlignment;	// IMP=0x0000000001223559
- (void)_updateEnabledStyling;	// IMP=0x00000000012234b1
- (void)_updateUI;	// IMP=0x0000000001223066
- (void)_updateDateBeforeTimeValue;	// IMP=0x0000000001222ca7
- (void)_contentSizeCategoryDidChange:(id)arg1 previousTraits:(id)arg2;	// IMP=0x0000000001222bc6
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000001222b77
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000001222b28
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001222716
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x00000000012226a8

// Remaining properties
@property(readonly, nonatomic) double contentWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) double timeInterval;

@end
