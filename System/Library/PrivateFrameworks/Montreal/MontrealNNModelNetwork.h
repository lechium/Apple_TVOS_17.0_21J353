//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MontrealNNModelOptimizerParam, MontrealNNModelQuantization, NSArray, NSString;

@interface MontrealNNModelNetwork
{
    NSArray *_nodes;	// 8 = 0x8
    NSArray *_inputs;	// 16 = 0x10
    NSArray *_outputs;	// 24 = 0x18
    MontrealNNModelQuantization *_quantization;	// 32 = 0x20
    NSString *_jsonDir;	// 40 = 0x28
    MontrealNNModelOptimizerParam *_optimizerParams;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000246260
@property(readonly) MontrealNNModelOptimizerParam *optimizerParams; // @synthesize optimizerParams=_optimizerParams;
@property(readonly) NSString *jsonDir; // @synthesize jsonDir=_jsonDir;
@property(readonly) MontrealNNModelQuantization *quantization; // @synthesize quantization=_quantization;
@property(retain) NSArray *outputs; // @synthesize outputs=_outputs;
@property(retain) NSArray *inputs; // @synthesize inputs=_inputs;
@property(retain) NSArray *nodes; // @synthesize nodes=_nodes;
- (void *)generateModelContainer;	// IMP=0x0000000000245e80
- (id)createDataContainer;	// IMP=0x0000000000245c60
- (void)generateJSONAtPath:(id)arg1;	// IMP=0x00000000002458a0
- (id)jsonDescription;	// IMP=0x00000000002456f0
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000245530
- (void)removeView:(id)arg1 nodesToRemove:(id)arg2;	// IMP=0x0000000000245150
- (void)collapsePackUnpack:(id)arg1 nodesToRemove:(id)arg2;	// IMP=0x0000000000244b80
- (void)validateNodeTensors;	// IMP=0x00000000002444e0
- (void)collapseNodes;	// IMP=0x0000000000244040
- (void)validateNetworkTensors:(id)arg1;	// IMP=0x0000000000243bd0
- (id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 optimizerParams:(id)arg4 jsonDir:(id)arg5 optimization:(unsigned long long)arg6;	// IMP=0x00000000002439c0
- (id)initWithModelContainer:(void *)arg1 tensors:(id)arg2;	// IMP=0x00000000002437e0
- (id)initWithJSONDir:(id)arg1;	// IMP=0x0000000000243440
- (id)init;	// IMP=0x00000000002433b0
- (id)checkForValidity;	// IMP=0x0000000000243160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

