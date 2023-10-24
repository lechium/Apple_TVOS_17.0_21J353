//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeadBoardUI/NSObject-Protocol.h>

@class HBUILaunchAnimationContext, NSArray;

@protocol HBUILaunchAnimationEnvironment <NSObject>

@optional
- (NSArray *)launchAnimationsWithContext:(HBUILaunchAnimationContext *)arg1;
- (void)didFinishLaunchAnimationWithContext:(HBUILaunchAnimationContext *)arg1;
- (void)willBeginLaunchAnimationWithContext:(HBUILaunchAnimationContext *)arg1;
- (NSArray *)nextLaunchAnimationEnvironments;
@end

