//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _HMDLocalDeviceHandle
{
    NSUUID *_deviceIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002739a2
+ (_Bool)isValidDestination:(id)arg1;	// IMP=0x0060000000273972
- (void).cxx_destruct;	// IMP=0x0000000000273754
@property(readonly, copy, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002736a8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000027360d
- (id)destination;	// IMP=0x000000000027358c
- (_Bool)isLocal;	// IMP=0x0000000000273584
- (id)privateDescription;	// IMP=0x00000000002734fd
- (id)description;	// IMP=0x00000000002734ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002733d2
- (unsigned long long)hash;	// IMP=0x000000000027338e
- (id)initWithDestination:(id)arg1;	// IMP=0x00000000002730bf
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x0000000000272f61

@end

