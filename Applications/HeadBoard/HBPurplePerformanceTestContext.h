//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBAppGridView, HBAppGridViewController, HBMainViewController, UIWindow;

@interface HBPurplePerformanceTestContext : NSObject
{
    UIWindow *_window;	// 8 = 0x8
}

+ (id)contextWithWindow:(id)arg1;	// IMP=0x00400000000039fb
- (void).cxx_destruct;	// IMP=0x0020000000003b31
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) HBAppGridView *appGridView;
@property(readonly, nonatomic) HBAppGridViewController *appGridViewController;
@property(readonly, nonatomic) HBMainViewController *mainViewController;

@end

