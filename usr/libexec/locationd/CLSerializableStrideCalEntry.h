//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLSerializableStrideCalEntry : NSObject
{
    struct CLStrideCalEntry _entry;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d6a03
- (id)initWithCoder:(id)arg1;	// IMP=0x00200000001d6b97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d6a0b
- (void)getStrideCalEntry:(struct CLStrideCalEntry *)arg1;	// IMP=0x00100000001d69be
- (id)initWithStrideCalEntry:(const struct CLStrideCalEntry *)arg1;	// IMP=0x00100000001d6946

@end
