//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MontrealNNModelNetwork, NSMutableDictionary;

@interface MontrealNNGenerateModel : NSObject
{
    struct MontrealNeuralNetwork *_nnObject;	// 8 = 0x8
    unsigned long long _weightFormat;	// 16 = 0x10
    MontrealNNModelNetwork *_network;	// 24 = 0x18
    NSMutableDictionary *_inputs;	// 32 = 0x20
    NSMutableDictionary *_outputs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002423a0
@property(readonly) NSMutableDictionary *outputs; // @synthesize outputs=_outputs;
@property(readonly) NSMutableDictionary *inputs; // @synthesize inputs=_inputs;
@property(readonly) MontrealNNModelNetwork *network; // @synthesize network=_network;
@property(readonly) unsigned long long weightFormat; // @synthesize weightFormat=_weightFormat;
- (id)networkOutputs;	// IMP=0x0000000000242090
- (id)networkInputs;	// IMP=0x0000000000241df0
- (void)removeOutput:(id)arg1;	// IMP=0x0000000000241ca0
- (void)addOutputs:(id)arg1;	// IMP=0x00000000002419b0
- (void)removeInput:(id)arg1;	// IMP=0x0000000000241860
- (void)addInputs:(id)arg1;	// IMP=0x0000000000241570
- (id)modelContainerPath;	// IMP=0x0000000000241250
- (void *)generateModelContainer;	// IMP=0x0000000000241090
- (void)merge:(id)arg1;	// IMP=0x0000000000240e50
@property struct MontrealNeuralNetwork *nnObject; // @synthesize nnObject=_nnObject;
- (void)dealloc;	// IMP=0x0000000000240d90
- (id)initWithWeightFormat:(unsigned long long)arg1;	// IMP=0x0000000000240ca0

@end

