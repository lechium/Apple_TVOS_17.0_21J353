//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, _UIVectorTextLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutRun : NSObject
{
    unsigned long long _glyphCount;	// 8 = 0x8
    NSAttributedString *_sourceString;	// 16 = 0x10
    _UIVectorTextLayoutInfo *_layoutInfo;	// 24 = 0x18
    unsigned long long _lineIndex;	// 32 = 0x20
    struct __CTRun *_runRef;	// 40 = 0x28
    double _baseline;	// 48 = 0x30
    struct CGRect _lineRect;	// 56 = 0x38
    struct CGRect _usedLineRect;	// 88 = 0x58
    struct CGRect _usedRunRect;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000133c62e
@property(nonatomic) struct CGRect usedRunRect; // @synthesize usedRunRect=_usedRunRect;
@property(nonatomic) struct CGRect usedLineRect; // @synthesize usedLineRect=_usedLineRect;
@property(nonatomic) struct CGRect lineRect; // @synthesize lineRect=_lineRect;
@property(nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(readonly, nonatomic) struct __CTRun *_CTRun; // @synthesize _CTRun=_runRef;
@property(readonly, nonatomic) unsigned long long lineIndex; // @synthesize lineIndex=_lineIndex;
- (void)_enumerateGlyphsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000133c1f4
- (void)enumerateGlyphsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000133be95
- (void)renderInContext:(struct CGContext *)arg1;	// IMP=0x000000000133bc56
- (_Bool)shouldRender;	// IMP=0x000000000133bc32
- (id)font;	// IMP=0x000000000133bc24
- (id)string;	// IMP=0x000000000133bb1b
- (struct _NSRange)stringRange;	// IMP=0x000000000133bafa
- (long long)glyphCount;	// IMP=0x000000000133baf0
- (void)dealloc;	// IMP=0x000000000133bab1
- (id)initWithCTRun:(struct __CTRun *)arg1 lineIndex:(unsigned long long)arg2 layoutInfo:(id)arg3;	// IMP=0x000000000133ba21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
