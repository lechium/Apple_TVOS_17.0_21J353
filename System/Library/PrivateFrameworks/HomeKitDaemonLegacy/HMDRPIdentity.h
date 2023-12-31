//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFKey;

__attribute__((visibility("hidden")))
@interface HMDRPIdentity : HMFObject
{
    HMFKey *_deviceIRK;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000545a36
+ (id)logCategory;	// IMP=0x0010000000545a06
+ (id)identityWithRPIdentity:(id)arg1;	// IMP=0x001000000054591d
- (void).cxx_destruct;	// IMP=0x000000000054590a
@property(readonly, copy) HMFKey *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000545881
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005457f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005457e6
- (id)logIdentifier;	// IMP=0x00000000005457cc
- (_Bool)isEqualToRPIndentity:(id)arg1;	// IMP=0x0000000000545737
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000545660
- (unsigned long long)hash;	// IMP=0x000000000054561c
- (id)shortDescription;	// IMP=0x0000000000545602
- (id)initWithDeviceIRK:(id)arg1;	// IMP=0x000000000054555d
- (id)init;	// IMP=0x00000000005454b5

@end

