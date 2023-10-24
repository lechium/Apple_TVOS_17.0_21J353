//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CMLogItem.h"

@interface CMCatherineData : CMLogItem
{
    double _catherine;	// 16 = 0x10
    double _confidence;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000018e0fc
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double catherine; // @synthesize catherine=_catherine;
- (id)description;	// IMP=0x000000000018e283
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018e1d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018e104
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018e0a4
- (void)dealloc;	// IMP=0x000000000018e075
- (id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3;	// IMP=0x000000000018e012

@end

