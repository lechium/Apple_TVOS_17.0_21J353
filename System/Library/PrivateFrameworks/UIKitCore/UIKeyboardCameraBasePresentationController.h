//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraBasePresentationController : UIPresentationController
{
    _Bool _presentingOverKeyboard;	// 8 = 0x8
}

@property(nonatomic) _Bool presentingOverKeyboard; // @synthesize presentingOverKeyboard=_presentingOverKeyboard;
- (void)postNotificationsForType:(unsigned long long)arg1 forStart:(_Bool)arg2;	// IMP=0x000000000103fade
- (void)postNotificationsForType:(unsigned long long)arg1 from:(struct CGRect)arg2 to:(struct CGRect)arg3 forStart:(_Bool)arg4;	// IMP=0x000000000103f922
@property(readonly, nonatomic) _Bool updatesGuideDuringRotation;

@end

