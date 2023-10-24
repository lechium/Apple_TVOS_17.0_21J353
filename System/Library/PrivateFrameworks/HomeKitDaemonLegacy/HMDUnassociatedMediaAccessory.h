//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessoryAdvertisement, NSString;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedMediaAccessory
{
    HMDAccessoryAdvertisement *_advertisement;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000039c310
- (void).cxx_destruct;	// IMP=0x000000000039c2fd
@property(retain) HMDAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (id)logIdentifier;	// IMP=0x000000000039c2c4
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;	// IMP=0x000000000039bc57
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039bb7c
@property(readonly) unsigned long long hash;
- (long long)associationOptions;	// IMP=0x000000000039babc
- (id)dumpDescription;	// IMP=0x000000000039b961
- (unsigned long long)transportTypes;	// IMP=0x000000000039b956
- (_Bool)isHAPAirPlay2Accessory;	// IMP=0x000000000039b8a3
- (void)updateAdvertisementData:(id)arg1;	// IMP=0x000000000039b842
- (id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000039b73c
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x000000000039b633
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;	// IMP=0x000000000039b5b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
