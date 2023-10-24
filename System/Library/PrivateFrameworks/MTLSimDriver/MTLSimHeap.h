//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLHeap.h>

@class MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimHeap : _MTLHeap
{
    MTLSimDevice *_device;	// 40 = 0x28
    unsigned int _heapRef;	// 48 = 0x30
    unsigned long long _purgeableState;	// 56 = 0x38
}

@property(readonly, nonatomic) unsigned long long protectionOptions;
@property(readonly, nonatomic) unsigned long long gpuAddress;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x000000000000b1db
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000000b1c3
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000000b1ab
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x000000000000b194
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000000b17c
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 useOffset:(_Bool)arg3;	// IMP=0x000000000000ac28
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 useOffset:(_Bool)arg4;	// IMP=0x000000000000a92b
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;	// IMP=0x000000000000a7f0
@property(readonly) unsigned long long usedSize;
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly) unsigned long long size;
- (CDStruct_da2e99ad)getSizeInfo;	// IMP=0x000000000000a5d0
@property(readonly) unsigned int serializerResourceRef;
@property(readonly) unsigned int heapRef;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;	// IMP=0x000000000000a4cc
- (id)initWithDescriptor:(id)arg1 device:(id)arg2 heapRef:(unsigned int)arg3;	// IMP=0x000000000000a41d

// Remaining properties
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hazardTrackingMode;
@property(copy) NSString *label;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long storageMode;
@property(readonly) Class superclass;
@property(readonly) long long type;
@property(readonly) unsigned long long unfilteredResourceOptions;

@end
