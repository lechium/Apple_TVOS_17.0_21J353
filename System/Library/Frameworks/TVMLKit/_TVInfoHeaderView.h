//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVInfoHeaderView : UIView
{
    UIView *_headerView;	// 8 = 0x8
}

+ (id)infoHeaderViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00100000000e3a5b
- (void).cxx_destruct;	// IMP=0x00000000000e3f34
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)impressionableElementsContainedInDocument:(id)arg1;	// IMP=0x00000000000e3dfb
- (void)layoutSubviews;	// IMP=0x00000000000e3d00
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000e3c5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
