//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CVNLPCTCBeamState : NSObject
{
    NSMutableDictionary *_mutablePaths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000429f0
@property(retain, nonatomic) NSMutableDictionary *mutablePaths; // @synthesize mutablePaths=_mutablePaths;
- (void)applyWordLanguageModelProbabilityToPaths;	// IMP=0x0000000000042670
- (void)mergePathsWithTrailingWhitespaces;	// IMP=0x0000000000042260
- (void)kBest:(id *)arg1 discarded:(id *)arg2 k:(unsigned long long)arg3 shouldUpdateLMState:(_Bool)arg4;	// IMP=0x0000000000041970
- (id)sortedKeys;	// IMP=0x0000000000041950
- (void)enumeratePathsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041880
- (id)paths;	// IMP=0x0000000000041860
- (id)pathForString:(id)arg1;	// IMP=0x0000000000041830
- (id)debugDescription;	// IMP=0x00000000000416a0
- (void)addPath:(id)arg1;	// IMP=0x0000000000041580
- (id)init;	// IMP=0x0000000000041500

@end
