//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiVariantDivider : UIView
{
    UIView *_backgroundView;	// 8 = 0x8
    UIKBRenderConfig *_renderConfig;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000066dad1
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000066daaa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000066d8ed

@end
