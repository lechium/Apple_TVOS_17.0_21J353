//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UIPickerTableView, UIPickerView;

__attribute__((visibility("hidden")))
@interface UIPickerColumnView : UIView
{
    UIPickerTableView *_topTable;	// 128 = 0x80
    UIPickerTableView *_middleTable;	// 136 = 0x88
    UIPickerTableView *_bottomTable;	// 144 = 0x90
    UIView *_topContainerView;	// 152 = 0x98
    UIView *_middleContainerView;	// 160 = 0xa0
    UIView *_bottomContainerView;	// 168 = 0xa8
    double _middleBarHeight;	// 176 = 0xb0
    double _rowHeight;	// 184 = 0xb8
    UIPickerView *_pickerView;	// 192 = 0xc0
    struct CGRect _tableFrame;	// 200 = 0xc8
    struct CATransform3D _perspectiveTransform;	// 232 = 0xe8
    _Bool _isNoLongerInUse;	// 360 = 0x168
    UIColor *__textColor;	// 368 = 0x170
    double _leftHitTestExtension;	// 376 = 0x178
    double _rightHitTestExtension;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x0000000000db9fb6
@property(nonatomic) _Bool isNoLongerInUse; // @synthesize isNoLongerInUse=_isNoLongerInUse;
@property(nonatomic) double rightHitTestExtension; // @synthesize rightHitTestExtension=_rightHitTestExtension;
@property(nonatomic) double leftHitTestExtension; // @synthesize leftHitTestExtension=_leftHitTestExtension;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor; // @synthesize _textColor=__textColor;
@property(nonatomic) struct CATransform3D perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) UIView *highlightedRegion;
@property(readonly, nonatomic) UIView *view;
- (id)_viewToAddFocusLayer;	// IMP=0x0000000000db9e43
- (struct CGRect)accessibilityFrame;	// IMP=0x0000000000db9e23
- (struct CGRect)_defaultFocusRegionFrame;	// IMP=0x0000000000db9e03
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x0000000000db9d38
- (_Bool)canBecomeFocused;	// IMP=0x0000000000db9d28
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000db9bb1
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000db9b31
- (id)_visibleCellClosestToPoint:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x0000000000db98bd
- (id)_allVisibleCells;	// IMP=0x0000000000db97ad
- (struct _NSRange)_visibleGlobalRows;	// IMP=0x0000000000db9790
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x0000000000db96bf
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;	// IMP=0x0000000000db9512
- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000db94a0
- (void)setAllowsMultipleSelection:(_Bool)arg1;	// IMP=0x0000000000db93fa
- (void)endUpdates;	// IMP=0x0000000000db9363
- (void)beginUpdates;	// IMP=0x0000000000db92cc
- (void)reloadData;	// IMP=0x0000000000db9235
- (id)cellForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000db916d
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x0000000000db9150
- (_Bool)_usesCheckSelection;	// IMP=0x0000000000db9116
- (_Bool)_soundsEnabled;	// IMP=0x0000000000db90dc
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(_Bool)arg3;	// IMP=0x0000000000db9067
@property(nonatomic) struct CGRect selectionBarRect;
- (void)markAsNoLongerInUse;	// IMP=0x0000000000db8ff6
@property(readonly, nonatomic) long long selectionBarRow;
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000db8ef6
- (_Bool)isRowChecked:(long long)arg1;	// IMP=0x0000000000db8ed9
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;	// IMP=0x0000000000db8ebc
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x0000000000db8ea4
- (double)_horizontalBiasForEndTables;	// IMP=0x0000000000db8dfa
- (_Bool)_pointLiesWithinEffectiveTableBounds:(struct CGPoint)arg1;	// IMP=0x0000000000db8d8e
- (struct CGRect)_tableFrame;	// IMP=0x0000000000db8d6e
- (id)_preferredTable;	// IMP=0x0000000000db8d59
- (_Bool)_containsTable:(id)arg1;	// IMP=0x0000000000db8cd0
- (id)initWithFrame:(struct CGRect)arg1 tableFrame:(struct CGRect)arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(struct CATransform3D)arg6;	// IMP=0x0000000000db8427
- (struct CATransform3D)_transformForTableWithTranslationX:(double)arg1;	// IMP=0x0000000000db8409
- (struct CATransform3D)_transformForTableWithPerspectiveTranslationX:(double)arg1;	// IMP=0x0000000000db82ca
- (id)_createContainerViewWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000db826d
- (void)_centerTableInContainer:(id)arg1;	// IMP=0x0000000000db8197
- (id)_createTableViewWithFrame:(struct CGRect)arg1 containingFrame:(struct CGRect)arg2;	// IMP=0x0000000000db7ff6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

