//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKDispatchGroup.h>

@class GKClientProxy, NSManagedObjectContext;

@interface GKCacheTransactionGroup : GKDispatchGroup
{
    NSManagedObjectContext *_context;	// 64 = 0x40
    GKClientProxy *_client;	// 72 = 0x48
}

+ (id)transactionGroupWithContext:(id)arg1 client:(id)arg2;	// IMP=0x0040000000142a28
+ (id)dispatchGroupWithName:(id)arg1;	// IMP=0x001000000014290f
+ (id)dispatchGroup;	// IMP=0x00100000001427f6
- (void).cxx_destruct;	// IMP=0x0020000000144024
@property(retain, nonatomic) GKClientProxy *client; // @synthesize client=_client;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)notifyOnMainQueueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000143eb5
- (void)notifyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000143d46
- (void)stripGKPlayerInternalPIIs;	// IMP=0x001000000014397a
- (void)performOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000014380f
- (void)performOnManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000001434ea
- (void)dealloc;	// IMP=0x0010000000143205
- (id)initWithName:(id)arg1 context:(id)arg2 client:(id)arg3;	// IMP=0x0010000000142f24
- (id)initWithName:(id)arg1;	// IMP=0x0010000000142dfd
- (id)transactionGroup;	// IMP=0x0010000000142cd9

@end

