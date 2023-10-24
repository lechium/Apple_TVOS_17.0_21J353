//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter, NSDictionary, NSString, NSTextContentStorage, UILabel, UIView, _UIDatePickerCalendarTime, _UIDatePickerOverlayPresentation, _UIPassthroughScrollInteraction, _UITextLayoutControllerBase;
@protocol _UIDatePickerCompactTimeLabelDelegate, _UITextLayoutController;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCompactTimeLabel
{
    struct {
        unsigned int needsLabelUpdateOnResignFirstResponder:1;
        unsigned int deferringHoverStateUpdate:1;
        unsigned int highlightedForTouch:1;
    } _flags;	// 128 = 0x80
    struct CGRect _hourRect;	// 136 = 0x88
    struct CGRect _minuteRect;	// 168 = 0xa8
    struct CGRect _timeOfDayRect;	// 200 = 0xc8
    NSDateFormatter *_formatter;	// 232 = 0xe8
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;	// 240 = 0xf0
    NSTextContentStorage *_textContentStorage;	// 248 = 0xf8
    long long _highlightedScope;	// 256 = 0x100
    UIView *_touchHighlightedView;	// 264 = 0x108
    _Bool _tapInteractionControlledExternally;	// 272 = 0x110
    id <_UIDatePickerCompactTimeLabelDelegate> _selectionDelegate;	// 280 = 0x118
    _UIDatePickerOverlayPresentation *_overlayPresentation;	// 288 = 0x120
    _UIDatePickerCalendarTime *_selectedTime;	// 296 = 0x128
    NSDictionary *_overrideAttributes;	// 304 = 0x130
    UILabel *_label;	// 312 = 0x138
    UILabel *_hourLabel;	// 320 = 0x140
    UILabel *_minuteLabel;	// 328 = 0x148
    UILabel *_timeOfDayLabel;	// 336 = 0x150
    UIView *_inputBackgroundView;	// 344 = 0x158
    unsigned long long _currentState;	// 352 = 0x160
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x0000000000e6462e
@property(readonly, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // @synthesize passthroughInteraction=_passthroughInteraction;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(readonly, nonatomic) UILabel *timeOfDayLabel; // @synthesize timeOfDayLabel=_timeOfDayLabel;
@property(readonly, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(readonly, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSDictionary *overrideAttributes; // @synthesize overrideAttributes=_overrideAttributes;
@property(nonatomic) _Bool tapInteractionControlledExternally; // @synthesize tapInteractionControlledExternally=_tapInteractionControlledExternally;
@property(readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(retain, nonatomic) _UIDatePickerOverlayPresentation *overlayPresentation; // @synthesize overlayPresentation=_overlayPresentation;
@property(nonatomic) __weak id <_UIDatePickerCompactTimeLabelDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (long long)_inputScopeForPointerLocation:(struct CGPoint)arg1;	// IMP=0x0000000000e6444d
- (void)_expandedComponentRectForHours:(struct CGRect *)arg1 minuteRect:(struct CGRect *)arg2 timeOfDayRect:(struct CGRect *)arg3;	// IMP=0x0000000000e63fe0
- (void)timeLabelDidEndEditing:(id)arg1;	// IMP=0x0000000000e63f94
- (void)timeLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000000e63f48
- (void)timeLabelDidResignFirstResponder:(id)arg1;	// IMP=0x0000000000e63ef0
- (void)timeLabelDidFailToBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e63edc
- (void)timeLabelDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e63ec5
- (void)timeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e63e79
- (_Bool)timeLabelCanBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e63e71
- (_Bool)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1;	// IMP=0x0000000000e63e69
- (long long)keyboardTypeForTimeLabel:(id)arg1;	// IMP=0x0000000000e63e5e
- (void)timeLabel:(id)arg1 didUpdateText:(id)arg2;	// IMP=0x0000000000e63e4c
- (_Bool)timeLabel:(id)arg1 didReceiveText:(id)arg2;	// IMP=0x0000000000e63a7d
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000000e639e5
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x0000000000e639d3
@property(nonatomic, getter=isPassthroughInteractionEnabled) _Bool passthroughInteractionEnabled;
- (void)_updateSelectedDateComponentsFromInput;	// IMP=0x0000000000e637e1
- (void)_updateInputFieldFromSelectedDateComponents;	// IMP=0x0000000000e6356a
- (void)willBeginWritingInScribbleInteraction;	// IMP=0x0000000000e6352b
- (void)_reloadWithDate:(id)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000e63426
- (void)reloadWithDate:(id)arg1;	// IMP=0x0000000000e63412
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(_Bool)arg3 displaysTimeZone:(_Bool)arg4;	// IMP=0x0000000000e63150
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e63081
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000e62fe2
- (void)activateLabel;	// IMP=0x0000000000e62c3a
- (void)didTapInputLabel:(id)arg1;	// IMP=0x0000000000e62b9c
- (id)_currentDateForInput;	// IMP=0x0000000000e62a30
- (void)_updateLayoutRectsForRanges:(CDStruct_a33ff3ce)arg1;	// IMP=0x0000000000e6267d
- (void)_updateTextContentStorage;	// IMP=0x0000000000e62457
- (void)_updateInputFieldLayoutForCurrentState;	// IMP=0x0000000000e621bb
- (void)_updateTimeFormatIfNeeded;	// IMP=0x0000000000e62005
- (void)stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x0000000000e61fa4
- (void)pushCurrentStateIntoUIAndNotify;	// IMP=0x0000000000e61f28
- (void)pushCurrentStateIntoUI;	// IMP=0x0000000000e61d67
- (id)updateHoverLabelForAttributedString:(id)arg1 ranges:(CDStruct_a33ff3ce)arg2;	// IMP=0x0000000000e61aa8
- (void)_updateHoverStateLabelsIfNeeded;	// IMP=0x0000000000e61884
- (void)setHighlightedForTouch:(_Bool)arg1;	// IMP=0x0000000000e6173c
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;	// IMP=0x0000000000e615d9
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000e615c4
- (void)applyTextAttributesForState:(unsigned long long)arg1 inputScope:(long long)arg2 updater:(CDUnknownBlockType)arg3;	// IMP=0x0000000000e613c7
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)_updateEnabledStyling;	// IMP=0x0000000000e610ee
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000e610ad
- (id)font;	// IMP=0x0000000000e6105d
- (void)setFont:(id)arg1;	// IMP=0x0000000000e60fd1
- (struct CGRect)timeOfDayRect;	// IMP=0x0000000000e60f41
- (struct CGRect)minuteRect;	// IMP=0x0000000000e60eb1
- (struct CGRect)hourRect;	// IMP=0x0000000000e60e21
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;	// IMP=0x0000000000e60350

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
