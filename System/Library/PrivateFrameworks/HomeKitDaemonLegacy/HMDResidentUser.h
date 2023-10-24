//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, NSString;

__attribute__((visibility("hidden")))
@interface HMDResidentUser
{
    struct os_unfair_lock_s _residentUserLock;	// 296 = 0x128
    HMDDevice *_device;	// 304 = 0x130
    unsigned long long _configurationState;	// 312 = 0x138
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000097ae57
- (void).cxx_destruct;	// IMP=0x000000000097ac02
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000097aadc
- (id)encodingRemoteDisplayName;	// IMP=0x000000000097aaca
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000097a608
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000097a22a
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000097a0ba
- (id)legacyUser;	// IMP=0x000000000097a084
@property unsigned long long configurationState; // @synthesize configurationState=_configurationState;
@property(readonly, getter=isBlocked) _Bool blocked;
- (_Bool)updateWithDevice:(id)arg1;	// IMP=0x0000000000979cda
- (void)setDevice:(id)arg1;	// IMP=0x0000000000979c86
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)registerIdentity;	// IMP=0x0000000000979b97
- (_Bool)requiresMakoSupport;	// IMP=0x0000000000979b8f
- (id)displayName;	// IMP=0x0000000000979b3f
- (_Bool)refreshDisplayName;	// IMP=0x0000000000979b37
@property(readonly, copy) NSString *deviceIdentifier;
- (id)userID;	// IMP=0x0000000000979a6d
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000097993b
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;	// IMP=0x000000000097988f
- (id)initWithModelObject:(id)arg1;	// IMP=0x000000000097974b

@end

