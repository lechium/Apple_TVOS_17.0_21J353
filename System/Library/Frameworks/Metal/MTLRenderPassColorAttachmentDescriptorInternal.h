//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassColorAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorInternal : MTLRenderPassColorAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)attachmentDescriptor;	// IMP=0x006000000010385a
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x00000000001041d7
- (void)setStoreActionOptions:(unsigned long long)arg1;	// IMP=0x00000000001041c5
- (unsigned long long)storeActionOptions;	// IMP=0x00000000001041b3
- (void)setStoreAction:(unsigned long long)arg1;	// IMP=0x00000000001041a1
- (unsigned long long)storeAction;	// IMP=0x000000000010418f
- (void)setLoadAction:(unsigned long long)arg1;	// IMP=0x000000000010417d
- (unsigned long long)loadAction;	// IMP=0x000000000010416b
- (_Bool)yInvert;	// IMP=0x0000000000104157
- (void)setYInvert:(_Bool)arg1;	// IMP=0x0000000000104143
- (unsigned long long)resolveDepthPlane;	// IMP=0x000000000010412e
- (void)setResolveDepthPlane:(unsigned long long)arg1;	// IMP=0x0000000000104119
- (unsigned long long)resolveSlice;	// IMP=0x0000000000104104
- (void)setResolveSlice:(unsigned long long)arg1;	// IMP=0x00000000001040ef
- (unsigned long long)resolveLevel;	// IMP=0x00000000001040dd
- (void)setResolveLevel:(unsigned long long)arg1;	// IMP=0x00000000001040cb
- (CDStruct_3ead2808)clearColor;	// IMP=0x00000000001040aa
- (void)setClearColor:(CDStruct_3ead2808)arg1;	// IMP=0x000000000010408b
- (unsigned long long)depthPlane;	// IMP=0x0000000000104079
- (void)setDepthPlane:(unsigned long long)arg1;	// IMP=0x0000000000104067
- (unsigned long long)slice;	// IMP=0x0000000000104055
- (void)setSlice:(unsigned long long)arg1;	// IMP=0x0000000000104043
- (unsigned long long)level;	// IMP=0x0000000000104031
- (void)setLevel:(unsigned long long)arg1;	// IMP=0x000000000010401f
- (id)resolveTexture;	// IMP=0x000000000010400d
- (void)setResolveTexture:(id)arg1;	// IMP=0x0000000000103f83
- (id)texture;	// IMP=0x0000000000103f72
- (void)setTexture:(id)arg1;	// IMP=0x0000000000103eea
- (id)description;	// IMP=0x0000000000103ed6
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000103ae1
- (unsigned long long)hash;	// IMP=0x0000000000103ac8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000103a69
- (void)dealloc;	// IMP=0x0000000000103a13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001038f8
- (id)init;	// IMP=0x000000000010386c

@end
