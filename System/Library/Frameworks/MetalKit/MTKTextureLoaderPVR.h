//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderPVR
{
    unsigned int _pvrFormat;	// 8 = 0x8
    unsigned int _numSurfaces;	// 12 = 0xc
    NSData *_imageData;	// 16 = 0x10
    struct MTLPixelFormatInfo _pixelFormatInfo;	// 24 = 0x18
}

+ (_Bool)isPVRFile:(id)arg1;	// IMP=0x006000000000fc44
- (void)determineBlockSize:(unsigned long long *)arg1 blocksWide:(unsigned long long *)arg2 blocksHigh:(unsigned long long *)arg3 bytesPerBlock:(unsigned long long *)arg4 fromFormat:(unsigned int)arg5 width:(unsigned long long)arg6 andHeight:(unsigned long long)arg7;	// IMP=0x00000000000104a4
- (_Bool)determineFormat:(unsigned int)arg1 options:(id)arg2;	// IMP=0x0000000000010341
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;	// IMP=0x0000000000010020
- (void)dealloc;	// IMP=0x000000000000ffd2
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000fc7a

@end
