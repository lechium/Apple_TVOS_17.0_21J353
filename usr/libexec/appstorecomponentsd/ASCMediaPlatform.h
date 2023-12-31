//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ASCMediaPlatform : NSObject
{
    NSNumber *_deviceCornerRadiusFactor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000013d3b
- (void).cxx_destruct;	// IMP=0x00200000000140a7
@property(readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // @synthesize deviceCornerRadiusFactor=_deviceCornerRadiusFactor;
- (id)description;	// IMP=0x0010000000013fff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000013eed
- (unsigned long long)hash;	// IMP=0x0010000000013e72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000013e67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000013df7
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000013d43
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;	// IMP=0x0010000000013cc8

@end

