//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITapGestureRecognizer.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer
{
    NSMutableSet *_trackedEvents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000014bf2c6
- (long long)_modifierFlags;	// IMP=0x00000000014bf164
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000014bf0f7
- (void)_resetGestureRecognizer;	// IMP=0x00000000014bf0ae
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000014bf053
- (_Bool)_gestureCanBeginWithEvent:(id)arg1;	// IMP=0x00000000014bf04b

@end

