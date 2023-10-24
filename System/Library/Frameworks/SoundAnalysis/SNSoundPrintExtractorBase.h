//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNSoundPrintExtractorBase : NSObject
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    unsigned int _blockSize;	// 24 = 0x18
}

+ (id)windowDurationConstraint;	// IMP=0x00400000000b02e3
+ (CDStruct_1b6d18a9)defaultWindowDuration;	// IMP=0x00400000000b02c1
+ (unsigned int)sampleRate;	// IMP=0x00400000000b02b6
+ (id)resultsBoxName;	// IMP=0x00400000000b01f6
- (id).cxx_construct;	// IMP=0x00000000000b0501
- (void).cxx_destruct;	// IMP=0x00000000000b04f3
@property(readonly, nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) void *resultsBox;
- (id)initWithSoundPrintModel:(id)arg1 sampleRate:(double)arg2 windowDuration:(CDStruct_1b6d18a9)arg3 overlapFactor:(float)arg4 error:(id *)arg5;	// IMP=0x00000000000afc3e

@end

