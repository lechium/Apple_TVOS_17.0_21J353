//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSNumber;

@interface PurchaseHistoryUpdateRequestContext : NSObject
{
    long long _accountID;	// 8 = 0x8
    ACAccount *_requestingAccount;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
    NSNumber *_revision;	// 32 = 0x20
    unsigned long long _purchaseHistoryContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000189960

@end

