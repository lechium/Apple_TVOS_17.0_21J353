//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface WKScrollViewDelegateForwarder : NSObject
{
    WKWebView *_internalDelegate;	// 8 = 0x8
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000003ff027
- (void).cxx_destruct;	// IMP=0x00000000003ff019
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000003fef65
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000003fee27
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000003fed8b
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000003fecdb
- (id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2;	// IMP=0x00000000003fec7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

