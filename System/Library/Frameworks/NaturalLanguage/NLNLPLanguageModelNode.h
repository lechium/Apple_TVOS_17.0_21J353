//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelNode : NSObject
{
    NSArray *_tokenIDs;	// 8 = 0x8
    NSMutableSet *_strings;	// 16 = 0x10
    NSMutableDictionary *_children;	// 24 = 0x18
}

+ (id)conditionalProbabilitiesForStrings:(id)arg1 modelState:(void *)arg2 copyRequired:(_Bool)arg3;	// IMP=0x0060000000024c43
- (void).cxx_destruct;	// IMP=0x000000000002503c
- (void)_evaluateChildrenWithModelState:(void *)arg1 copyRequired:(_Bool)arg2 probability:(double)arg3 dictionary:(id)arg4;	// IMP=0x00000000000247e1
- (void)_setProbability:(double)arg1 dictionary:(id)arg2;	// IMP=0x0000000000024623
- (void)_addString:(id)arg1 tokenIDs:(id)arg2;	// IMP=0x0000000000024496
- (id)treeDescription;	// IMP=0x000000000002447d
- (id)_treeDescriptionWithPrefix:(id)arg1;	// IMP=0x00000000000241e7
- (id)description;	// IMP=0x00000000000240b7
- (_Bool)isLeaf;	// IMP=0x000000000002409a
- (id)initWithTokenIDs:(id)arg1;	// IMP=0x0000000000023fcf

@end
