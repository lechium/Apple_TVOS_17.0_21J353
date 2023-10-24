//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface CNKeyboardStateMonitor : NSObject
{
    long long _keyboardState;	// 8 = 0x8
    id <NSObject> _didShowObserver;	// 16 = 0x10
    id <NSObject> _didHideObserver;	// 24 = 0x18
}

+ (id)sharedMonitor;	// IMP=0x00100000000283cf
- (void).cxx_destruct;	// IMP=0x0000000000028853
@property(retain, nonatomic) id <NSObject> didHideObserver; // @synthesize didHideObserver=_didHideObserver;
@property(retain, nonatomic) id <NSObject> didShowObserver; // @synthesize didShowObserver=_didShowObserver;
@property long long keyboardState; // @synthesize keyboardState=_keyboardState;
- (void)dealloc;	// IMP=0x0000000000028722
- (id)init;	// IMP=0x0000000000028454

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
