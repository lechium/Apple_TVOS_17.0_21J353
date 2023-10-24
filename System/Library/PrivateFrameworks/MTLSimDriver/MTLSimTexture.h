//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLSimBuffer, NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap, MTLResource, MTLTexture;

__attribute__((visibility("hidden")))
@interface MTLSimTexture
{
    MTLSimTexture *_parentTexture;	// 32 = 0x20
    unsigned long long _parentRelativeLevel;	// 40 = 0x28
    unsigned long long _parentRelativeSlice;	// 48 = 0x30
    MTLSimBuffer *_buffer;	// 56 = 0x38
    unsigned long long _textureType;	// 64 = 0x40
    unsigned long long _pixelFormat;	// 72 = 0x48
    unsigned long long _decompressedPixelFormat;	// 80 = 0x50
    unsigned long long _usage;	// 88 = 0x58
    MTLSimBuffer *_backingBuffer;	// 96 = 0x60
    unsigned long long _backingBufferSize;	// 104 = 0x68
    id <MTLTexture> _decompressedTextureView;	// 112 = 0x70
    unsigned long long _width;	// 120 = 0x78
    unsigned long long _height;	// 128 = 0x80
    unsigned long long _depth;	// 136 = 0x88
    unsigned long long _mipmapLevelCount;	// 144 = 0x90
    unsigned long long _sampleCount;	// 152 = 0x98
    unsigned long long _arrayLength;	// 160 = 0xa0
    unsigned long long _numFaces;	// 168 = 0xa8
    struct __IOSurface *_iosurface;	// 176 = 0xb0
    unsigned long long _iosurfacePlane;	// 184 = 0xb8
    unsigned long long _bufferOffset;	// 192 = 0xc0
    unsigned long long _bufferBytesPerRow;	// 200 = 0xc8
    _Bool _allowGPUOptimizedContents;	// 208 = 0xd0
    _Bool _framebufferOnly;	// 209 = 0xd1
    unsigned int _swizzle;	// 212 = 0xd4
    _Bool _isInternalTextureView;	// 216 = 0xd8
    unsigned long long _firstMipmapInTail;	// 224 = 0xe0
    unsigned long long _tailSizeInBytes;	// 232 = 0xe8
    _Bool _isDrawable;	// 240 = 0xf0
    _Bool _shareable;	// 241 = 0xf1
    unsigned long long rotation;	// 248 = 0xf8
    unsigned long long iosurfacePlane;	// 256 = 0x100
    unsigned long long _uniqueIdentifier;	// 264 = 0x108
    unsigned long long parentRelativeSlice;	// 272 = 0x110
    id <MTLResource> rootResource;	// 280 = 0x118
}

+ (void)decompress:(const char *)arg1 expandedTex:(char *)arg2 srcFormat:(unsigned long long)arg3 destFormat:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 destRowBytes:(unsigned long long)arg7 srcRowBytes:(unsigned long long)arg8;	// IMP=0x00100000000144b4
+ (unsigned long long)getDecompressedFormat:(unsigned long long)arg1;	// IMP=0x001000000001415d
@property(readonly) unsigned long long tailSizeInBytes; // @synthesize tailSizeInBytes=_tailSizeInBytes;
@property(readonly) unsigned long long firstMipmapInTail; // @synthesize firstMipmapInTail=_firstMipmapInTail;
@property(readonly) unsigned long long usage; // @synthesize usage=_usage;
@property(getter=isShareable, setter=_simSetShareable:) _Bool shareable; // @synthesize shareable=_shareable;
@property(readonly, getter=isFramebufferOnly) _Bool framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property(readonly) _Bool allowGPUOptimizedContents; // @synthesize allowGPUOptimizedContents=_allowGPUOptimizedContents;
@property(readonly) id <MTLResource> rootResource; // @synthesize rootResource;
@property(readonly) unsigned long long parentRelativeLevel; // @synthesize parentRelativeLevel=_parentRelativeLevel;
@property(readonly) _Bool isDrawable; // @synthesize isDrawable=_isDrawable;
@property(readonly) unsigned long long parentRelativeSlice; // @synthesize parentRelativeSlice;
@property(readonly) unsigned long long iosurfacePlane; // @synthesize iosurfacePlane;
@property(readonly) struct __IOSurface *iosurface; // @synthesize iosurface=_iosurface;
@property(readonly) unsigned long long rotation; // @synthesize rotation;
- (void)_swapDecompressedPropertiesWith:(id)arg1;	// IMP=0x00000000000171fd
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long gpuHandle;
@property(readonly) _Bool isCompressed;
@property(readonly) long long compressionType;
@property(readonly, nonatomic) unsigned long long compressionFootprint;
@property(readonly) unsigned long long textureType;
@property(readonly) unsigned long long arrayLength;
@property(readonly) unsigned long long mipmapLevelCount;
@property(readonly) unsigned long long numFaces;
@property(readonly) unsigned long long depth;
@property(readonly) unsigned long long height;
@property(readonly) unsigned long long width;
@property(readonly) unsigned long long sampleCount;
@property(readonly) unsigned long long decompressedPixelFormat;
@property(readonly) unsigned long long pixelFormat;
@property(readonly) unsigned int swizzleKey; // @synthesize swizzleKey=_swizzle;
@property(readonly, nonatomic) CDStruct_a06f635e swizzle; // @dynamic swizzle;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;	// IMP=0x0000000000016d79
- (void)didModifyData;	// IMP=0x0000000000016d73
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;	// IMP=0x0000000000016d2d
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;	// IMP=0x00000000000169c4
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;	// IMP=0x0000000000016669
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000000165b5
- (id)newTextureViewWithPixelFormatInternal:(unsigned long long)arg1 isInternalTextureView:(_Bool)arg2;	// IMP=0x0000000000016265
- (id)newRemoteTextureViewForDevice:(id)arg1;	// IMP=0x000000000001625d
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_caaed6bc)arg3 mipmapLevel:(unsigned long long)arg4;	// IMP=0x0000000000016219
@property(readonly) unsigned long long hazardTrackingMode;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_caaed6bc)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;	// IMP=0x0000000000015e54
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x0000000000015e49
@property(readonly) unsigned long long bufferBytesPerRow;
@property(readonly) unsigned long long bufferOffset; // @dynamic bufferOffset;
@property(retain, setter=_simSetParentTexture:) id <MTLTexture> parentTexture; // @dynamic parentTexture;
@property(readonly) id <MTLBuffer> buffer; // @dynamic buffer;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000015731
@property(readonly) unsigned int textureRef;
- (void)dealloc;	// IMP=0x000000000001557a
- (id)initWithTexture:(id)arg1 device:(id)arg2;	// IMP=0x0000000000015571
- (id)initWithDescriptor:(id)arg1 decompressedPixelFormat:(unsigned long long)arg2 iosurface:(struct __IOSurface *)arg3 plane:(unsigned long long)arg4 textureRef:(unsigned int)arg5 heap:(id)arg6 device:(id)arg7 shareable:(_Bool)arg8;	// IMP=0x00000000000154d2
- (id)initWithDescriptor:(id)arg1 decompressedPixelFormat:(unsigned long long)arg2 iosurface:(struct __IOSurface *)arg3 plane:(unsigned long long)arg4 textureRef:(unsigned int)arg5 heap:(id)arg6 device:(id)arg7;	// IMP=0x0000000000015177
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 descriptor:(id)arg4 textureRef:(unsigned int)arg5;	// IMP=0x0000000000014f9b
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 decompressedPixelFormat:(unsigned long long)arg3 textureRef:(unsigned int)arg4 isInternalTextureView:(_Bool)arg5;	// IMP=0x0000000000014ed2
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 decompressedPixelFormat:(unsigned long long)arg3 textureType:(unsigned long long)arg4 levels:(struct _NSRange)arg5 slices:(struct _NSRange)arg6 swizzle:(CDStruct_a06f635e)arg7 textureRef:(unsigned int)arg8 isInternalTextureView:(_Bool)arg9;	// IMP=0x0000000000014e81
- (id)initWithTextureInternal:(id)arg1 pixelFormat:(unsigned long long)arg2 decompressedPixelFormat:(unsigned long long)arg3 textureType:(unsigned long long)arg4 levels:(struct _NSRange)arg5 slices:(struct _NSRange)arg6 swizzle:(CDStruct_a06f635e)arg7 compressedView:(_Bool)arg8 textureRef:(unsigned int)arg9 isInternalTextureView:(_Bool)arg10;	// IMP=0x0000000000014af7
- (unsigned long long)calculateOffsetToRegion:(CDStruct_caaed6bc)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3;	// IMP=0x0000000000014859
- (void)decompressPlaceholder:(const char *)arg1 expandedTex:(char *)arg2 srcFormat:(unsigned long long)arg3 destFormat:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 destRowBytes:(unsigned long long)arg7 srcRowBytes:(unsigned long long)arg8;	// IMP=0x0000000000014840
@property(readonly) _Bool isSparse;
@property(readonly) id <MTLTexture> decompressedTextureView;
@property(readonly) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) id <MTLBuffer> backingBuffer;
@property(readonly) long long compressionFeedback; // @dynamic compressionFeedback;

// Remaining properties
@property(readonly) unsigned long long allocatedSize;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) unsigned long long hash;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long heapOffset;
@property(copy) NSString *label;
@property(readonly) unsigned long long protectionOptions;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property(readonly) unsigned int serializerResourceRef;
@property(readonly) unsigned long long sparseSurfaceDefaultValue;
@property(readonly) unsigned long long storageMode;
@property(readonly) Class superclass;
@property(readonly) unsigned long long unfilteredResourceOptions;

@end
