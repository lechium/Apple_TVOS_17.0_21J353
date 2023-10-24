//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDRemoteAccountHandleMessageDestination
{
    _Bool _multicast;	// 8 = 0x8
    _Bool _restrictToResidentCapable;	// 9 = 0x9
    HMDAccountHandle *_handle;	// 16 = 0x10
    NSDictionary *_deviceCapabilities;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x006000000085de17
- (void).cxx_destruct;	// IMP=0x000000000085dde6
@property(readonly, copy) NSDictionary *deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property _Bool restrictToResidentCapable; // @synthesize restrictToResidentCapable=_restrictToResidentCapable;
@property(readonly, getter=isMulticast) _Bool multicast; // @synthesize multicast=_multicast;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
- (id)remoteDestinationString;	// IMP=0x000000000085dd36
- (id)privateDescription;	// IMP=0x000000000085dd22
- (id)description;	// IMP=0x000000000085dd0e
- (id)debugDescription;	// IMP=0x000000000085dcf7
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000085db30
- (id)shortDescription;	// IMP=0x000000000085da6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000085d8ac
- (unsigned long long)hash;	// IMP=0x000000000085d820
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;	// IMP=0x000000000085d71e
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3;	// IMP=0x000000000085d709
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000085d655

@end
