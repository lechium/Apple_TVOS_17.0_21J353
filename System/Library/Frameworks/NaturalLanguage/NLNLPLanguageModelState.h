//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModelState.h"

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelState : NLLanguageModelState
{
    struct CoreLanguageModelWithState *_modelState;	// 32 = 0x20
}

- (void)enumeratePredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023af6
- (id)conditionalProbabilitiesForStrings:(id)arg1;	// IMP=0x0000000000023ac9
- (id)conditionalProbabilityForString:(id)arg1;	// IMP=0x0000000000023840
- (id)conditionalProbabilityForToken:(id)arg1;	// IMP=0x000000000002371c
- (void)resetContext;	// IMP=0x00000000000236d6
- (void)addContext:(id)arg1;	// IMP=0x000000000002364d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002356c
- (id)description;	// IMP=0x00000000000234c1
- (void)dealloc;	// IMP=0x000000000002347b
- (id)initWithSession:(id)arg1 options:(id)arg2 context:(id)arg3 modelState:(void *)arg4;	// IMP=0x0000000000023437

@end

