//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage;

__attribute__((visibility("hidden")))
@interface AVTStickerImageProp
{
    UIImage *_image;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000034ea5
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)dictionaryWithTargetPath:(id)arg1;	// IMP=0x0000000000034de8
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000345a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034437
- (id)initWithImage:(id)arg1 size:(struct CGSize)arg2 scale:(_Bool)arg3 position:(_Bool)arg4 renderLast:(id)arg5 orientToCamera:(id)arg6 rotation:(id)arg7 palettesDescriptions:modifiers:adjustments: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000034375

@end

