//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC9SeymourUI15AppStateMonitor : _TtCs12_SwiftObject
{
    MISSING_TYPE *eventHub;	// 16 = 0x10
}

- (void)publishSignificantTimeChanged;	// IMP=0x00000000002980c0
- (void)publishAppWillTerminate;	// IMP=0x0000000000298080
- (void)publishAppDidEnterBackground;	// IMP=0x0000000000298040
- (void)publishAppWillResignActive;	// IMP=0x0000000000298000
- (void)publishAppWillEnterForeground;	// IMP=0x0000000000297fc0
- (void)publishAppDidBecomeActive;	// IMP=0x0000000000297f80

@end

