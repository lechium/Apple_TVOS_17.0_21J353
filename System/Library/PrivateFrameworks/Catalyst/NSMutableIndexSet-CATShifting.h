//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableIndexSet.h>

@interface NSMutableIndexSet (CATShifting)
- (void)cat_moveIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x006000000004b76f
- (void)cat_shiftAndRemoveIndexesInRange:(struct _NSRange)arg1;	// IMP=0x006000000004b727
- (void)cat_shiftAndRemoveIndex:(unsigned long long)arg1;	// IMP=0x006000000004b710
- (void)cat_shiftAndAddIndexesInRange:(struct _NSRange)arg1;	// IMP=0x006000000004b6ce
- (void)cat_shiftAndAddIndex:(unsigned long long)arg1;	// IMP=0x006000000004b6b7
@end

