//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLayoutConstraint.h>

@interface NSLayoutConstraint (GKAdditions)
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(_Bool)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets)arg5 applyOrthogonalConstraints:(_Bool)arg6;	// IMP=0x00800000000aa939
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(_Bool)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets)arg5;	// IMP=0x00800000000aa91e
+ (id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(long long)arg2;	// IMP=0x00800000000aa6e3
+ (void)_gkInstallEdgeConstraintsForLayoutGuide:(id)arg1 containedWithinParentView:(id)arg2;	// IMP=0x00800000000aa49a
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 edgeInsets:(struct UIEdgeInsets)arg3;	// IMP=0x00800000000aa23d
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 margin:(double)arg3;	// IMP=0x00800000000a9fe5
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2;	// IMP=0x00800000000a9fd0
+ (id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(struct UIEdgeInsets)arg3;	// IMP=0x00800000000a9de5
+ (id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(double)arg3;	// IMP=0x00800000000a9d9e
+ (id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(double)arg3;	// IMP=0x00800000000a9d57
+ (id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(double)arg3;	// IMP=0x00800000000a9d17
+ (id)_gkConstraintForView:(id)arg1 withConstantHeight:(double)arg2;	// IMP=0x00800000000a9cdc
+ (id)_gkConstraintForView:(id)arg1 withConstantWidth:(double)arg2;	// IMP=0x00800000000a9ca1
+ (id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(double)arg3;	// IMP=0x00800000000a9b0d
+ (id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2;	// IMP=0x00800000000a9acd
+ (id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2;	// IMP=0x00800000000a9a8d
+ (id)_gkConstraintForView:(id)arg1 equalsAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x00800000000a9a56
+ (id)_gkConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 leading:(double)arg7 fontTextStyle:(id)arg8;	// IMP=0x00800000000a997e
+ (id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(long long)arg3;	// IMP=0x00800000000ac13b
@end

