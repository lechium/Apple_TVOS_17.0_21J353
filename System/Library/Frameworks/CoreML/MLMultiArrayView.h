//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MLMultiArray.h"

__attribute__((visibility("hidden")))
@interface MLMultiArrayView : MLMultiArray
{
    MLMultiArray *_parent;	// 24 = 0x18
}

+ (void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id *)arg3 resultingStrides:(id *)arg4;	// IMP=0x0060000000044433
+ (_Bool)isSqueezableShape:(id)arg1 dimensions:(id)arg2;	// IMP=0x00600000000441e7
+ (_Bool)isSqueezableShape:(id)arg1;	// IMP=0x0060000000044109
- (void).cxx_destruct;	// IMP=0x00000000000440f6
@property(readonly, nonatomic) MLMultiArray *parent; // @synthesize parent=_parent;
- (id)initExpandingDimensionsOfMultiArray:(id)arg1 axis:(long long)arg2;	// IMP=0x0000000000043a40
- (id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000433a7
- (id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000042e91

@end

