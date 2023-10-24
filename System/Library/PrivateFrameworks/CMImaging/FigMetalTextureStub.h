//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap, MTLResource, MTLTexture;

__attribute__((visibility("hidden")))
@interface FigMetalTextureStub : NSObject
{
    NSString *_label;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
    unsigned long long _width;	// 24 = 0x18
    unsigned long long _height;	// 32 = 0x20
    unsigned long long _depth;	// 40 = 0x28
    unsigned long long _usage;	// 48 = 0x30
    unsigned long long _textureType;	// 56 = 0x38
    unsigned long long _pixelFormat;	// 64 = 0x40
    unsigned long long _sampleCount;	// 72 = 0x48
    unsigned long long _arrayLength;	// 80 = 0x50
    unsigned long long _mipmapLevelCount;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000027434
@property(readonly) unsigned long long mipmapLevelCount; // @synthesize mipmapLevelCount=_mipmapLevelCount;
@property(readonly) unsigned long long arrayLength; // @synthesize arrayLength=_arrayLength;
@property(readonly) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly) unsigned long long textureType; // @synthesize textureType=_textureType;
@property(nonatomic) unsigned long long usage; // @synthesize usage=_usage;
@property(readonly) unsigned long long depth; // @synthesize depth=_depth;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000000027109

// Remaining properties
@property(readonly) unsigned long long allocatedSize;
@property(readonly) _Bool allowGPUOptimizedContents;
@property(readonly) id <MTLBuffer> buffer;
@property(readonly) unsigned long long bufferBytesPerRow;
@property(readonly) unsigned long long bufferOffset;
@property(readonly) long long compressionType;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long firstMipmapInTail;
@property(readonly, getter=isFramebufferOnly) _Bool framebufferOnly;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long heapOffset;
@property(readonly) struct __IOSurface *iosurface;
@property(readonly) unsigned long long iosurfacePlane;
@property(readonly) _Bool isSparse;
@property(readonly) unsigned long long parentRelativeLevel;
@property(readonly) unsigned long long parentRelativeSlice;
@property(readonly) id <MTLTexture> parentTexture;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) id <MTLResource> rootResource;
@property(readonly) unsigned long long storageMode;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CDStruct_a06f635e swizzle;
@property(readonly) unsigned long long tailSizeInBytes;

@end

