//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCControllerButtonInput.h"

@class GCControllerAxisInput;

__attribute__((visibility("hidden")))
@interface _GCControllerAxisButtonInput : GCControllerButtonInput
{
    _Bool _positive;	// 8 = 0x8
    GCControllerAxisInput *_axis;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000028f80
@property(readonly, nonatomic, getter=isPositive) _Bool positive; // @synthesize positive=_positive;
@property(nonatomic) __weak GCControllerAxisInput *axis; // @synthesize axis=_axis;
- (id)unmappedLocalizedName;	// IMP=0x0000000000028e10
- (id)localizedName;	// IMP=0x0000000000028cdd
- (float)value;	// IMP=0x0000000000028c7b
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;	// IMP=0x0000000000028c32
- (_Bool)_setValue:(float)arg1;	// IMP=0x0000000000028c19
- (_Bool)_commitPendingValueOnQueue:(id)arg1;	// IMP=0x0000000000028bb8
- (void)_setPendingValue:(float)arg1;	// IMP=0x0000000000028a80
- (_Bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;	// IMP=0x00000000000289fb
- (_Bool)_setValueFromAxisButton:(float)arg1;	// IMP=0x00000000000289e2
- (_Bool)isAnalog;	// IMP=0x00000000000289a8
- (id)collection;	// IMP=0x0000000000028962
- (id)initWithAxis:(id)arg1 positive:(_Bool)arg2;	// IMP=0x00000000000287d8

@end

