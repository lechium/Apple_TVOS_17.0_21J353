//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI33ContentUnavailableFixedHeightCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *contentUnavailableView;	// 0 = 0x0
    MISSING_TYPE *contentBottomConstraint;	// 0 = 0x0
    MISSING_TYPE *cellHeightConstraint;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000cf4f0
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000000cf420
- (void)prepareForReuse;	// IMP=0x00000000000cf3f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cf2e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000cf2b0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end

