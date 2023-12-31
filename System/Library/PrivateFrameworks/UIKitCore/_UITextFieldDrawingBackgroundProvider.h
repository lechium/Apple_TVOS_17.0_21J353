//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UITextFieldDrawingBackgroundProvider
{
    struct {
        unsigned int drawsContentBasedOnTraits:1;
    } _flags;	// 8 = 0x8
    _Bool _drawsContent;	// 9 = 0x9
}

@property(nonatomic) _Bool drawsContent; // @synthesize drawsContent=_drawsContent;
- (void)_buildDescription:(id)arg1;	// IMP=0x0000000000d75925
- (void)setNeedsDisplay;	// IMP=0x0000000000d758b8
- (void)drawInBounds:(struct CGRect)arg1;	// IMP=0x0000000000d757a1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000d75760
- (void)removeFromTextField;	// IMP=0x0000000000d756b9
- (void)addToTextField:(id)arg1;	// IMP=0x0000000000d75633
- (void)setDrawsContentBasedOnTraitsIfNeeded;	// IMP=0x0000000000d75591
- (void)_setDrawsContent:(_Bool)arg1;	// IMP=0x0000000000d754e4
- (id)init;	// IMP=0x0000000000d75488

@end

