//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLPipelineLibrary-Protocol.h>

@class MTLComputePipelineDescriptor, MTLRenderPipelineDescriptor, NSArray, NSString;
@protocol MTLComputePipelineState, MTLDevice, MTLPipelineCache, MTLRenderPipelineState;

@protocol MTLPipelineLibrarySPI <MTLPipelineLibrary>
@property(readonly) NSArray *metallibPaths;
@property(readonly, nonatomic) id <MTLPipelineCache> functionCache;
@property(readonly, nonatomic) id <MTLPipelineCache> pipelineCache;
@property _Bool disableRunTimeCompilation;
@property(readonly) NSArray *pipelineNames;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithName:(NSString *)arg1 error:(id *)arg2;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithName:(NSString *)arg1 error:(id *)arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithName:(NSString *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithName:(NSString *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
@end

