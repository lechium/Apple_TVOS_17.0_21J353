//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IXSDataPromiseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_uuidToPromiseMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0020000000062c98
+ (id)saveDir;	// IMP=0x0010000000062c0b
+ (id)savePathForPromise:(id)arg1;	// IMP=0x0010000000062b2a
- (void).cxx_destruct;	// IMP=0x0020000000065030
@property(readonly, nonatomic) NSMutableDictionary *uuidToPromiseMap; // @synthesize uuidToPromiseMap=_uuidToPromiseMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000064f28
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x0010000000064e50
- (void)promiseDidReset:(id)arg1;	// IMP=0x0010000000064d8f
- (void)promiseDidComplete:(id)arg1;	// IMP=0x0010000000064cce
- (void)promiseDidBegin:(id)arg1;	// IMP=0x0010000000064c0d
- (void)cancelPromiseForUUIDIfNotAssociatedWithAnyCoordinator:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000064a8e
- (void)clearAllPromisesForCreator:(unsigned long long)arg1;	// IMP=0x0010000000064621
- (void)decommissionPromise:(id)arg1;	// IMP=0x00100000000644f4
- (void)enumeratePromises:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064349
- (void)registerPromise:(id)arg1;	// IMP=0x001000000006409c
- (id)promiseForUUID:(id)arg1;	// IMP=0x0010000000063e8c
- (id)promiseForUUID:(id)arg1 ofType:(Class)arg2;	// IMP=0x0010000000063e74
- (id)_promiseForUUID:(id)arg1 ofType:(Class)arg2 useQueue:(_Bool)arg3;	// IMP=0x0010000000063c8d
- (void)_onQueue_restoreSavedPromises;	// IMP=0x0010000000062e32
- (id)init;	// IMP=0x0010000000062d25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
