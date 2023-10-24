//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, RBSAssertion;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PGProcessAssertion : NSObject
{
    _Bool _lock_invalidated;	// 8 = 0x8
    NSString *_explanation;	// 16 = 0x10
    RBSAssertion *_assertion;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    _Bool _acquired;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 52 = 0x34
}

+ (id)assertionWithDomainAttribute:(id)arg1 forProcessWithIdentifier:(int)arg2 explanation:(id)arg3;	// IMP=0x006000000000312c
+ (id)pipVisibleAssertionForProcessWithIdentifier:(int)arg1 explanation:(id)arg2;	// IMP=0x00600000000030a2
+ (id)transientTaskAssertionForProcessWithIdentifier:(int)arg1 explanation:(id)arg2;	// IMP=0x0060000000003018
+ (id)transientTaskDomainAttribute;	// IMP=0x0060000000002ff1
+ (id)pipVisibleDomainAttribute;	// IMP=0x0060000000002fca
- (void).cxx_destruct;	// IMP=0x0000000000003bcd
- (void)invalidate;	// IMP=0x0000000000003aeb
- (void)dealloc;	// IMP=0x0000000000003a39
- (void)_setInvalidated:(_Bool)arg1;	// IMP=0x0000000000003a08
- (_Bool)_isInvalidated;	// IMP=0x00000000000039e0
- (void)acquireWithTarget:(id)arg1 domainAttribute:(id)arg2;	// IMP=0x000000000000336b
- (id)description;	// IMP=0x00000000000032e5
- (id)initWithExplanation:(id)arg1;	// IMP=0x0000000000003272

@end

