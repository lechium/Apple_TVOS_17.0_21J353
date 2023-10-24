//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIValuePredictor;

__attribute__((visibility("hidden")))
@interface _UITouchPredictor : NSObject
{
    NSMutableArray *_predictions;	// 8 = 0x8
    _Bool _predictionsValid;	// 16 = 0x10
    _UIValuePredictor *_xValuePredictor;	// 24 = 0x18
    _UIValuePredictor *_yValuePredictor;	// 32 = 0x20
    _UIValuePredictor *_angleValuePredictor;	// 40 = 0x28
    _UIValuePredictor *_azimuthValuePredictor;	// 48 = 0x30
    _UIValuePredictor *_forceValuePredictor;	// 56 = 0x38
    double _averageTouchInterval;	// 64 = 0x40
    double _lastTouchTimestamp;	// 72 = 0x48
    double _numPredictionsBuffer[5];	// 80 = 0x50
    long long _numPredictionsBufferCount;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000ec76a7
- (void)_updatePredictionsForTouch:(id)arg1 weight:(double)arg2;	// IMP=0x0000000000ec75b5
- (id)description;	// IMP=0x0000000000ec7572
- (id)descriptionFromIndex:(int)arg1 toIndex:(int)arg2 includeHeader:(_Bool)arg3 includeDetailedConfidence:(_Bool)arg4;	// IMP=0x0000000000ec734c
- (id)_forceValuePredictor;	// IMP=0x0000000000ec733e
- (id)_azimuthValuePredictor;	// IMP=0x0000000000ec7330
- (id)_angleValuePredictor;	// IMP=0x0000000000ec7322
- (id)_yValuePredictor;	// IMP=0x0000000000ec7314
- (id)_xValuePredictor;	// IMP=0x0000000000ec7306
- (id)predictedTouchesForTouch:(id)arg1;	// IMP=0x0000000000ec7290
- (id)_predictedTouchesAtIndex:(unsigned long long)arg1 forTouch:(id)arg2;	// IMP=0x0000000000ec6e8f
- (unsigned long long)_dampenedNumPredictionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000ec6d9b
- (unsigned long long)_numPredictionsAtIndex:(unsigned long long)arg1 hardLimit:(unsigned long long *)arg2;	// IMP=0x0000000000ec6c24
- (void)addTouch:(id)arg1;	// IMP=0x0000000000ec6b3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ec6b0e
- (id)initWithTouchPredictor:(id)arg1;	// IMP=0x0000000000ec6954
- (id)init;	// IMP=0x0000000000ec6678

@end
