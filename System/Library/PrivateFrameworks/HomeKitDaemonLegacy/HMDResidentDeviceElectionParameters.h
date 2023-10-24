//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeKitVersion, HMDResidentDevice, HMFBoolean, HMFProductInfo, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface HMDResidentDeviceElectionParameters : HMFObject
{
    HMDResidentDevice *_resident;	// 8 = 0x8
    HMFBoolean *_enabled;	// 16 = 0x10
    long long _location;	// 24 = 0x18
    NSSet *_accessories;	// 32 = 0x20
    HMFProductInfo *_productInfo;	// 40 = 0x28
    HMDHomeKitVersion *_version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000a79b76
@property(readonly) HMDHomeKitVersion *version; // @synthesize version=_version;
@property(readonly) HMFProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(readonly, copy) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly) long long location; // @synthesize location=_location;
@property(readonly, copy, getter=isEnabled) HMFBoolean *enabled; // @synthesize enabled=_enabled;
@property(readonly) HMDResidentDevice *resident; // @synthesize resident=_resident;
- (id)attributeDescriptions;	// IMP=0x0000000000a79873
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a797ee
- (unsigned long long)hash;	// IMP=0x0000000000a797aa
- (long long)compare:(id)arg1 outCriteria:(unsigned long long *)arg2;	// IMP=0x0000000000a7913d
- (long long)compare:(id)arg1;	// IMP=0x0000000000a79129
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)initWithResident:(id)arg1 enabled:(id)arg2 location:(long long)arg3 accessories:(id)arg4;	// IMP=0x0000000000a78c83
- (id)initWithResident:(id)arg1 dictionaryRepresentation:(id)arg2;	// IMP=0x0000000000a78a8d

@end

