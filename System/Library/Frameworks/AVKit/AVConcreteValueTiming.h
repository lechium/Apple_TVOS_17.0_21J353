//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVConcreteValueTiming
{
    double _value;	// 8 = 0x8
    double _timeStamp;	// 16 = 0x10
    double _rate;	// 24 = 0x18
}

- (CDStruct_f25faad3)_timing;	// IMP=0x0000000000121ebe
- (double)rate;	// IMP=0x0000000000121eac
- (double)anchorTimeStamp;	// IMP=0x0000000000121e9a
- (double)anchorValue;	// IMP=0x0000000000121e88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000121e59
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;	// IMP=0x0000000000121e2c

@end

