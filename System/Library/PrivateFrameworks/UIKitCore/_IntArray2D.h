//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IntArray2D : NSObject
{
    long long *_arrayData;	// 8 = 0x8
    unsigned long long _iSize;	// 16 = 0x10
    unsigned long long _jSize;	// 24 = 0x18
    _Bool _shouldBoundsCheck;	// 32 = 0x20
}

+ (id)arrayWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;	// IMP=0x0060000000b2322f
@property(nonatomic) _Bool shouldBoundsCheck; // @synthesize shouldBoundsCheck=_shouldBoundsCheck;
@property(readonly, nonatomic) unsigned long long jSize; // @synthesize jSize=_jSize;
@property(readonly, nonatomic) unsigned long long iSize; // @synthesize iSize=_iSize;
- (void):(unsigned long long)arg1:(unsigned long long)arg2 newValue:(long long)arg3;	// IMP=0x0000000000b23628
- (long long):(unsigned long long)arg1:(unsigned long long)arg2 outOfBoundsReturnValue:(long long)arg3;	// IMP=0x0000000000b235d6
- (long long):(unsigned long long)arg1:(unsigned long long)arg2;	// IMP=0x0000000000b2359b
- (void)assertBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;	// IMP=0x0000000000b234da
- (_Bool)inBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;	// IMP=0x0000000000b234c3
- (id)initWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;	// IMP=0x0000000000b233e2
- (id)description;	// IMP=0x0000000000b232a4
- (void)dealloc;	// IMP=0x0000000000b2326a

@end

