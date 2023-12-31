//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class NSString, _CATArbitratorRegistrationEntry;

__attribute__((visibility("hidden")))
@interface _CATArbitratorResourceProxy : NSProxy
{
    id mResource;	// 8 = 0x8
    _CATArbitratorRegistrationEntry *mRegistration;	// 16 = 0x10
    _Bool _isExclusive;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000004962
@property(readonly, nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000004857
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000000477f
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000046be
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000045ee
- (void)invalidate;	// IMP=0x00000000000045ab
- (void)dealloc;	// IMP=0x000000000000456d
- (id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(_Bool)arg3;	// IMP=0x00000000000044df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

