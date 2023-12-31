//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPRotatedRegion
{
    struct CGRect normalizedBounds;	// 128 = 0x80
    _Bool dirtyNormalizedBounds;	// 160 = 0xa0
}

- (void)resizeWith:(id)arg1;	// IMP=0x000000000018111a
- (void)fitBoundsToChildren;	// IMP=0x0000000000180e63
- (double)bottom;	// IMP=0x0000000000180d7e
- (double)top;	// IMP=0x0000000000180c8c
- (double)center;	// IMP=0x0000000000180c4c
- (double)right;	// IMP=0x0000000000180b77
- (double)left;	// IMP=0x0000000000180ac0
- (struct CGPoint)anchor;	// IMP=0x0000000000180a85
- (struct CGRect)normalizedBounds;	// IMP=0x0000000000180a3a
- (id)init;	// IMP=0x00000000001809dd

@end

