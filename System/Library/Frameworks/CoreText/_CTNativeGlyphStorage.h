//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage
{
    const long long *_attachCounts;	// 56 = 0x38
    const struct CGPoint *_origins;	// 64 = 0x40
    unsigned long long _retainCount;	// 72 = 0x48
    struct GlyphStack *_stack;	// 80 = 0x50
    long long _capacity;	// 88 = 0x58
    void *_preallocatedStorage;	// 96 = 0x60
}

+ (id)newWithCount:(long long)arg1 capacity:(long long)arg2;	// IMP=0x0060000000076684
- (void)popGlyphAtIndex:(long long)arg1;	// IMP=0x00000000000773ff
- (void)pushGlyphAtIndex:(long long)arg1;	// IMP=0x000000000007730a
- (void)initGlyphStackWithCapacity:(long long)arg1;	// IMP=0x0000000000077288
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;	// IMP=0x0000000000077179
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000770ac
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000000076e57
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;	// IMP=0x0000000000076e31
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000076e23
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000076da8
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000076d9a
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000076d8d
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000076cfc
- (struct CGPoint)originAtIndex:(long long)arg1;	// IMP=0x0000000000076ccd
- (void)resetOrigins:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000000076cc7
- (_Bool)implementsOrigins;	// IMP=0x0000000000076cbf
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000076c6b
- (long long)attachmentCountAtIndex:(long long)arg1;	// IMP=0x0000000000076c4d
- (const struct CGSize *)allocatedAdvances;	// IMP=0x0000000000076bfa
- (void)dealloc;	// IMP=0x0000000000076ae0
- (unsigned long long)retainCount;	// IMP=0x0000000000076acc
- (oneway void)release;	// IMP=0x0000000000076a67
- (id)retain;	// IMP=0x0000000000076a2e
- (_Bool)_isDeallocating;	// IMP=0x0000000000076a26
- (_Bool)_tryRetain;	// IMP=0x0000000000076a1e
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000000076880
- (id)initWithCount:(long long)arg1 capacity:(long long)arg2;	// IMP=0x00000000000767a0

@end

