//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMMultiQueue, NSMutableDictionary;
@protocol IDSTTLCacheDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface IDSTTLCache : NSObject
{
    NSMutableDictionary *_backingStore;	// 8 = 0x8
    double _ttlInSeconds;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_evictionTimer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    IMMultiQueue *_multiQueue;	// 40 = 0x28
    id <IDSTTLCacheDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000013aa33
@property(retain, nonatomic) IMMultiQueue *multiQueue; // @synthesize multiQueue=_multiQueue;
@property(nonatomic) __weak id <IDSTTLCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double ttlInSeconds; // @synthesize ttlInSeconds=_ttlInSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *evictionTimer; // @synthesize evictionTimer=_evictionTimer;
@property(retain, nonatomic) NSMutableDictionary *backingStore; // @synthesize backingStore=_backingStore;
- (_Bool)_delegate_shouldTTLCacheEvictExpiredItems;	// IMP=0x001000000013a8f3
- (void)_delegate_DidEvictObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000013a829
- (_Bool)_delegate_shouldEvictObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000013a757
- (void)_delegate_willReturnCachedObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013a663
- (void)_delegate_didCacheObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000013a599
- (void)_fetchCachedObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013a125
- (void)_performEvictionSweep;	// IMP=0x0010000000139c56
- (void)_stopEvictionTimer;	// IMP=0x0010000000139b14
- (void)_stopEvictionTimerIfEmpty;	// IMP=0x001000000013997f
- (void)_startEvictionTimerIfNeeded;	// IMP=0x00100000001396fe
- (void)dealloc;	// IMP=0x00100000001396b4
- (void)evictCachedObjectForKey:(id)arg1;	// IMP=0x00100000001393d9
- (void)fetchCachedObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001390e0
- (void)cacheObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000138f0f
- (id)initWithQueue:(id)arg1 ttlInSeconds:(double)arg2;	// IMP=0x0010000000138e44

@end

