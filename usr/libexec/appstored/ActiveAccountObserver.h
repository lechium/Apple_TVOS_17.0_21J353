//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;
@protocol OS_dispatch_queue;

@interface ActiveAccountObserver : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    NSString *_cachedStoreFront;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    ACAccount *_activeAccount;	// 32 = 0x20
    ACAccount *_activeSandboxAccount;	// 40 = 0x28
}

+ (id)activeSandboxAccount;	// IMP=0x00200000000a205d
+ (id)activeAccount;	// IMP=0x00100000000a2006
+ (id)sharedInstance;	// IMP=0x00100000000a1d7f
- (void).cxx_destruct;	// IMP=0x00200000000a3122
@property(readonly) ACAccount *activeSandboxAccount; // @synthesize activeSandboxAccount=_activeSandboxAccount;
@property(readonly) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
- (void)handleStorefrontChangedNotification:(id)arg1;	// IMP=0x00100000000a2d11
- (void)handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x00100000000a22e2
- (void)handleSandboxAccountDidChangeNotification:(id)arg1;	// IMP=0x00100000000a20be
- (id)init;	// IMP=0x00100000000a1dd4

@end

