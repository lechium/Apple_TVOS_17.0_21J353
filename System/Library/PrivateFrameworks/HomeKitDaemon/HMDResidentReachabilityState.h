//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDResidentReachabilityState : HMFObject
{
    _Bool _isReachable;	// 8 = 0x8
    NSUUID *_residentDeviceIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000755974
- (void).cxx_destruct;	// IMP=0x0000000000755961
@property(readonly) _Bool isReachable; // @synthesize isReachable=_isReachable;
@property(readonly, copy) NSUUID *residentDeviceIdentifier; // @synthesize residentDeviceIdentifier=_residentDeviceIdentifier;
- (id)attributeDescriptions;	// IMP=0x000000000075580f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000755745
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007556a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000075569d
- (unsigned long long)hash;	// IMP=0x0000000000755639
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000075552b
- (id)initWithResidentDeviceIdentifier:(id)arg1 isReachable:(_Bool)arg2;	// IMP=0x00000000007554a0

@end
