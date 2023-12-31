//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject
{
    unsigned long long height;	// 8 = 0x8
    unsigned long long width;	// 16 = 0x10
    unsigned long long bpr;	// 24 = 0x18
    void *data;	// 32 = 0x20
    short red;	// 40 = 0x28
    short green;	// 42 = 0x2a
    short blue;	// 44 = 0x2c
    short alpha;	// 46 = 0x2e
    struct CGColorSpace *cs;	// 48 = 0x30
}

+ (id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(struct CGColorSpace *)arg3;	// IMP=0x00100000000fe74a
+ (id)forImage:(id)arg1 usingContext:(id)arg2;	// IMP=0x00100000000fe6ed
+ (id)withDictionary:(id)arg1;	// IMP=0x00100000000fe566
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3 usingContext:(id)arg4;	// IMP=0x00100000000fe245
+ (id)fromImage:(struct CGImage *)arg1;	// IMP=0x00100000000fde35
+ (id)fromImageFile:(id)arg1;	// IMP=0x00100000000fdd7a
- (unsigned int)bytesPerPixel;	// IMP=0x00000000000fe9c6
- (const char *)rowAtIndex:(unsigned int)arg1;	// IMP=0x00000000000fe9a9
- (short)alpha;	// IMP=0x00000000000fe99f
- (short)blue;	// IMP=0x00000000000fe995
- (short)green;	// IMP=0x00000000000fe98b
- (short)red;	// IMP=0x00000000000fe981
- (unsigned long long)height;	// IMP=0x00000000000fe977
- (unsigned long long)width;	// IMP=0x00000000000fe96d
- (void)dealloc;	// IMP=0x00000000000fe920
- (id)init;	// IMP=0x00000000000fe8e1
- (void)dumpImageAsDict:(id)arg1;	// IMP=0x00000000000fe3b0
- (void)dumpImageAsDeviceRGB:(id)arg1;	// IMP=0x00000000000fe205
- (void)dumpImage:(id)arg1;	// IMP=0x00000000000fe198
- (void)_dumpImage:(id)arg1 colorspace:(struct CGColorSpace *)arg2;	// IMP=0x00000000000fdfc4

@end

