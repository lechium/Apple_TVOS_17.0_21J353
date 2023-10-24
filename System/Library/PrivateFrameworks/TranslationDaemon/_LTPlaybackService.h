//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LTPlaybackService : NSObject
{
    struct AudioStreamBasicDescription _asbd;	// 8 = 0x8
    struct OpaqueAudioQueue *_audioQueue;	// 48 = 0x30
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _waitForStateChange;	// 56 = 0x38
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _stateChangeCondition;	// 120 = 0x78
    long long _state;	// 168 = 0xa8
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (_Bool)isAudioQueueRunning;	// IMP=0x0000000000056453
- (void)reset;	// IMP=0x0000000000056413
- (void)stop;	// IMP=0x00000000000563ce
- (void)flushAndStop;	// IMP=0x000000000005631d
- (void)waitForAudioQueueStop;	// IMP=0x0000000000056196
- (void)signalQueueRunningStateChanged;	// IMP=0x000000000005611a
- (id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3;	// IMP=0x0000000000055dce
- (id)start;	// IMP=0x0000000000055cad
- (void)handleMediaServerReset;	// IMP=0x0000000000055c42
- (void)dealloc;	// IMP=0x0000000000055b92
- (id)initWithContext:(id)arg1 ASBD:(struct AudioStreamBasicDescription)arg2;	// IMP=0x000000000005557e

@end

