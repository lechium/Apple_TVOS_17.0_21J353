//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroupsGridLayout : UICollectionViewFlowLayout
{
    struct CGSize _intrinsicContentSize;	// 8 = 0x8
}

+ (id)layoutForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 numberOfGroups:(unsigned long long)arg3;	// IMP=0x006000000001635c
+ (double)verticalMargin;	// IMP=0x006000000001634e
+ (struct CGSize)itemSizeForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2;	// IMP=0x0060000000016302
+ (unsigned long long)maximumNumberOfGroupsForTraitCollection:(id)arg1;	// IMP=0x0060000000016279
+ (unsigned long long)maximumNumberOfRowsForTraitCollection:(id)arg1;	// IMP=0x006000000001623e
+ (unsigned long long)groupCountPerRowForTraitCollection:(id)arg1;	// IMP=0x0060000000016203
@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;

@end

