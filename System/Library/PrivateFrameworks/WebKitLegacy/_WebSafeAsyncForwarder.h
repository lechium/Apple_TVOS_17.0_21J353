//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _WebSafeForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeAsyncForwarder : NSObject
{
    _WebSafeForwarder *_forwarder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d2100
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000d20d0
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000d20a0
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000d1f20
- (id)initWithForwarder:(id)arg1;	// IMP=0x00000000000d1ed0

@end

