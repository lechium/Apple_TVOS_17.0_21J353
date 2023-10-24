//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface _FMNotificationObserverProxy
{
    id _notificationObserver;	// 24 = 0x18
    NSOperationQueue *_observerQueue;	// 32 = 0x20
    CDUnknownBlockType _observerBlock;	// 40 = 0x28
    NSString *_notificationName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000f2b7
@property(readonly, copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(readonly, nonatomic) NSOperationQueue *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void)invalidate;	// IMP=0x000000000000f1e9
- (void)performObserverBlock;	// IMP=0x000000000000f190
- (id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ef41

@end

