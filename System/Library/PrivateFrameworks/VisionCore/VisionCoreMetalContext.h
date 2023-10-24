//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface VisionCoreMetalContext : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLLibrary> _library;	// 24 = 0x18
}

+ (id)metalContextAndReturnError:(id *)arg1;	// IMP=0x00600000000201b8
+ (void)makeBufferCoherent:(id)arg1 buffer:(id)arg2;	// IMP=0x00600000000201b2
+ (void)makeTextureCoherent:(id)arg1 texture:(id)arg2;	// IMP=0x00600000000201ac
+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1;	// IMP=0x006000000001fffa
- (void).cxx_destruct;	// IMP=0x000000000001ffc1
@property(readonly, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (unsigned long long)textureBytesPerRow:(int)arg1 format:(unsigned long long)arg2;	// IMP=0x000000000001ff3c
- (void)copyMTLBufferToMTLTexture:(id)arg1 bytesPerRow:(unsigned long long)arg2 texture:(id)arg3;	// IMP=0x000000000001fda8
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5;	// IMP=0x000000000001fd01
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize)arg3 plane:(unsigned long long)arg4;	// IMP=0x000000000001fbec
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3;	// IMP=0x000000000001fb6a
- (id)readBufferFromFile:(const char *)arg1 width:(int)arg2 pixelFormat:(unsigned long long)arg3;	// IMP=0x000000000001fa87
- (id)readTextureFromFile:(const char *)arg1 width:(int)arg2 height:(int)arg3 pixelFormat:(unsigned long long)arg4;	// IMP=0x000000000001f90f
- (id)newBufferWithPixelFormat:(unsigned long long)arg1 width:(int)arg2 data:(const void *)arg3;	// IMP=0x000000000001f89f
- (id)newTextureWithPixelFormat:(unsigned long long)arg1 width:(int)arg2 height:(int)arg3;	// IMP=0x000000000001f7fd
- (int)writeMetalBufferToFile:(const char *)arg1 buffer:(id)arg2;	// IMP=0x000000000001f72c
- (_Bool)writeMetalTextureToFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;	// IMP=0x000000000001f54e
- (_Bool)writeMetalTextureToFile:(const char *)arg1 texture:(id)arg2;	// IMP=0x000000000001f539
- (_Bool)writeMetalTextureToData:(void *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;	// IMP=0x000000000001f406
- (id)initWithLibrary:(id)arg1 device:(id)arg2 commandQueue:(id)arg3;	// IMP=0x000000000001f34e

@end
