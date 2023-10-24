//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIShelfLayoutSection : NSObject
{
    long long _numberOfItems;	// 8 = 0x8
    struct CGRect *_itemFrames;	// 16 = 0x10
    double _sectionHeaderHorizontalOffset;	// 24 = 0x18
    double _sectionHeaderVerticalBump;	// 32 = 0x20
    struct CGRect _itemsBoundingFrame;	// 40 = 0x28
    struct CGRect _sectionHeaderFrame;	// 72 = 0x48
    struct UIEdgeInsets _sectionInset;	// 104 = 0x68
}

@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double sectionHeaderVerticalBump; // @synthesize sectionHeaderVerticalBump=_sectionHeaderVerticalBump;
@property(nonatomic) double sectionHeaderHorizontalOffset; // @synthesize sectionHeaderHorizontalOffset=_sectionHeaderHorizontalOffset;
@property(nonatomic) struct CGRect sectionHeaderFrame; // @synthesize sectionHeaderFrame=_sectionHeaderFrame;
@property(nonatomic) struct CGRect itemsBoundingFrame; // @synthesize itemsBoundingFrame=_itemsBoundingFrame;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (struct CGRect)lastItemFrame;	// IMP=0x000000000005b00d
- (struct CGRect)firstItemFrame;	// IMP=0x000000000005afe2
- (void)setItemFrame:(struct CGRect)arg1 atIndex:(long long)arg2;	// IMP=0x000000000005afc3
- (struct CGRect)itemFrameAtIndex:(long long)arg1;	// IMP=0x000000000005afa2
- (void)dealloc;	// IMP=0x000000000005af18

@end
