//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVFloat64Range : NSObject
{
    double _minimum;	// 8 = 0x8
    double _maximum;	// 16 = 0x10
}

+ (id)float64RangeWithAudioValueRange:(struct AudioValueRange)arg1;	// IMP=0x001000000012527a
+ (id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2;	// IMP=0x001000000012523c
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125452
- (id)description;	// IMP=0x00000000001253d0
- (unsigned long long)hash;	// IMP=0x0000000000125359
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001252b8
- (id)initWithAudioValueRange:(struct AudioValueRange)arg1;	// IMP=0x000000000012522a
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;	// IMP=0x00000000001251d8

@end
