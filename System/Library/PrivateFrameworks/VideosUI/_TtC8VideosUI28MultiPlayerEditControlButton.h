//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI28MultiPlayerEditControlButton : UIControl
{
    MISSING_TYPE *onPrimaryAction;	// 8 = 0x8
    MISSING_TYPE *imageView;	// 24 = 0x18
    MISSING_TYPE *imageSymbolWeight;	// 32 = 0x20
    MISSING_TYPE *floatingContentView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000403904
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004038d1
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000403845
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000004036e3
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000403570
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000004034bb
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000403127
- (void)buttonPressed;	// IMP=0x000000000040286d
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000040277c

@end

