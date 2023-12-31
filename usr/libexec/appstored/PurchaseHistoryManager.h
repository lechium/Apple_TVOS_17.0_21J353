//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PurchaseHistoryDatabaseStore, URLBag;
@protocol OS_dispatch_queue;

@interface PurchaseHistoryManager : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    _Bool _commandRunning;	// 16 = 0x10
    NSMutableArray *_commandStack;	// 24 = 0x18
    PurchaseHistoryDatabaseStore *_databaseStore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007a2e6
- (void)_handleAccountChangedNotification;	// IMP=0x0010000000079a66
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00100000000792b3
- (id)init;	// IMP=0x00100000000777ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

