//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModel.h"

__attribute__((visibility("hidden")))
@interface NLLMSLanguageModel : NLLanguageModel
{
    struct LanguageModel _model;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000296c2
- (void).cxx_destruct;	// IMP=0x00000000000296b1
- (void *)_underlyingModel;	// IMP=0x00000000000296a1
- (id)sessionWithOptions:(id)arg1;	// IMP=0x000000000002963d
- (_Bool)generatesPredictions;	// IMP=0x0000000000029635
- (id)initWithLocalization:(id)arg1 options:(id)arg2;	// IMP=0x00000000000291e0

@end

