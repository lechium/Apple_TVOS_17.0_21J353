//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, NSString;

__attribute__((visibility("hidden")))
@interface HMDResidentUser
{
    struct os_unfair_lock_s _residentUserLock;	// 336 = 0x150
    HMDDevice *_device;	// 344 = 0x158
    unsigned long long _configurationState;	// 352 = 0x160
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000ad799d
- (void).cxx_destruct;	// IMP=0x0000000000ad7748
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ad7622
- (id)encodingRemoteDisplayName;	// IMP=0x0000000000ad7610
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ad714e
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000ad6d70
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x0000000000ad6c00
- (id)legacyUser;	// IMP=0x0000000000ad6bca
@property unsigned long long configurationState; // @synthesize configurationState=_configurationState;
@property(readonly, getter=isBlocked) _Bool blocked;
- (_Bool)updateWithDevice:(id)arg1;	// IMP=0x0000000000ad6820
- (void)setDevice:(id)arg1;	// IMP=0x0000000000ad67cc
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)registerIdentity;	// IMP=0x0000000000ad66dd
- (_Bool)requiresMakoSupport;	// IMP=0x0000000000ad66d5
- (id)displayName;	// IMP=0x0000000000ad6685
- (_Bool)refreshDisplayName;	// IMP=0x0000000000ad667d
@property(readonly, copy) NSString *deviceIdentifier;
- (id)userID;	// IMP=0x0000000000ad65b3
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000ad6481
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;	// IMP=0x0000000000ad63d5
- (id)initWithModelObject:(id)arg1;	// IMP=0x0000000000ad6291

@end

