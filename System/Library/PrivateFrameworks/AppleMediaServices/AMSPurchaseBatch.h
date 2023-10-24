//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSLazyPromise, NSLock, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSPurchaseBatch : NSObject
{
    _Bool _isComplete;	// 8 = 0x8
    AMSLazyPromise *_promise;	// 16 = 0x10
    NSMutableArray *_purchases;	// 24 = 0x18
    NSMutableDictionary *_purchaseMap;	// 32 = 0x20
    NSMutableArray *_results;	// 40 = 0x28
    NSLock *_lock;	// 48 = 0x30
    NSMutableArray *_returnedPurchaseIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000034a57a
@property(readonly, nonatomic) NSMutableArray *returnedPurchaseIDs; // @synthesize returnedPurchaseIDs=_returnedPurchaseIDs;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSMutableDictionary *purchaseMap; // @synthesize purchaseMap=_purchaseMap;
@property(readonly, nonatomic) NSMutableArray *purchases; // @synthesize purchases=_purchases;
@property(readonly, nonatomic) AMSLazyPromise *promise; // @synthesize promise=_promise;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
- (id)nextPurchase;	// IMP=0x000000000034a32f
- (_Bool)finishPurchase:(id)arg1 withResult:(id)arg2;	// IMP=0x0000000000349fe2
- (_Bool)finishPurchase:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000349b77
- (id)purchaseForPurchaseId:(id)arg1;	// IMP=0x0000000000349abf
- (id)initWithPurchases:(id)arg1 weakPromise:(id)arg2;	// IMP=0x0000000000349811

@end

