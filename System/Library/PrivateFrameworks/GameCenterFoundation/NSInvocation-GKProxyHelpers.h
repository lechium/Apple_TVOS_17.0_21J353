//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (GKProxyHelpers)
+ (id)_gkInvocationWithBlock:(id)arg1;	// IMP=0x00500000000c1102
- (void)_gkInvokeOnceWithTarget:(id)arg1;	// IMP=0x00100000000c1034
- (void)_gkInvokeOnce;	// IMP=0x00100000000c1006
- (void)_gkClearTarget;	// IMP=0x00100000000c0fce
- (void)_gkPrepareForCallWithError:(id)arg1;	// IMP=0x00100000000c0f11
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000c0e6d
- (id)_gkReplyHandlerInvocation;	// IMP=0x00100000000c0dd2
- (void)_gkClearCopiedArguments;	// IMP=0x00100000000c0c2b
- (void)_gkCopyArguments;	// IMP=0x00100000000c09d7
- (_Bool)_gkHasReplyBlock;	// IMP=0x00100000000c1167
@end

