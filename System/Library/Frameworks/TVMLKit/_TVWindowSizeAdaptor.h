//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _TVWindowSizeAdaptor : NSObject
{
    UIWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005953a
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (_Bool)update;	// IMP=0x000000000005951c
@property(readonly, nonatomic) struct CGSize adjustedWindowSize;
- (id)initWithWindow:(id)arg1;	// IMP=0x00000000000593cb

@end

