//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu
{
}

+ (id)activeInstance;	// IMP=0x00800000009acaed
+ (id)sharedInstance;	// IMP=0x00800000009aca81
- (_Bool)usesDimmingView;	// IMP=0x00000000009ad1bd
- (void)hide;	// IMP=0x00000000009ad17f
- (void)fadeWithDelay:(double)arg1;	// IMP=0x00000000009ad137
- (void)fade;	// IMP=0x00000000009ad0f9
- (void)cleanupForFadeOrHide;	// IMP=0x00000000009ad024
- (void)willShow;	// IMP=0x00000000009acf81
- (void)performShowAnimation;	// IMP=0x00000000009acb27
- (_Bool)centerPopUpOverKey;	// IMP=0x00000000009acb1f
- (_Bool)usesTable;	// IMP=0x00000000009acb17
- (struct CGSize)preferredSize;	// IMP=0x00000000009acafe
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009ac8fe

@end

