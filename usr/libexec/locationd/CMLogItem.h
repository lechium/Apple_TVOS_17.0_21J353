//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMLogItem : NSObject
{
    id _internalLogItem;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000015c05c
@property(readonly, nonatomic) double timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000015c102
- (void)dealloc;	// IMP=0x001000000015c0c7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000015c09f
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000015c064
- (id)initWithTimestamp:(double)arg1;	// IMP=0x001000000015bff6

@end

