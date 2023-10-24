//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLCommandQueue.h>

@class MTLSimBufferStoragePool, MTLSimCommandStoragePool, NSObject, NSString;
@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLSimCommandQueue : _MTLCommandQueue
{
    MTLSimCommandStoragePool *commandPool;	// 352 = 0x160
    MTLSimBufferStoragePool *bufferPool;	// 360 = 0x168
    unsigned int _commandQueueRef;	// 368 = 0x170
    id <MTLDevice> _device;	// 376 = 0x178
    unsigned long long bufferStorageByteCount;	// 384 = 0x180
}

@property(readonly) unsigned long long bufferStorageByteCount; // @synthesize bufferStorageByteCount;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (id)counterInfo;	// IMP=0x000000000000c472
- (id)getRequestedCounters;	// IMP=0x000000000000c459
- (int)requestCounters:(id)arg1;	// IMP=0x000000000000c451
- (id)availableCounters;	// IMP=0x000000000000c449
- (void)returnBufferStorage:(struct BufferStorageEntry *)arg1;	// IMP=0x000000000000c42c
- (struct BufferStorageEntry *)getBufferStorage;	// IMP=0x000000000000c40f
- (void)returnCommandBufferStorage:(struct StorageEntry *)arg1;	// IMP=0x000000000000c3f2
- (struct StorageEntry *)getCommandBufferStorage;	// IMP=0x000000000000c3d5
- (void)submitCommandBuffers:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000c202
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;	// IMP=0x000000000000c1fa
- (_Bool)setGPUPriority:(unsigned long long)arg1;	// IMP=0x000000000000c1f2
- (void)setCompletionQueue:(id)arg1;	// IMP=0x000000000000c1ec
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;	// IMP=0x000000000000c1e4
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;	// IMP=0x000000000000c1dc
- (unsigned long long)getGPUPriority;	// IMP=0x000000000000c1d1
- (unsigned long long)getBackgroundGPUPriority;	// IMP=0x000000000000c1c6
- (id)commandBufferWithDescriptor:(id)arg1;	// IMP=0x000000000000c14b
- (id)commandBufferWithUnretainedReferences;	// IMP=0x000000000000c113
- (id)commandBuffer;	// IMP=0x000000000000c0d8
- (void)dealloc;	// IMP=0x000000000000bfec
- (id)initWithDevice:(id)arg1 commandQueueRef:(unsigned int)arg2 descriptor:(id)arg3;	// IMP=0x000000000000bf20
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;	// IMP=0x000000000000be62

// Remaining properties
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property _Bool executionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isOpenGLQueue;
@property(copy) NSString *label;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) unsigned long long qosLevel;
@property _Bool skipRender;
@property(readonly) Class superclass;

@end

