//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusUI/STUIStatusBarVisualProvider-Protocol.h>

@class STUIStatusBarAnimation, STUIStatusBarVisualProvider_PillRegionCoordinator;

@protocol STUIStatusBarPillRegionVisualProvider <STUIStatusBarVisualProvider>
@property(retain, nonatomic) STUIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator;
@property(nonatomic) _Bool expanded;

@optional
- (STUIStatusBarAnimation *)animationForBackgroundActivityPillAnimation:(STUIStatusBarAnimation *)arg1 duration:(double)arg2 scale:(double)arg3;
@end
