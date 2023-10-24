//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplL
{
    const void *_maxEntModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NSDictionary *_labelMap;	// 24 = 0x18
    NSDictionary *_vocabularyMap;	// 32 = 0x20
    NSDictionary *_documentFrequencyMap;	// 40 = 0x28
    unsigned long long _numberOfTrainingInstances;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000010f49
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000010e48
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000010d37
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000010c3d
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000010b58
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x0000000000010b47
- (id)documentFrequencyMap;	// IMP=0x0000000000010b32
- (id)vocabularyMap;	// IMP=0x0000000000010b1d
- (id)labelMap;	// IMP=0x0000000000010b08
- (id)configuration;	// IMP=0x0000000000010af3
- (id)modelData;	// IMP=0x0000000000010ac5
- (void)dealloc;	// IMP=0x0000000000010a7f
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010874
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000106ac
- (id)initWithOwnedModelObject:(const void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;	// IMP=0x000000000001052b

@end
