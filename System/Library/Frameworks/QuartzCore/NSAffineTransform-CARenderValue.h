//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAffineTransform.h>

@interface NSAffineTransform (CARenderValue)
- (unsigned long long)CA_copyNumericValue:(double *)arg1;	// IMP=0x006000000005233a
- (unsigned long long)CA_numericValueCount;	// IMP=0x006000000005232f
- (struct Object *)CA_copyRenderValue;	// IMP=0x00600000000522b2
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x006000000021d8b3
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;	// IMP=0x006000000021d690
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x006000000027506e
- (id)CAMLType;	// IMP=0x0060000000275061
- (struct CGAffineTransform)CA_CGAffineTransformValue;	// IMP=0x0060000000276732
@end

