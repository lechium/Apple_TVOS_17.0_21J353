//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNMTLShaderBindingsGenerator : NSObject
{
    struct os_unfair_lock_s _generateLock;	// 8 = 0x8
    struct {
        int stage;
        NSArray *arguments;
        NSDictionary *customBlocks;
        struct __C3DFXPass *pass;
    } _current;	// 16 = 0x10
    NSMutableDictionary *_nodeBindings;	// 48 = 0x30
    NSMutableDictionary *_frameBindings;	// 56 = 0x38
    NSMutableDictionary *_shadableBindings;	// 64 = 0x40
    NSMutableDictionary *_passBindings;	// 72 = 0x48
    NSMutableDictionary *_lightBindings;	// 80 = 0x50
    CDStruct_21854d8c _sceneBuffer;	// 88 = 0x58
}

+ (void)registerShadableArgumentBindingBlockForBuffers:(CDUnknownBlockType)arg1 textures:(CDUnknownBlockType)arg2 samplers:(CDUnknownBlockType)arg3;	// IMP=0x006000000027d915
+ (void)registerUserBlockTrampoline:(CDUnknownBlockType)arg1;	// IMP=0x006000000027d900
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x006000000027d852
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x006000000027d7b1
+ (void)registerSemantic:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x006000000027d735
+ (void)deallocateRegistry;	// IMP=0x006000000027d6d2
+ (void)allocateRegistry;	// IMP=0x006000000027d64f
- (_Bool)addPassResourceBindingsForArgument:(id)arg1;	// IMP=0x000000000027f0f5
- (void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000027ee62
- (void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2;	// IMP=0x000000000027eda0
- (id)_dictionaryForFrequency:(int)arg1;	// IMP=0x000000000027ed83
- (void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(struct __C3DFXMetalProgram *)arg3 material:(struct __C3DMaterial *)arg4 geometry:(struct __C3DGeometry *)arg5 pass:(struct __C3DFXPass *)arg6;	// IMP=0x000000000027ea86
- (void)_parseArguments:(id)arg1 function:(id)arg2 renderPipeline:(id)arg3;	// IMP=0x000000000027dd88
- (long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000000027daa6
- (void)dealloc;	// IMP=0x000000000027da47
- (id)init;	// IMP=0x000000000027d954

@end

