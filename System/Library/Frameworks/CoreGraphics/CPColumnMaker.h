//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPColumnMaker : NSObject
{
    NSMutableArray *columns;	// 8 = 0x8
    CPZone *currentZone;	// 16 = 0x10
    NSMutableArray *allParagraphs;	// 24 = 0x18
    NSMutableArray *thinHorizontalShapes;	// 32 = 0x20
    NSMutableArray *otherShapes;	// 40 = 0x28
    NSMutableArray *images;	// 48 = 0x30
    NSMutableArray *paragraphWrappers;	// 56 = 0x38
    struct CGRect pageBounds;	// 64 = 0x40
    double maxParagraphDistance;	// 96 = 0x60
}

@property struct CGRect pageBounds; // @synthesize pageBounds;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;	// IMP=0x00000000005e6caf
- (void)anchorImages;	// IMP=0x00000000005e68fc
- (void)splitColumns:(id)arg1;	// IMP=0x00000000005e63ed
- (double)averageSpacing:(id)arg1;	// IMP=0x00000000005e6239
- (_Bool)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect)arg3;	// IMP=0x00000000005e5a7b
- (void)callOuts;	// IMP=0x00000000005e4d7c
- (void)intersectionCallout:(id)arg1;	// IMP=0x00000000005e477c
- (_Bool)canSafelyAdd:(id)arg1 to:(id)arg2;	// IMP=0x00000000005e4774
- (_Bool)column:(id)arg1 isLinkedBelowTo:(id)arg2;	// IMP=0x00000000005e46fd
- (_Bool)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;	// IMP=0x00000000005e4658
- (id)chunkAbove:(id)arg1 in:(id)arg2;	// IMP=0x00000000005e40eb
- (id)paragraphAbove:(id)arg1 in:(id)arg2;	// IMP=0x00000000005e3d31
- (id)paragraphBelow:(id)arg1 in:(id)arg2;	// IMP=0x00000000005e3965
- (_Bool)paragraph:(id)arg1 isBelow:(id)arg2;	// IMP=0x00000000005e3819
- (_Bool)paragraph:(id)arg1 isAbove:(id)arg2;	// IMP=0x00000000005e36cd
- (_Bool)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;	// IMP=0x00000000005e3534
- (_Bool)cuttingShapeBetween:(id)arg1 and:(id)arg2;	// IMP=0x00000000005e2b23
- (void)partitionShapes:(id)arg1;	// IMP=0x00000000005e2848
- (_Bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3;	// IMP=0x00000000005e2697
- (id)columns;	// IMP=0x00000000005e268d
- (void)dealloc;	// IMP=0x00000000005e262e
- (id)init;	// IMP=0x00000000005e25eb

@end

