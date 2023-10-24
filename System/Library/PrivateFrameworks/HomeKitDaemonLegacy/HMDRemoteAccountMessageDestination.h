//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccount;

__attribute__((visibility("hidden")))
@interface HMDRemoteAccountMessageDestination
{
    HMDAccount *_account;	// 32 = 0x20
}

+ (id)shortDescription;	// IMP=0x0060000000760bed
- (void).cxx_destruct;	// IMP=0x0000000000760bc5
@property(readonly, nonatomic) HMDAccount *account; // @synthesize account=_account;
- (id)remoteDestinationString;	// IMP=0x0000000000760a40
- (id)privateDescription;	// IMP=0x0000000000760a2c
- (id)description;	// IMP=0x0000000000760a18
- (id)debugDescription;	// IMP=0x0000000000760a01
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000076083a
- (id)shortDescription;	// IMP=0x0000000000760778
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000760651
- (unsigned long long)hash;	// IMP=0x00000000007605c5
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;	// IMP=0x00000000007604be
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(_Bool)arg3;	// IMP=0x00000000007604a9
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;	// IMP=0x00000000007603ca

@end

