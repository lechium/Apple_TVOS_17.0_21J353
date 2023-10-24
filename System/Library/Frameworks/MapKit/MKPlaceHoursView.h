//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GEOBusinessHours, NSArray, NSDictionary, NSLayoutConstraint, _MKLocalizedHoursBuilder, _MKUILabel;
@protocol MKPlaceHoursViewDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursView : UIView
{
    NSArray *_labels;	// 8 = 0x8
    _MKUILabel *_topLabel;	// 16 = 0x10
    _MKUILabel *_topMessageLabel;	// 24 = 0x18
    _MKUILabel *_topDayOrHourLabel;	// 32 = 0x20
    _MKUILabel *_bottomMessageLabel;	// 40 = 0x28
    _MKUILabel *_collapsableOpenStateLabel;	// 48 = 0x30
    NSLayoutConstraint *_baselineToTop;	// 56 = 0x38
    NSArray *_baselineToBaselineConstraints;	// 64 = 0x40
    NSArray *_baselineToBottomConstraints;	// 72 = 0x48
    NSArray *_topAndBottomLabelConstraints;	// 80 = 0x50
    NSArray *_placeDailyHours;	// 88 = 0x58
    unsigned long long _placeHoursViewOptions;	// 96 = 0x60
    _MKLocalizedHoursBuilder *_hoursBuilder;	// 104 = 0x68
    NSDictionary *_formattedHoursData;	// 112 = 0x70
    GEOBusinessHours *_businessHours;	// 120 = 0x78
    id <MKPlaceHoursViewDelegate> _hoursDelegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000001e004a
@property(nonatomic) __weak id <MKPlaceHoursViewDelegate> hoursDelegate; // @synthesize hoursDelegate=_hoursDelegate;
@property(retain, nonatomic) GEOBusinessHours *businessHours; // @synthesize businessHours=_businessHours;
@property(retain, nonatomic) NSDictionary *formattedHoursData; // @synthesize formattedHoursData=_formattedHoursData;
@property(retain, nonatomic) _MKLocalizedHoursBuilder *hoursBuilder; // @synthesize hoursBuilder=_hoursBuilder;
@property(nonatomic) unsigned long long placeHoursViewOptions; // @synthesize placeHoursViewOptions=_placeHoursViewOptions;
- (_Bool)_shouldCollapseTopMessageLabel;	// IMP=0x00000000001dff64
- (void)_collapseAllLabelsFromOptions;	// IMP=0x00000000001dfd6c
- (void)_updateHoursView;	// IMP=0x00000000001de57d
- (void)_updateOptionsForCollapsingToSingleLineAndColor;	// IMP=0x00000000001de4f9
- (id)_standardLabel;	// IMP=0x00000000001de3e4
- (void)infoCardThemeChanged;	// IMP=0x00000000001de314
- (_Bool)wantsDefaultClipping;	// IMP=0x00000000001de30c
- (void)applyRulesForTopAndBottomLabel;	// IMP=0x00000000001ddd96
- (void)setTopLabel:(id)arg1;	// IMP=0x00000000001ddc3c
@property(readonly, nonatomic) _MKUILabel *topLabel;
- (void)_contentSizeDidChange;	// IMP=0x00000000001dd89c
- (id)hoursGrayColor;	// IMP=0x00000000001dd85e
- (void)_commonInit;	// IMP=0x00000000001dd213
- (id)initWithBusinessHours:(id)arg1;	// IMP=0x00000000001dd148

@end
