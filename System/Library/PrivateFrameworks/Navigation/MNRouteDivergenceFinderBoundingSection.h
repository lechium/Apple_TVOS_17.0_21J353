//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNRouteDivergenceFinderBoundingSection : NSObject
{
    MNRouteDivergenceFinderBoundingSection *_left;	// 8 = 0x8
    MNRouteDivergenceFinderBoundingSection *_right;	// 16 = 0x10
    unsigned long long _leafIndex;	// 24 = 0x18
    double _length;	// 32 = 0x20
    struct GEOPolylineCoordinateRange _range;	// 40 = 0x28
    CDStruct_02837cd9 _boundingRect;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x000000000009f38e
- (void).cxx_destruct;	// IMP=0x000000000009f366
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) unsigned long long leafIndex; // @synthesize leafIndex=_leafIndex;
@property(retain, nonatomic) MNRouteDivergenceFinderBoundingSection *right; // @synthesize right=_right;
@property(retain, nonatomic) MNRouteDivergenceFinderBoundingSection *left; // @synthesize left=_left;
@property(nonatomic) CDStruct_02837cd9 boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) struct GEOPolylineCoordinateRange range; // @synthesize range=_range;
- (void)_appendDescription:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x000000000009f1f1
- (id)description;	// IMP=0x000000000009f09d
- (id)boundsDescription;	// IMP=0x000000000009ef9c
- (id)treeDescription;	// IMP=0x000000000009ef34
- (_Bool)containsCoordinate:(CDStruct_071ac149)arg1;	// IMP=0x000000000009eefc
- (void)traverseWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ee79
- (id)leafSectionsIntersectingSection:(id)arg1 paddingMapPoints:(double)arg2;	// IMP=0x000000000009eba2
@property(readonly, nonatomic) _Bool isLeaf;

@end

