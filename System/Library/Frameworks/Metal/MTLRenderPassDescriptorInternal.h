//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor
{
    struct MTLRenderPassDescriptorPrivate _private;	// 40 = 0x28
}

+ (id)renderPassDescriptor;	// IMP=0x0060000000105bcf
- (id)sampleBufferAttachments;	// IMP=0x0000000000107d00
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x0000000000107cf0
- (_Bool)validate:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;	// IMP=0x00000000001074ca
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001073f8
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000010727d
- (void)setRasterizationRateMap:(id)arg1;	// IMP=0x000000000010722d
- (id)rasterizationRateMap;	// IMP=0x0000000000107218
- (unsigned long long)defaultRasterSampleCount;	// IMP=0x0000000000107206
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;	// IMP=0x00000000001071f4
- (unsigned long long)tileHeight;	// IMP=0x00000000001071e2
- (void)setTileHeight:(unsigned long long)arg1;	// IMP=0x00000000001071d0
- (unsigned long long)tileWidth;	// IMP=0x00000000001071be
- (void)setTileWidth:(unsigned long long)arg1;	// IMP=0x00000000001071ac
- (unsigned long long)threadgroupMemoryLength;	// IMP=0x000000000010719a
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;	// IMP=0x0000000000107188
- (unsigned long long)imageblockSampleLength;	// IMP=0x0000000000107176
- (void)setImageblockSampleLength:(unsigned long long)arg1;	// IMP=0x0000000000107164
- (id)binaryArchives;	// IMP=0x000000000010714f
- (void)setBinaryArchives:(id)arg1;	// IMP=0x0000000000107102
- (_Bool)pointCoordYFlipEnabled;	// IMP=0x00000000001070ee
- (void)setPointCoordYFlipEnabled:(_Bool)arg1;	// IMP=0x00000000001070da
- (_Bool)openGLModeEnabled;	// IMP=0x00000000001070c9
- (void)setOpenGLModeEnabled:(_Bool)arg1;	// IMP=0x00000000001070b8
- (_Bool)isDitherEnabled;	// IMP=0x00000000001070a7
- (void)setDitherEnabled:(_Bool)arg1;	// IMP=0x0000000000107096
- (_Bool)skipEmptyTilesOnClearEnabled;	// IMP=0x0000000000107085
- (void)setSkipEmptyTilesOnClearEnabled:(_Bool)arg1;	// IMP=0x0000000000107074
- (_Bool)fineGrainedBackgroundVisibilityEnabled;	// IMP=0x0000000000107063
- (void)setFineGrainedBackgroundVisibilityEnabled:(_Bool)arg1;	// IMP=0x0000000000107052
- (unsigned long long)defaultColorSampleCount;	// IMP=0x0000000000107040
- (void)setDefaultColorSampleCount:(unsigned long long)arg1;	// IMP=0x000000000010702e
- (unsigned long long)renderTargetHeight;	// IMP=0x000000000010701c
- (void)setRenderTargetHeight:(unsigned long long)arg1;	// IMP=0x000000000010700a
- (unsigned long long)renderTargetWidth;	// IMP=0x0000000000106ff8
- (void)setRenderTargetWidth:(unsigned long long)arg1;	// IMP=0x0000000000106fe6
- (unsigned long long)renderTargetArrayLength;	// IMP=0x0000000000106fd4
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;	// IMP=0x0000000000106fc2
- (id)visibilityResultBuffer;	// IMP=0x0000000000106fb0
- (void)setVisibilityResultBuffer:(id)arg1;	// IMP=0x0000000000106f1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000106d22
- (id)description;	// IMP=0x0000000000106d0e
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000001066d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001060fb
- (unsigned long long)hash;	// IMP=0x0000000000105f4f
- (void)dealloc;	// IMP=0x0000000000105ed8
- (id)stencilAttachment;	// IMP=0x0000000000105e66
- (void)setStencilAttachment:(id)arg1;	// IMP=0x0000000000105dc0
- (id)depthAttachment;	// IMP=0x0000000000105d4e
- (void)setDepthAttachment:(id)arg1;	// IMP=0x0000000000105ca8
- (id)colorAttachments;	// IMP=0x0000000000105c97
- (id)init;	// IMP=0x0000000000105be9

@end
