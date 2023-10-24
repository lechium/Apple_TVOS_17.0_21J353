//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ASCMediaPlatform : NSObject
{
    NSNumber *_deviceCornerRadiusFactor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002df74
- (void).cxx_destruct;	// IMP=0x000000000002e2e0
@property(readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor; // @synthesize deviceCornerRadiusFactor=_deviceCornerRadiusFactor;
- (id)description;	// IMP=0x000000000002e238
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e126
- (unsigned long long)hash;	// IMP=0x000000000002e0ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e0a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e030
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002df7c
- (id)initWithDeviceCornerRadiusFactor:(id)arg1;	// IMP=0x000000000002df01

@end
