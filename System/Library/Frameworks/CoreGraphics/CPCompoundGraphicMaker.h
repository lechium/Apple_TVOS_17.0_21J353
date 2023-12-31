//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPChunk, CPCluster;

__attribute__((visibility("hidden")))
@interface CPCompoundGraphicMaker : NSObject
{
    CPChunk *parentChunk;	// 8 = 0x8
    _Bool shapesAreVectorGraphics;	// 16 = 0x10
    unsigned int shapeCount;	// 20 = 0x14
    id *shapes;	// 24 = 0x18
    double pageSpread;	// 32 = 0x20
    CPCluster *cluster;	// 40 = 0x28
    unsigned int groupInfoCount;	// 48 = 0x30
    struct {
        unsigned int _field1;
        struct CGRect _field2;
    } *groupInfoArray;	// 56 = 0x38
    _Bool disposed;	// 64 = 0x40
}

+ (_Bool)makeCompoundGraphicsInZonesOf:(id)arg1;	// IMP=0x00100000004a12bc
- (_Bool)makeCompoundGraphics;	// IMP=0x00000000004a0cf1
- (_Bool)groupOverlappingGraphics;	// IMP=0x00000000004a0931
- (_Bool)makeCompoundGraphicsFromShapeGroups;	// IMP=0x00000000004a087a
- (void)coalesceShapeGroups;	// IMP=0x00000000004a0702
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;	// IMP=0x00000000004a05ed
- (void)addGroupInfoWithIndex:(unsigned int)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00000000004a05bd
- (_Bool)findClusterLevel;	// IMP=0x00000000004a0398
- (void)dealloc;	// IMP=0x00000000004a0350
- (void)finalize;	// IMP=0x00000000004a0312
- (void)dispose;	// IMP=0x00000000004a02d5
- (id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000004a0199

@end

