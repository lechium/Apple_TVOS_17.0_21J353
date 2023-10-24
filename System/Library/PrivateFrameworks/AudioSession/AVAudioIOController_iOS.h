//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVAudioIOController_iOS : NSObject
{
    struct optional<(anonymous namespace)::IOControllerImpl> impl;	// 8 = 0x8
    shared_ptr_a9ec9eae _deviceTimeClient;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x0000000000002f95
- (void).cxx_destruct;	// IMP=0x0000000000002f4f
@property(readonly, nonatomic) struct AVAudioTimeInterval dynamicLatency;
@property(readonly, nonatomic) _Bool supportsDynamicLatency;
- (struct AudioPresentationTimeStamp)presentationTime;	// IMP=0x0000000000002f09
- (void)privateDispatchIOControllerEvent:(unsigned long long)arg1;	// IMP=0x0000000000002eab
- (void)destroyIOEventBlock:(long long)arg1;	// IMP=0x0000000000002dfb
- (long long)createIOEventBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002cfc
@property(readonly, nonatomic) struct AVAudioIOPeriod IOPeriod;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (struct AudioTimeStamp)currentTime;	// IMP=0x0000000000002561
- (void)setTimingSlot:(unsigned int)arg1;	// IMP=0x0000000000002558
- (id)initWithSession:(id)arg1 xpcConnection:(shared_ptr_fa4fc137)arg2 deviceTimeClient:(shared_ptr_a9ec9eae)arg3 timingSlot:(unsigned int)arg4 isDecoupledInput:(_Bool)arg5;	// IMP=0x0000000000002380

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
