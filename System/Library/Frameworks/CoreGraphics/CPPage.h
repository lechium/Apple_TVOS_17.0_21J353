//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPChunk, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPPage
{
    int pageNumber;	// 96 = 0x60
    struct CGRect pageCropBox;	// 104 = 0x68
    _Bool hasZones;	// 136 = 0x88
    _Bool hasTextLines;	// 137 = 0x89
    _Bool isDirty;	// 138 = 0x8a
    _Bool isStartOfSection;	// 139 = 0x8b
    long long maxLayoutZOrder;	// 144 = 0x90
    CPChunk *background;	// 152 = 0x98
    float complexity;	// 160 = 0xa0
    int rotation;	// 164 = 0xa4
    NSMutableArray *shapesOnPage;	// 168 = 0xa8
    NSMutableArray *imagesOnPage;	// 176 = 0xb0
    NSMutableArray *graphicsOnPage;	// 184 = 0xb8
    NSMutableArray *columnsOnPage;	// 192 = 0xc0
    NSMutableArray *annotationsOnPage;	// 200 = 0xc8
    struct CPPDFContext *pdfContext;	// 208 = 0xd0
    _Bool contextOwner;	// 216 = 0xd8
    struct CGPDFPage *pdfPage;	// 224 = 0xe0
    NSMutableArray *textLinesOnPage;	// 232 = 0xe8
    void *_layout;	// 240 = 0xf0
    id hitTest;	// 248 = 0xf8
    _Bool reconstructed;	// 256 = 0x100
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } mutex;	// 264 = 0x108
}

+ (void)sortByReadingOrder:(id)arg1;	// IMP=0x00100000001ca8a2
- (void)addColumns:(id)arg1;	// IMP=0x00000000001c9a5b
- (id)columnsOnPage;	// IMP=0x00000000001c9a4a
- (id)textLinesOnPage;	// IMP=0x00000000001c99d5
- (void)layDownObjectsOnPageOld;	// IMP=0x00000000001c9496
- (void)sortByReadingOrder;	// IMP=0x00000000001c947a
- (void)layDownObjectsOnPage;	// IMP=0x00000000001c9447
- (unsigned int)setReadingOrder:(id)arg1 from:(unsigned int)arg2;	// IMP=0x00000000001c9027
- (unsigned int)setGraphicPositions:(id)arg1 from:(unsigned int)arg2;	// IMP=0x00000000001c8f88
- (unsigned int)setCellPositionsOf:(id)arg1 from:(unsigned int)arg2;	// IMP=0x00000000001c8ee9
- (unsigned int)setPositionsOf:(id)arg1 from:(unsigned int)arg2;	// IMP=0x00000000001c8dc0
- (unsigned int)traverse:(id)arg1 ordinal:(unsigned int)arg2;	// IMP=0x00000000001c8d23
- (id)children;	// IMP=0x00000000001c8d19
- (void)restoreBackGroundObjectToPage;	// IMP=0x00000000001c8cf3
- (void)setBackground:(id)arg1;	// IMP=0x00000000001c8cb5
- (id)background;	// IMP=0x00000000001c8ca4
- (void)setRotation:(int)arg1;	// IMP=0x00000000001c8c5e
- (int)rotation;	// IMP=0x00000000001c8c4e
- (void)setIsStartOfSection:(_Bool)arg1;	// IMP=0x00000000001c8c3e
- (_Bool)isStartOfSection;	// IMP=0x00000000001c8c2e
- (void)setHasTextLines:(_Bool)arg1;	// IMP=0x00000000001c8c1e
- (_Bool)hasTextLines;	// IMP=0x00000000001c8c0e
- (id)bodyZone;	// IMP=0x00000000001c8b8e
- (_Bool)hasZones;	// IMP=0x00000000001c8b7e
- (void)setHasZones:(_Bool)arg1;	// IMP=0x00000000001c8b6e
- (id)graphicsOnPage;	// IMP=0x00000000001c8b5d
- (id)annotationsOnPage;	// IMP=0x00000000001c8b4c
- (void)addAnnotation:(id)arg1;	// IMP=0x00000000001c8afe
- (id)imagesOnPage;	// IMP=0x00000000001c8aed
- (void)addImage:(id)arg1;	// IMP=0x00000000001c8a9f
- (id)shapesOnPage;	// IMP=0x00000000001c8a8e
- (void)addShape:(id)arg1;	// IMP=0x00000000001c8a40
- (id)parent;	// IMP=0x00000000001c8a38
- (void)setPageNumber:(int)arg1;	// IMP=0x00000000001c8a28
- (int)pageNumber;	// IMP=0x00000000001c8a18
- (void)setComplexity:(float)arg1;	// IMP=0x00000000001c8a06
- (float)complexity;	// IMP=0x00000000001c89f4
- (void)accept:(id)arg1;	// IMP=0x00000000001c89d9
- (struct CGRect)pageCropBox;	// IMP=0x00000000001c89b9
- (void)setPageCropBox:(struct CGRect)arg1;	// IMP=0x00000000001c899b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c8867
- (struct CPPDFContext *)PDFContext;	// IMP=0x00000000001c8856
- (void)setPDFContext:(struct CPPDFContext *)arg1;	// IMP=0x00000000001c883a
- (void)reconstruct;	// IMP=0x00000000001c80d6
- (struct CGPDFPage *)pdfPage;	// IMP=0x00000000001c80c5
- (void)dealloc;	// IMP=0x00000000001c800c
- (void)finalize;	// IMP=0x00000000001c7fce
- (void)dispose;	// IMP=0x00000000001c7f2f
- (id)initWithPDFPage:(struct CGPDFPage *)arg1;	// IMP=0x00000000001c7eb8
- (id)init;	// IMP=0x00000000001c7d56
- (struct CGPDFLayout *)layout;	// IMP=0x0000000000299103
- (_Bool)populatePDFLayout:(struct CGPDFLayout *)arg1;	// IMP=0x0000000000299085
- (id)hitTest;	// IMP=0x0000000000299043
- (struct CPPDFClipBuffer *)clipBuffer;	// IMP=0x000000000029902d

@end

