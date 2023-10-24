//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSOpportunisticCache;
@protocol OS_dispatch_queue;

@interface IDSOpportunisticDeliveryController : NSObject
{
    NSObject<OS_dispatch_queue> *_opportunisticQueue;	// 8 = 0x8
    IDSOpportunisticCache *_cache;	// 16 = 0x10
    IDSDAccountController *_accountController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003eef2
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSOpportunisticCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *opportunisticQueue; // @synthesize opportunisticQueue=_opportunisticQueue;
- (_Bool)sendOpportunisticData:(id)arg1 toDestination:(id)arg2;	// IMP=0x001000000003e49f
- (void)sendOpportunisticDataIfNeededToDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003e29f
- (_Bool)diceRoll;	// IMP=0x001000000003e15b
- (void)removeOpportunisticDataForIdentifier:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003df7a
- (void)addOpportunisticData:(id)arg1 serviceName:(id)arg2 accountUniqueID:(id)arg3 identifier:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000003dc74
- (id)initWithCache:(id)arg1 accountController:(id)arg2;	// IMP=0x001000000003db85
- (id)init;	// IMP=0x001000000003db43

@end

