//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIRenditionMetrics, CUIRenditionSliceInformation;

__attribute__((visibility("hidden")))
@interface CUIMutableThemeRendition : CUIThemeRendition
{
    struct _renditionkeytoken *_renditionKey;	// 216 = 0xd8
    struct CGImage *_image;	// 224 = 0xe0
    CUIRenditionSliceInformation *_sliceInformation;	// 232 = 0xe8
    CUIRenditionMetrics *_renditionMetrics;	// 240 = 0xf0
}

- (id)metrics;	// IMP=0x00000000000898f6
- (id)sliceInformation;	// IMP=0x00000000000898e5
- (struct CGImage *)unslicedImage;	// IMP=0x00000000000898d4
- (const struct _renditionkeytoken *)key;	// IMP=0x00000000000898c3
- (void)setName:(id)arg1;	// IMP=0x0000000000089888
- (void)dealloc;	// IMP=0x0000000000089810
- (id)initWithCGImage:(struct CGImage *)arg1 withDescription:(id)arg2 forKey:(const struct _renditionkeytoken *)arg3;	// IMP=0x0000000000089164

@end

