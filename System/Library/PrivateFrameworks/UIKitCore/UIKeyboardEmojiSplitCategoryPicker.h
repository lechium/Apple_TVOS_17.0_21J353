//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryPicker
{
    _Bool _whiteText;	// 16 = 0x10
    unsigned long long _currentSelected;	// 24 = 0x18
    long long _lastUsedCategory;	// 32 = 0x20
}

@property _Bool whiteText; // @synthesize whiteText=_whiteText;
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000b41a15
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000b4193c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000b41425
- (id)symbolForRow:(long long)arg1;	// IMP=0x0000000000b41380
- (id)titleForRow:(long long)arg1 fallback:(_Bool)arg2;	// IMP=0x0000000000b4110e
- (void)updateCategorySelectedIndicator:(long long)arg1;	// IMP=0x0000000000b40caa
- (void)updateToCategory:(long long)arg1;	// IMP=0x0000000000b40c50
- (void)didMoveToWindow;	// IMP=0x0000000000b40a23
- (void)dealloc;	// IMP=0x0000000000b409a1
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000b4073c

@end
