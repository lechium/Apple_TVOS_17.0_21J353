//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UITextFieldImageBackgroundView;

__attribute__((visibility("hidden")))
@interface _UITextFieldImageBackgroundProvider
{
    _UITextFieldImageBackgroundView *_backgroundView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000049c53d
- (void)layoutIfNeeded;	// IMP=0x000000000049c465
- (void)setNeedsDisplay;	// IMP=0x000000000049c424
- (void)_applyCorrectImage;	// IMP=0x000000000049c34a
- (void)enabledDidChangeAnimated:(_Bool)arg1;	// IMP=0x000000000049c244
- (void)addToTextField:(id)arg1;	// IMP=0x000000000049c1cb
- (id)backgroundView;	// IMP=0x000000000049c1b6

@end

