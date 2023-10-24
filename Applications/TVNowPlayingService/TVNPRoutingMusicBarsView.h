//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSArray;

@interface TVNPRoutingMusicBarsView : UIView
{
    _Bool _canAnimate;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _internalState;	// 24 = 0x18
    NSArray *_barViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000025850
@property(readonly, copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_removeAnimations;	// IMP=0x0010000000025580
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x00100000000250a0
- (void)_setBarHeights:(double)arg1;	// IMP=0x0010000000024e00
- (MISSING_TYPE *)_setSubviewsHidden: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000024c10
- (void)_updateInternalState;	// IMP=0x0010000000024ba0
- (void)tintColorDidChange;	// IMP=0x0010000000024760
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00100000000246d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000024350

@end

