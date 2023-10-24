//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigMetalUtils;
@protocol MTLHeap;

__attribute__((visibility("hidden")))
@interface FigMetalHeapAllocator : NSObject
{
    id <MTLHeap> _heap;	// 8 = 0x8
    unsigned long long _alignment;	// 16 = 0x10
    FigMetalUtils *_utils;	// 24 = 0x18
    unsigned long long _memSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000024e34
@property(readonly, nonatomic) unsigned long long memSize; // @synthesize memSize=_memSize;
@property(readonly, nonatomic) FigMetalUtils *utils; // @synthesize utils=_utils;
@property(readonly, nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (unsigned long long)bufferOffset:(id)arg1;	// IMP=0x0000000000024e01
- (unsigned long long)textureOffset:(id)arg1;	// IMP=0x0000000000024ce9
- (_Bool)hasCreatedBuffer:(id)arg1;	// IMP=0x0000000000024ca6
- (_Bool)hasCreatedTexture:(id)arg1;	// IMP=0x0000000000024c63
- (void)purgeResources;	// IMP=0x0000000000024c49
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000024995
- (id)newBufferWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000002491b
- (CDStruct_4bcfbbae)getSizeAndAlignForBufferDescriptor:(id)arg1;	// IMP=0x0000000000024877
- (CDStruct_4bcfbbae)getSizeAndAlignForDescriptor:(id)arg1;	// IMP=0x0000000000024728
- (int)setupWithDescriptor:(id)arg1;	// IMP=0x0000000000024557
- (id)description;	// IMP=0x000000000002454a
- (id)initWithMetalUtils:(id)arg1;	// IMP=0x0000000000024493

@end
