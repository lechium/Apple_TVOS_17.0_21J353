//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLHeap, MTLRenderPipelineState, MTLVisibleFunctionTable, MTLVisibleFunctionTableSPI><MTLResourceSPI;

@interface CaptureMTLVisibleFunctionTable : NSObject
{
    id <MTLVisibleFunctionTableSPI><MTLResourceSPI> _baseObject;	// 8 = 0x8
    id <MTLDevice> _captureDevice;	// 16 = 0x10
    id <MTLComputePipelineState> _computePipelineState;	// 24 = 0x18
    id <MTLRenderPipelineState> _renderPipelineState;	// 32 = 0x20
    struct GTTraceContext *_traceContext;	// 40 = 0x28
    struct GTTraceStream *_traceStream;	// 48 = 0x30
    NSMutableArray *_functionArray;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003bb43
@property(readonly, nonatomic) NSArray *functionArray; // @synthesize functionArray=_functionArray;
- (void)waitUntilComplete;	// IMP=0x000000000003bb23
- (void)makeAliasable;	// IMP=0x000000000003bb0d
- (_Bool)isPurgeable;	// IMP=0x000000000003baf7
- (_Bool)isComplete;	// IMP=0x000000000003bae1
- (_Bool)isAliasable;	// IMP=0x000000000003bacb
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x000000000003ba76
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003b9c9
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003b91c
- (void)dealloc;	// IMP=0x000000000003b831
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003b81b
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long protectionOptions;
@property(copy) NSString *label;
@property(readonly) unsigned long long heapOffset;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long gpuHandle;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000003b4e7
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000003b4d6
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000003b415
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000003b3b5
- (id)originalObject;	// IMP=0x000000000003b3a7
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000003b31a
- (void)setValue:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000003b2cd
- (void)setValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000003b286
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x000000000003b270
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000003b19d
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000003b106
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(nonatomic) unsigned long long globalBufferOffset;
@property(retain, nonatomic) id <MTLBuffer> globalBuffer;
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000003ae07
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x000000000003ad3b
- (void)setFunctions:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000003aa2f
@property(readonly) id <MTLVisibleFunctionTable> baseObject;
- (id)initWithBaseObject:(id)arg1 captureRenderPipelineState:(id)arg2 descriptor:(id)arg3;	// IMP=0x000000000003a839
- (id)initWithBaseObject:(id)arg1 captureComputePipelineState:(id)arg2 descriptor:(id)arg3;	// IMP=0x000000000003a651

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

