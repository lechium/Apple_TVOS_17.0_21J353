//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKDateTimePicker : NSObject
{
    NSString *_formatString;	// 8 = 0x8
    struct RetainPtr<NSString> _initialValue;	// 16 = 0x10
    WKContentView *_view;	// 24 = 0x18
    struct CGPoint _interactionPoint;	// 32 = 0x20
    struct RetainPtr<UIDatePicker> _datePicker;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000041634a
- (void).cxx_destruct;	// IMP=0x000000000041630c
- (void)setHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x000000000041623d
@property(readonly, nonatomic) double minute;
@property(readonly, nonatomic) double hour;
@property(readonly, nonatomic) NSString *calendarType;
- (void)controlEndEditing;	// IMP=0x0000000000416128
- (void)controlBeginEditing;	// IMP=0x0000000000416050
- (id)controlView;	// IMP=0x0000000000416048
- (void)setDateTimePickerToInitialValue;	// IMP=0x0000000000415f24
- (void)_dateChanged;	// IMP=0x0000000000415e6f
- (RetainPtr_6b9d0b10)dateFormatterForPicker;	// IMP=0x0000000000415d8f
- (id)_sanitizeInputValueForFormatter:(id)arg1;	// IMP=0x0000000000415c9a
- (void)dealloc;	// IMP=0x0000000000415c6b
- (_Bool)shouldForceGregorianCalendar;	// IMP=0x0000000000415c45
- (void)done:(id)arg1;	// IMP=0x0000000000415c3f
- (void)reset:(id)arg1;	// IMP=0x0000000000415b71
- (void)datePickerChanged:(id)arg1;	// IMP=0x0000000000415b5f
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x0000000000415a20

@end

