//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CADisplayLink, MISSING_TYPE, NSCalendar, NSDateComponents, NSDateFormatter, UILabel;

@interface TVSSClockView : UIView
{
    NSCalendar *_calendar;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    NSDateComponents *_lastDateComponents;	// 24 = 0x18
    UILabel *_timeLabel;	// 32 = 0x20
    NSDateFormatter *_formatter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c2ac0
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) NSDateComponents *lastDateComponents; // @synthesize lastDateComponents=_lastDateComponents;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void)_significantTimeChange:(id)arg1;	// IMP=0x00100000000c2920
- (void)_updateEffect;	// IMP=0x00100000000c27c0
- (void)_setClockDate:(id)arg1;	// IMP=0x00100000000c2660
- (void)_handleDisplayLink:(id)arg1;	// IMP=0x00100000000c25d0
- (void)_willDisappear;	// IMP=0x00100000000c2580
- (void)_clockWillAppear;	// IMP=0x00100000000c2350
- (id)viewForLastBaselineLayout;	// IMP=0x00100000000c2320
- (id)viewForFirstBaselineLayout;	// IMP=0x00100000000c22f0
- (MISSING_TYPE *)willMoveToWindow: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000c2250
- (void)dealloc;	// IMP=0x00100000000c21c0
- (id)init;	// IMP=0x00100000000c1c00

@end

