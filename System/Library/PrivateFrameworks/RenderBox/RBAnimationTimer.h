//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RBAnimationTimer : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;	// 8 = 0x8
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;	// 72 = 0x48
    struct objc_ptr<NSThread *> _thread;	// 120 = 0x78
    struct objc_ptr<CADisplayLink *> _link;	// 128 = 0x80
    unsigned int _empty_ttl;	// 136 = 0x88
    int _frame_rate;	// 140 = 0x8c
    int _pending_frame_rate;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x0000000000086476
- (void).cxx_destruct;	// IMP=0x000000000008644e
- (void)dispatchHandlers:(id)arg1;	// IMP=0x0000000000085ef7
- (void)thread:(id)arg1;	// IMP=0x0000000000085de3
- (void)dealloc;	// IMP=0x0000000000085c2a
- (id)init;	// IMP=0x0000000000085bca

@end

