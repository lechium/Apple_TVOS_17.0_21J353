//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIAccessibilityHUDItem, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarSensorActivityView : UIView
{
    long long _iconSize;	// 8 = 0x8
    _UIPortalView *_portalView;	// 16 = 0x10
    UIView *_sensorActivityView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a0521e
@property(retain, nonatomic) UIView *sensorActivityView; // @synthesize sensorActivityView=_sensorActivityView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000a05129
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000a05097
- (void)configurePortalViewIfNeededForTargetScreen:(id)arg1;	// IMP=0x0000000000a04f84
- (void)layoutSubviews;	// IMP=0x0000000000a04e12
- (void)configureSensorViewWithoutPortalIfNeededForTargetScreen:(id)arg1;	// IMP=0x0000000000a04b43

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly, nonatomic) _Bool prefersCenterVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

