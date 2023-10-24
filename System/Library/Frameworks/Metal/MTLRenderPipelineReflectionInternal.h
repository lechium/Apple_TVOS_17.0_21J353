//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPipelineReflection.h"

@class NSArray, NSData, NSDictionary;
@protocol MTLBinding;

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection
{
    CDStruct_d04b17dd _flags;	// 8 = 0x8
    NSArray *_vertexBuiltInArguments;	// 16 = 0x10
    unsigned long long _postVertexDumpStride;	// 24 = 0x18
    NSArray *_postVertexDumpOutputs;	// 32 = 0x20
    NSArray *_inferredInputs;	// 40 = 0x28
    NSArray *_vertexArguments;	// 48 = 0x30
    NSArray *_fragmentArguments;	// 56 = 0x38
    NSArray *_tileArguments;	// 64 = 0x40
    NSArray *_tileBuiltInArguments;	// 72 = 0x48
    id <MTLBinding> _imageBlockDataReturn;	// 80 = 0x50
    NSDictionary *_performanceStatistics;	// 88 = 0x58
    unsigned int _traceBufferIndex;	// 96 = 0x60
    NSData *_vertexPluginReturnData;	// 104 = 0x68
    NSData *_fragmentPluginReturnData;	// 112 = 0x70
    NSArray *_constantSamplerUniqueIdentifiers;	// 120 = 0x78
    NSArray *_constantSamplerDescriptors;	// 128 = 0x80
    NSArray *_objectArguments;	// 136 = 0x88
    NSArray *_meshArguments;	// 144 = 0x90
    NSArray *_objectBuiltInArguments;	// 152 = 0x98
    NSArray *_meshBuiltInArguments;	// 160 = 0xa0
    NSData *_objectPluginReturnData;	// 168 = 0xa8
    NSData *_meshPluginReturnData;	// 176 = 0xb0
    NSArray *_vertexBindings;	// 184 = 0xb8
    NSArray *_fragmentBindings;	// 192 = 0xc0
    NSArray *_tileBindings;	// 200 = 0xc8
    NSArray *_objectBindings;	// 208 = 0xd0
    NSArray *_meshBindings;	// 216 = 0xd8
    unsigned long long _printStyle;	// 224 = 0xe0
}

- (id)description;	// IMP=0x0000000000115a9e
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000114ca6
- (id)meshBindings;	// IMP=0x0000000000114c89
- (id)objectBindings;	// IMP=0x0000000000114c6c
- (id)tileBindings;	// IMP=0x0000000000114c4f
- (id)fragmentBindings;	// IMP=0x0000000000114c32
- (id)vertexBindings;	// IMP=0x0000000000114c15
- (id)meshPluginReturnData;	// IMP=0x0000000000114c04
- (id)objectPluginReturnData;	// IMP=0x0000000000114bf3
- (id)meshBuiltInArguments;	// IMP=0x0000000000114be2
- (id)objectBuiltInArguments;	// IMP=0x0000000000114bd1
- (id)meshArguments;	// IMP=0x0000000000114bc0
- (id)objectArguments;	// IMP=0x0000000000114baf
- (id)imageBlockDataReturn;	// IMP=0x0000000000114b9e
- (id)tileArguments;	// IMP=0x0000000000114b8d
- (id)fragmentArguments;	// IMP=0x0000000000114b7c
- (id)vertexArguments;	// IMP=0x0000000000114b6b
- (id)inferredInputs;	// IMP=0x0000000000114b5a
- (id)postVertexDumpOutputs;	// IMP=0x0000000000114b49
- (unsigned long long)postVertexDumpStride;	// IMP=0x0000000000114b38
- (id)vertexBuiltInArguments;	// IMP=0x0000000000114b27
- (CDStruct_d04b17dd)usageFlags;	// IMP=0x0000000000114b16
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 stride:(unsigned int)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000114aca
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000114a8d
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000114a4f
- (id)constantSamplerDescriptors;	// IMP=0x0000000000114a3e
- (id)constantSamplerUniqueIdentifiers;	// IMP=0x0000000000114a2d
- (id)fragmentPluginReturnData;	// IMP=0x0000000000114a1c
- (id)vertexPluginReturnData;	// IMP=0x0000000000114a0b
- (unsigned int)traceBufferIndex;	// IMP=0x00000000001149fb
- (id)performanceStatistics;	// IMP=0x00000000001149ea
- (void)setPerformanceStatistics:(id)arg1;	// IMP=0x00000000001149b1
- (void)dealloc;	// IMP=0x0000000000114825
- (id)initWithObjectData:(id)arg1 meshData:(id)arg2 fragmentData:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(CDStruct_d04b17dd)arg6;	// IMP=0x0000000000113e79
- (id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_d04b17dd)arg5;	// IMP=0x0000000000113d79
- (id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(CDStruct_d04b17dd)arg6;	// IMP=0x000000000011328d

@end

