//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRadarTimeItemView
{
    _Bool _isInternalInstall;	// 16 = 0x10
    _Bool _radarItemEnabled;	// 17 = 0x11
    _Bool _currentlyGatheringLogs;	// 18 = 0x12
}

- (_Bool)_showRadarButtonForInternalInstalls;	// IMP=0x0000000000edbf71
- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;	// IMP=0x0000000000edbeec
- (id)_timeImageSet;	// IMP=0x0000000000edbe4b
- (id)contentsImage;	// IMP=0x0000000000edbc75
- (_Bool)usesAdvancedActions;	// IMP=0x0000000000edbc6d
- (_Bool)allowsUserInteraction;	// IMP=0x0000000000edbc5d
- (_Bool)canBecomeFocused;	// IMP=0x0000000000edbc4b
- (_Bool)showsTouchWhenHighlighted;	// IMP=0x0000000000edbc39
- (long long)buttonType;	// IMP=0x0000000000edbc2e
- (id)highlightImage;	// IMP=0x0000000000edbab9
- (void)dealloc;	// IMP=0x0000000000edb9d5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000edb7f9

@end
