//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface WebMainThreadInvoker : NSProxy
{
    id target;	// 8 = 0x8
    struct RetainPtr<id> exception;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000010b260
- (void).cxx_destruct;	// IMP=0x000000000010b230
- (void)handleException:(id)arg1;	// IMP=0x000000000010b1e0
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000010b1c0
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000010b0e0
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000010b0c0

@end

