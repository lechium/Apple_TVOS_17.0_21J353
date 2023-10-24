//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, _UIFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutSection : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    struct CGRect _validRect;	// 16 = 0x10
    struct CGRect _rectToKeepValid;	// 48 = 0x30
    NSMutableSet *_invalidatedIndexPaths;	// 80 = 0x50
    _Bool _fixedItemSize;	// 88 = 0x58
    _Bool _lastRowIncomplete;	// 89 = 0x59
    NSMutableArray *_items;	// 96 = 0x60
    NSMutableArray *_rows;	// 104 = 0x68
    double _lineSpacing;	// 112 = 0x70
    double _interItemSpacing;	// 120 = 0x78
    double _headerDimension;	// 128 = 0x80
    double _footerDimension;	// 136 = 0x88
    _UIFlowLayoutInfo *_layoutInfo;	// 144 = 0x90
    double _otherMargin;	// 152 = 0x98
    double _beginMargin;	// 160 = 0xa0
    double _endMargin;	// 168 = 0xa8
    double _actualGap;	// 176 = 0xb0
    double _lastRowBeginMargin;	// 184 = 0xb8
    double _lastRowEndMargin;	// 192 = 0xc0
    double _lastRowActualGap;	// 200 = 0xc8
    long long _itemsCount;	// 208 = 0xd0
    long long _itemsByRowCount;	// 216 = 0xd8
    long long _indexOfIncompleteRow;	// 224 = 0xe0
    CDStruct_2f5e8405 _rowAlignmentOptions;	// 232 = 0xe8
    struct CGSize _itemSize;	// 248 = 0xf8
    struct _NSRange _validItemRange;	// 264 = 0x108
    struct UIEdgeInsets _sectionMargins;	// 280 = 0x118
    struct CGRect _frame;	// 312 = 0x138
    struct CGRect _headerFrame;	// 344 = 0x158
    struct CGRect _footerFrame;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x000000000042323d
- (id)init;	// IMP=0x000000000041bab5

@end
