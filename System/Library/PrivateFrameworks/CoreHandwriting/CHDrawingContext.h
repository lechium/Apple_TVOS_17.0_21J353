//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHClassifiableDrawing;

@interface CHDrawingContext : NSObject
{
    unsigned long long _edgeIndex;	// 8 = 0x8
    long long _numberOfSubstrokes;	// 16 = 0x10
    long long _numberOfSegments;	// 24 = 0x18
    CHClassifiableDrawing *_classifiableDrawing;	// 32 = 0x20
    set_f63680ae _strokeGroup;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000004b040
- (void).cxx_destruct;	// IMP=0x000000000004b010
@property(readonly, nonatomic) set_f63680ae strokeGroup; // @synthesize strokeGroup=_strokeGroup;
@property(readonly, nonatomic) CHClassifiableDrawing *classifiableDrawing; // @synthesize classifiableDrawing=_classifiableDrawing;
@property(readonly, nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(readonly, nonatomic) long long numberOfSubstrokes; // @synthesize numberOfSubstrokes=_numberOfSubstrokes;
@property(readonly, nonatomic) unsigned long long edgeIndex; // @synthesize edgeIndex=_edgeIndex;
- (id)initWithEdgeIndex:(unsigned long long)arg1 numberOfSubstrokes:(long long)arg2 numberOfSegments:(long long)arg3 classifiableDrawing:(id)arg4 strokeGroup:(set_f63680ae)arg5;	// IMP=0x000000000004aea0

@end

