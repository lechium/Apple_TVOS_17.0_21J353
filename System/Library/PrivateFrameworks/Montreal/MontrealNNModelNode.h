//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MontrealNNModelQuantization, NSArray, NSDictionary, NSString;

@interface MontrealNNModelNode
{
    _Bool _parametersSet;	// 8 = 0x8
    NSString *_nodeStr;	// 16 = 0x10
    NSArray *_activations;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSDictionary *_properties;	// 40 = 0x28
    NSArray *_inputs;	// 48 = 0x30
    NSArray *_inputsWithDimensions;	// 56 = 0x38
    NSArray *_outputs;	// 64 = 0x40
    NSArray *_outputsWithDimensions;	// 72 = 0x48
    NSArray *_weights;	// 80 = 0x50
    MontrealNNModelQuantization *_quantization;	// 88 = 0x58
    CDStruct_96916c69 _parameters;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001768d0
@property _Bool parametersSet; // @synthesize parametersSet=_parametersSet;
@property(readonly) MontrealNNModelQuantization *quantization; // @synthesize quantization=_quantization;
@property(readonly) NSArray *weights; // @synthesize weights=_weights;
@property(retain, nonatomic) NSArray *outputsWithDimensions; // @synthesize outputsWithDimensions=_outputsWithDimensions;
@property(retain, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(retain, nonatomic) NSArray *inputsWithDimensions; // @synthesize inputsWithDimensions=_inputsWithDimensions;
@property(retain, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSArray *activations; // @synthesize activations=_activations;
@property(readonly) NSString *nodeStr; // @synthesize nodeStr=_nodeStr;
@property CDStruct_96916c69 parameters; // @synthesize parameters=_parameters;
@property(readonly, getter=isValid) _Bool valid;
- (id)createDataContainer;	// IMP=0x00000000001764b0
- (void)generateJSONAtPath:(id)arg1;	// IMP=0x0000000000176340
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000176220
- (id)jsonDescription;	// IMP=0x0000000000175fd0
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000175c30
- (CDStruct_96916c69)parameters:(void *)arg1;	// IMP=0x0000000000175b90
- (void)keepTensors:(id)arg1;	// IMP=0x00000000001758a0
- (id)auditAndUpdateTensors:(id)arg1 dimensionTensors:(id)arg2;	// IMP=0x0000000000175490
- (id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 jsonDir:(id)arg4;	// IMP=0x0000000000174ab0
- (id)initWithName:(id)arg1 nodeStr:(id)arg2 activations:(id)arg3 properties:(id)arg4 weights:(id)arg5;	// IMP=0x00000000001748e0
- (id)checkForValidity;	// IMP=0x00000000001746a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

