//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeTextureImageRendition : CUIThemeRendition
{
    NSMutableArray *_textureImages;	// 216 = 0xd8
}

- (id)textureImages;	// IMP=0x0000000000070f71
- (void)dealloc;	// IMP=0x0000000000070f2f
- (int)pixelFormat;	// IMP=0x0000000000070f03
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x0000000000070b9a

@end
