//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTKMeshBufferAllocator, NSMutableOrderedSet, NSString;
@protocol MDLMeshBufferAllocator, MTLBuffer;

__attribute__((visibility("hidden")))
@interface MTKMeshBufferZone : NSObject
{
    NSMutableOrderedSet *_buffers;	// 8 = 0x8
    _Bool _destroyInvoked;	// 16 = 0x10
    MTKMeshBufferAllocator *_allocator;	// 24 = 0x18
    unsigned long long _capacity;	// 32 = 0x20
    id <MTLBuffer> _buffer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000013ca3
@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) id <MDLMeshBufferAllocator> allocator; // @synthesize allocator=_allocator;
- (void)destroyBuffer:(id)arg1;	// IMP=0x0000000000013b56
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000000137f0
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;	// IMP=0x00000000000136ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

