//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLNLPSentenceClassifierModel : NSObject
{
    void *_sentenceClassifierModel;	// 8 = 0x8
    MLModelDescription *_modelDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025d16
@property(retain) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000025805
- (void)dealloc;	// IMP=0x00000000000257c6
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000251a1

@end

