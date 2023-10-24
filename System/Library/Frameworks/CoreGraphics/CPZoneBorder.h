//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPPage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZoneBorder : NSObject
{
    struct CGRect bounds;	// 8 = 0x8
    CPPage *page;	// 40 = 0x28
    NSMutableArray *ownerArray;	// 48 = 0x30
    NSMutableArray *graphicObjects;	// 56 = 0x38
    NSMutableArray *neighbors;	// 64 = 0x40
    NSMutableArray *intersections;	// 72 = 0x48
    _Bool isHorizontal;	// 80 = 0x50
    _Bool hasForwardVector;	// 81 = 0x51
    _Bool hasBackwardVector;	// 82 = 0x52
    double overhangMin;	// 88 = 0x58
    double overhangMax;	// 96 = 0x60
}

+ (struct CGRect)extendRect:(struct CGRect)arg1;	// IMP=0x00100000000fcef7
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;	// IMP=0x00100000000fce24
+ (void)outerVertices:(struct CGPoint *)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3;	// IMP=0x00100000000fc9e8
+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;	// IMP=0x00100000000fc8e8
+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect)arg3;	// IMP=0x00100000000fc75f
- (long long)compareYBounds:(id)arg1;	// IMP=0x00000000000fc6f7
- (long long)compareXBounds:(id)arg1;	// IMP=0x00000000000fc690
- (void)removeLooseThreadsStartingFrom:(id)arg1;	// IMP=0x00000000000fc53f
- (void)trimToLastIntersections;	// IMP=0x00000000000fc108
- (void)combine:(id)arg1;	// IMP=0x00000000000fbfcc
- (_Bool)continues:(id)arg1;	// IMP=0x00000000000fbf2e
- (_Bool)crosses:(id)arg1;	// IMP=0x00000000000fb579
- (_Bool)extractCycleTo:(id)arg1 goingForward:(_Bool)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect *)arg5;	// IMP=0x00000000000fb035
- (_Bool)extractCycleTo:(id)arg1 goingForward:(_Bool)arg2 startingAtIndex:(unsigned int)arg3;	// IMP=0x00000000000faf85
- (_Bool)hasVectorGoingForward:(_Bool)arg1 startingAtIndex:(unsigned int *)arg2;	// IMP=0x00000000000faeaf
- (void)instantiateVectors;	// IMP=0x00000000000fadff
- (_Bool)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(_Bool)arg2;	// IMP=0x00000000000fadae
- (_Bool)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(_Bool)arg2;	// IMP=0x00000000000fad5d
- (id)getNextBorder:(unsigned int)arg1;	// IMP=0x00000000000facff
- (_Bool)windsClockwiseOnto:(id)arg1;	// IMP=0x00000000000fac8a
- (unsigned int)indexOfIntersectionWith:(id)arg1;	// IMP=0x00000000000fac10
- (_Bool)intersectsWith:(id)arg1 atRect:(struct CGRect *)arg2;	// IMP=0x00000000000fab66
- (unsigned int)intersectionCount;	// IMP=0x00000000000fab46
- (_Bool)isVertical;	// IMP=0x00000000000fab39
- (_Bool)isHorizontal;	// IMP=0x00000000000fab30
- (void)setSide:(int)arg1 ofPage:(id)arg2;	// IMP=0x00000000000fa869
- (_Bool)hasBackwardVector;	// IMP=0x00000000000fa860
- (void)setHasBackwardVector:(_Bool)arg1;	// IMP=0x00000000000fa857
- (_Bool)hasForwardVector;	// IMP=0x00000000000fa84e
- (void)setHasForwardVector:(_Bool)arg1;	// IMP=0x00000000000fa845
- (_Bool)hasNeighborShape:(id)arg1 atSide:(int)arg2;	// IMP=0x00000000000fa790
- (_Bool)hasNeighborShape:(id)arg1;	// IMP=0x00000000000fa708
- (id)neighborAtIndex:(unsigned int)arg1;	// IMP=0x00000000000fa6e7
- (void)removeNeighborAtIndex:(unsigned int)arg1;	// IMP=0x00000000000fa6c8
- (void)addNeighbor:(id)arg1;	// IMP=0x00000000000fa627
- (unsigned int)neighborCount;	// IMP=0x00000000000fa607
- (id)graphicObjects;	// IMP=0x00000000000fa5fd
- (id)graphicObjectAtIndex:(unsigned int)arg1;	// IMP=0x00000000000fa5e5
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;	// IMP=0x00000000000fa5cd
- (void)addGraphicObject:(id)arg1;	// IMP=0x00000000000fa4f4
- (unsigned int)graphicObjectCount;	// IMP=0x00000000000fa4d4
- (long long)zOrder;	// IMP=0x00000000000fa459
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000fa443
- (struct CGRect)bounds;	// IMP=0x00000000000fa42b
- (id)ownerArray;	// IMP=0x00000000000fa421
- (void)removeFromArrayAtIndex:(unsigned int)arg1;	// IMP=0x00000000000fa3d5
- (void)removeFromArray;	// IMP=0x00000000000fa3b4
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x00000000000fa389
- (void)addToArray:(id)arg1;	// IMP=0x00000000000fa360
- (id)page;	// IMP=0x00000000000fa356
- (id)copyWithoutIntersections;	// IMP=0x00000000000fa2c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fa202
- (void)dealloc;	// IMP=0x00000000000fa1b1
- (id)initSuper;	// IMP=0x00000000000fa182
- (id)initWithGraphicObject:(id)arg1;	// IMP=0x00000000000fa123
- (id)init;	// IMP=0x00000000000fa0a8

@end
