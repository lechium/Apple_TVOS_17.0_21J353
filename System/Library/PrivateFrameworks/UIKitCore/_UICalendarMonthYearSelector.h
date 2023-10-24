//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIDatePicker, _UICalendarDataModel;
@protocol _UICalendarMonthYearSelectorDelegate;

__attribute__((visibility("hidden")))
@interface _UICalendarMonthYearSelector : UIView
{
    UIDatePicker *_datePicker;	// 8 = 0x8
    id <_UICalendarMonthYearSelectorDelegate> _delegate;	// 16 = 0x10
    _UICalendarDataModel *_dataModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b708d
@property(retain, nonatomic) _UICalendarDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <_UICalendarMonthYearSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectDate:(id)arg1;	// IMP=0x00000000000b6f4e
- (void)setSelectedMonth:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b6e2d
- (void)setSelectedMonth:(id)arg1;	// IMP=0x00000000000b6e19
- (void)didUpdateVisibleMonth;	// IMP=0x00000000000b6dc2
- (void)didUpdateTimeZone;	// IMP=0x00000000000b6d63
- (void)didUpdateLocale;	// IMP=0x00000000000b6d04
- (void)didUpdateCalendar;	// IMP=0x00000000000b6ca5
- (void)layoutMarginsDidChange;	// IMP=0x00000000000b6c64
- (void)layoutSubviews;	// IMP=0x00000000000b6b17
- (void)_setupViewHierarchy;	// IMP=0x00000000000b68ab
- (id)initWithDataModel:(id)arg1;	// IMP=0x00000000000b6816

@end
