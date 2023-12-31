//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDLayoutManager : NSObject
{
}

- (double)_imageCenterToTopForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize)arg2;	// IMP=0x00000000000a5abb
- (unsigned long long)_actualNumberOfLinesForLabelInHUD:(id)arg1 preferredSize:(struct CGSize)arg2;	// IMP=0x00000000000a5a14
- (void)layoutSubviewsOfHUD:(id)arg1;	// IMP=0x00000000000a56fd
- (struct CGSize)preferredSizeForLabelInHUD:(id)arg1 maximumWidth:(double)arg2;	// IMP=0x00000000000a568e
- (id)labelFontForHUD:(id)arg1;	// IMP=0x00000000000a566b
- (struct CGRect)labelFrameForHUD:(id)arg1 preferredSize:(struct CGSize)arg2;	// IMP=0x00000000000a5470
- (struct CGRect)imageViewFrameForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize)arg2;	// IMP=0x00000000000a52c4
- (struct CGSize)imageViewSizeForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize)arg2;	// IMP=0x00000000000a50d2
- (struct UIEdgeInsets)imageInsetsForHUD:(id)arg1;	// IMP=0x00000000000a509c
- (id)itemContainerViewForHUD:(id)arg1;	// IMP=0x00000000000a5087
- (id)containerViewForHUD:(id)arg1;	// IMP=0x00000000000a5072
- (struct CGRect)layoutBoundsForHUD:(id)arg1;	// IMP=0x00000000000a5013
- (struct CGSize)minimumUnscaledSizeForHUD:(id)arg1 preferredLabelSize:(struct CGSize)arg2;	// IMP=0x00000000000a4fe5
- (struct CGSize)unscaledSizeForHUD:(id)arg1 containingSize:(struct CGSize)arg2;	// IMP=0x00000000000a4f0f

@end

