//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLRangeBrick : NSObject
{
    int _size;	// 8 = 0x8
    float _start;	// 12 = 0xc
    float _stepSize;	// 16 = 0x10
    float _startValueParameter;	// 20 = 0x14
    float _endValueParameter;	// 24 = 0x18
    float _stepSizeValueParameter;	// 28 = 0x1c
}

@property(readonly, nonatomic) float stepSizeValueParameter; // @synthesize stepSizeValueParameter=_stepSizeValueParameter;
@property(readonly, nonatomic) float endValueParameter; // @synthesize endValueParameter=_endValueParameter;
@property(readonly, nonatomic) float startValueParameter; // @synthesize startValueParameter=_startValueParameter;
@property(readonly, nonatomic) float stepSize; // @synthesize stepSize=_stepSize;
@property(readonly, nonatomic) float start; // @synthesize start=_start;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x00000000000ebe20
- (id)computeDynamicOutputShape:(id)arg1;	// IMP=0x00000000000ebb3f
- (_Bool)hasDynamicOutputShape:(unsigned long long)arg1;	// IMP=0x00000000000ebb32
- (_Bool)hasGPUSupport;	// IMP=0x00000000000ebb2a
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000eb89c
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000000000eb765

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

