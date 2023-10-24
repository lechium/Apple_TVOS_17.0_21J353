//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDDeviceHandle;

__attribute__((visibility("hidden")))
@interface HMDRemoteDeviceMessageDestination
{
    HMDDevice *_device;	// 8 = 0x8
    HMDDeviceHandle *_preferredHandle;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x006000000085ef6a
- (void).cxx_destruct;	// IMP=0x000000000085ef39
@property(copy, nonatomic) HMDDeviceHandle *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (id)remoteDestinationString;	// IMP=0x000000000085ebbb
- (id)privateDescription;	// IMP=0x000000000085eba7
- (id)description;	// IMP=0x000000000085eb93
- (id)debugDescription;	// IMP=0x000000000085eb7c
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000085e9fa
- (id)shortDescription;	// IMP=0x000000000085e938
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000085e816
- (unsigned long long)hash;	// IMP=0x000000000085e78a
- (id)initWithTarget:(id)arg1 device:(id)arg2;	// IMP=0x000000000085e712
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000085e65e

@end
