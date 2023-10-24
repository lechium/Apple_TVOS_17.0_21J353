//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAutoLayout/NSLayoutConstraint.h>

@interface NSLayoutConstraint (NAUIAdditions)
+ (id)naui_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;	// IMP=0x0080000000003eb9
+ (id)naui_viewsInConstraints:(id)arg1;	// IMP=0x0080000000003c0a
+ (id)naui_constraintsBySizingView:(id)arg1 toSize:(struct CGSize)arg2;	// IMP=0x0080000000003ad3
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets)arg4;	// IMP=0x0080000000003abe
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(struct UIEdgeInsets)arg5;	// IMP=0x0080000000003887
+ (id)naui_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset)arg4;	// IMP=0x0080000000003739
+ (_Bool)naui_areConstraints:(id)arg1 equalToConstraints:(id)arg2;	// IMP=0x0080000000003453
- (void)naui_setIdentifierWithLabel:(id)arg1;	// IMP=0x00100000000041c5
- (id)naui_debugIdentifierWithBaseLabel:(id)arg1;	// IMP=0x0010000000004081
- (_Bool)naui_isEqualToConstraint:(id)arg1;	// IMP=0x0010000000003575
@end
