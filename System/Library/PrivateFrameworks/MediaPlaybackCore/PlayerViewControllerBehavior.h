//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVMusicAppBehavior.h>

@class MISSING_TYPE;

@interface PlayerViewControllerBehavior : AVMusicAppBehavior
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *onGoingJumpToTimeInfo;	// 24 = 0x18
    MISSING_TYPE *reporter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000046975
- (id)init;	// IMP=0x0000000000046932
- (void)willMoveToContext:(id)arg1;	// IMP=0x00000000000448cd
- (void)contextWillHandleUserAction:(long long)arg1;	// IMP=0x0000000000044893
- (void)skipToNextItem;	// IMP=0x0000000000043f78
- (void)skipToPreviousItem;	// IMP=0x0000000000043f3f

@end

