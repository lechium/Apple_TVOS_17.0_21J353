//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectSubview.h"

__attribute__((visibility("hidden")))
@interface _UIVisualEffectContentView : _UIVisualEffectSubview
{
    _Bool _disableGroupFiltering;	// 136 = 0x88
    _Bool _currentlyDisplayingRequestedEffects;	// 137 = 0x89
}

- (id)description;	// IMP=0x000000000017a98d
- (void)willRemoveSubview:(id)arg1;	// IMP=0x000000000017a939
- (void)didAddSubview:(id)arg1;	// IMP=0x000000000017a861
- (void)applyIdentityFilterEffects;	// IMP=0x000000000017a6e0
- (void)applyRequestedFilterEffects;	// IMP=0x000000000017a55f
- (void)setFilters:(id)arg1;	// IMP=0x000000000017a324
- (void)setDisableGroupFiltering:(_Bool)arg1;	// IMP=0x0000000000179ee5
- (_Bool)disableGroupFiltering;	// IMP=0x0000000000179ed5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000179e4b

@end

