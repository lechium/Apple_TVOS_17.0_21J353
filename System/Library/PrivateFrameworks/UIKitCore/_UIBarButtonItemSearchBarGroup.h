//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIBarButtonItemGroup.h"

@class UIBarButtonItem, UISearchBar;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemSearchBarGroup : UIBarButtonItemGroup
{
    _Bool _hadRepresentativeItemBeforeMovingToProvisionalState;	// 8 = 0x8
    _Bool _disabledExpansion;	// 9 = 0x9
    double _contextualExpandedPadding;	// 16 = 0x10
    _Bool _providesRestingMeasurementValues;	// 24 = 0x18
    UIBarButtonItem *_searchItem;	// 32 = 0x20
    UISearchBar *_searchBar;	// 40 = 0x28
    UIBarButtonItem *_searchIconItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000edc567
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000edc51f
- (double)_contextualExpandedPadding;	// IMP=0x0000000000edc4c3
- (_Bool)_disabledExpansion;	// IMP=0x0000000000edc4b3
- (void)setRepresentativeItem:(id)arg1;	// IMP=0x0000000000edc25f
- (void)setBarButtonItems:(id)arg1;	// IMP=0x0000000000edc174
- (id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2;	// IMP=0x0000000000edc135
- (_Bool)_isCritical;	// IMP=0x0000000000edbf96

@end

