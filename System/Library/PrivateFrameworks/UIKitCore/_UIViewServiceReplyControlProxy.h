//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, _UIViewServiceReplyAwaitingTrampoline, _UIViewServiceReplyControlTrampoline;

__attribute__((visibility("hidden")))
@interface _UIViewServiceReplyControlProxy : NSObject
{
    id _target;	// 8 = 0x8
    _UIViewServiceReplyControlTrampoline *_controlTrampoline;	// 16 = 0x10
    _UIViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
}

+ (id)proxyWithTarget:(id)arg1;	// IMP=0x00100000012bb78b
- (void).cxx_destruct;	// IMP=0x00000000012bb926
- (id)_deliveringRepliesAsynchronously;	// IMP=0x00000000012bb8af
- (id)_awaitingReply;	// IMP=0x00000000012bb838
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000012bb82a
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000012bb814
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000012bb800

@end

