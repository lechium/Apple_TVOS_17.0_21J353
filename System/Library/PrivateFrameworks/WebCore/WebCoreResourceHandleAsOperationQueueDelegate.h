//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject
{
    struct Lock m_lock;	// 8 = 0x8
    void *m_handle;	// 16 = 0x10
    struct BinarySemaphore m_semaphore;	// 24 = 0x18
    struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::RawPtrTraits<WebCore::SynchronousLoaderMessageQueue>, WTF::DefaultRefDerefTraits<WebCore::SynchronousLoaderMessageQueue>> m_messageQueue;	// 32 = 0x20
    struct RetainPtr<NSURLRequest> m_requestResult;	// 40 = 0x28
    struct RetainPtr<NSCachedURLResponse> m_cachedResponseResult;	// 48 = 0x30
    struct optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair>, WTF::SchedulePairHash>> m_scheduledPairs;	// 56 = 0x38
    _Bool m_boolResult;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000243c1c0
- (void).cxx_destruct;	// IMP=0x000000000243c0f0
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;	// IMP=0x000000000243bde0
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000243bcb0
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x000000000243bb20
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;	// IMP=0x000000000243ba60
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;	// IMP=0x000000000243b930
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000000243b6d0
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;	// IMP=0x000000000243b3f0
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x000000000243b2c0
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x000000000243af20
- (void)dealloc;	// IMP=0x000000000243aef0
- (void)detachHandle;	// IMP=0x000000000243ad90
- (id)initWithHandle:(void *)arg1 messageQueue:(void *)arg2;	// IMP=0x000000000243ac70
- (void)callFunctionOnMainThread:(void *)arg1;	// IMP=0x000000000243a8c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

