//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PNGRenderer
{
    struct __CFURL *fullURL;	// 40 = 0x28
    struct CGColor *background;	// 48 = 0x30
    struct CGColorSpace *colorSpace;	// 56 = 0x38
}

- (struct CGImage *)cgimage;	// IMP=0x00000000000d4cf7
- (void)flushRender;	// IMP=0x00000000000d4c86
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x00000000000d4b00
- (void)setFileURL:(id)arg1;	// IMP=0x00000000000d4acb
- (void)dealloc;	// IMP=0x00000000000d4a7a
- (id)init;	// IMP=0x00000000000d4a19

@end

