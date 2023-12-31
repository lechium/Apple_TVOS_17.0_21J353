//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriAudioCoordinator : NSObject
{
    _Bool _shouldStopDeliverAudioOnEndpoint;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSHashTable *_receivers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000039f3f
@property(nonatomic) _Bool shouldStopDeliverAudioOnEndpoint; // @synthesize shouldStopDeliverAudioOnEndpoint=_shouldStopDeliverAudioOnEndpoint;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x0010000000039ef1
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x0010000000039ea2
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x0010000000039deb
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x0010000000039d5e
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000039c9b
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000039c0e
- (void)addReceiver:(id)arg1;	// IMP=0x0010000000039b81
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x0010000000039ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

