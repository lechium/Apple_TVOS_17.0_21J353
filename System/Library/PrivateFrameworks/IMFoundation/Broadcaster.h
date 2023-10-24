//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class IMMessageContext, IMRemoteObjectBroadcaster, NSArray, NSString, Protocol;

@interface Broadcaster : NSProxy
{
    NSArray *_targets;	// 8 = 0x8
    IMRemoteObjectBroadcaster *_parent;	// 16 = 0x10
    Protocol *_protocol;	// 24 = 0x18
    IMMessageContext *_messageContext;	// 32 = 0x20
    int _curXPCMessagePriority;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
}

@property(nonatomic) int curXPCMessagePriority; // @synthesize curXPCMessagePriority=_curXPCMessagePriority;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000028c59
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000028bf4
- (void)sendXPCObject:(id)arg1;	// IMP=0x000000000002871e
- (void)dealloc;	// IMP=0x00000000000286b3
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000028602
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5;	// IMP=0x00000000000285e7
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4;	// IMP=0x00000000000285c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
