//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDrawing, NSMutableIndexSet;

@interface CHCornerDetector : NSObject
{
    _Bool _shouldUseDynamicSampling;	// 8 = 0x8
    double _minimumSignificantSegmentLength;	// 16 = 0x10
    CHDrawing *_drawing;	// 24 = 0x18
    CHDrawing *_resampledDrawing;	// 32 = 0x20
    unsigned long long _directionChangeCount;	// 40 = 0x28
    unsigned long long _highestDirectionChangeCount;	// 48 = 0x30
    unsigned long long __strawSize;	// 56 = 0x38
    NSMutableIndexSet *__cornerIndexSet;	// 64 = 0x40
    NSMutableIndexSet *__directionChangeCornerIndexes;	// 72 = 0x48
    struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> __resampledDrawingPointMap;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x0000000000078750
- (void).cxx_destruct;	// IMP=0x00000000000786c0
@property(readonly, nonatomic) unsigned long long highestDirectionChangeCount; // @synthesize highestDirectionChangeCount=_highestDirectionChangeCount;
@property(readonly, nonatomic) unsigned long long directionChangeCount; // @synthesize directionChangeCount=_directionChangeCount;
@property(readonly, copy, nonatomic) CHDrawing *resampledDrawing; // @synthesize resampledDrawing=_resampledDrawing;
@property(copy, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
@property(nonatomic) double minimumSignificantSegmentLength; // @synthesize minimumSignificantSegmentLength=_minimumSignificantSegmentLength;
@property(nonatomic) _Bool shouldUseDynamicSampling; // @synthesize shouldUseDynamicSampling=_shouldUseDynamicSampling;
- (id)directionChangeCornerIndexes;	// IMP=0x0000000000076850
- (id)cornerIndexes;	// IMP=0x0000000000076810
- (id)init;	// IMP=0x0000000000075b50

@end

