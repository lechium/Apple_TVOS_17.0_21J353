//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIContentSizeCategoryPreference.h"

__attribute__((visibility("hidden")))
@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference
{
    _Bool _observingNotification;	// 24 = 0x18
    _Bool _didCheckForPreferredContentSizeCategoryOverride;	// 25 = 0x19
    _Bool _applicationOverridesPreferredContentSizeCategory;	// 26 = 0x1a
    UIContentSizeCategoryPreference *_overridePreferences;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000010ea3e7
@property(retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences; // @synthesize overridePreferences=_overridePreferences;
- (void)_endObservingPreferredContentSizeChangedNotification;	// IMP=0x00000000010ea324
- (void)_beginObservingPreferredContentSizeChangedNotification;	// IMP=0x00000000010ea23f
- (void)setPreferredContentSizeCategory:(id)arg1;	// IMP=0x00000000010ea0c3
- (void)_postContentSizeCategoryDidChangeNotification;	// IMP=0x00000000010e9ef5
- (void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(_Bool)arg3;	// IMP=0x00000000010e9bde
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(_Bool)arg1;	// IMP=0x00000000010e9b5d
- (id)description;	// IMP=0x00000000010e98a9
- (void)dealloc;	// IMP=0x00000000010e986b
- (void)checkForChanges;	// IMP=0x00000000010e9844
- (void)_readAndObservePreferences;	// IMP=0x00000000010e9814
- (id)initAsSystem;	// IMP=0x00000000010e97b6

@end
