//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NoiseSampler : NSObject
{
    struct vector<unsigned long, std::allocator<unsigned long>> _alias;	// 8 = 0x8
    struct vector<float, std::allocator<float>> _unigram;	// 32 = 0x20
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> _generator;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x000000000006a13a
- (void).cxx_destruct;	// IMP=0x000000000006a100
- (unsigned long long)drawNoise;	// IMP=0x000000000006a008
- (id)initWithUnigram:(float *)arg1 ofSize:(unsigned long long)arg2;	// IMP=0x000000000006996f
- (id)initWithZipfOfSize:(unsigned long long)arg1;	// IMP=0x00000000000697f8
- (id)init;	// IMP=0x00000000000697ea

@end
