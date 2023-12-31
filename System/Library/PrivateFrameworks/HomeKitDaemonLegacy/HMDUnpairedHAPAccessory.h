//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDUnpairedHAPAccessory
{
    NSMutableArray *_accessoryServers;	// 24 = 0x18
    long long _certificationStatus;	// 32 = 0x20
    NSData *_setupHash;	// 40 = 0x28
    long long _linkType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000990008
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
- (long long)associationOptions;	// IMP=0x000000000098fe50
- (id)serialNumber;	// IMP=0x000000000098fc51
- (id)productID;	// IMP=0x000000000098facc
- (id)vendorID;	// IMP=0x000000000098f947
- (id)commissioningID;	// IMP=0x000000000098f7c2
- (id)nodeID;	// IMP=0x000000000098f63d
- (id)rootPublicKey;	// IMP=0x000000000098f4b8
- (_Bool)isKnownToSystemCommissioner;	// IMP=0x000000000098f37a
- (_Bool)supportsCHIP;	// IMP=0x000000000098f23a
- (_Bool)hasIPLink;	// IMP=0x000000000098f02c
- (_Bool)hasBTLELink;	// IMP=0x000000000098eeec
@property(readonly, nonatomic) unsigned long long transportTypes;
- (id)preferredAccessoryServer;	// IMP=0x000000000098eaaf
- (void)removeAccessoryServer:(id)arg1;	// IMP=0x000000000098e8c5
- (void)addAccessoryServer:(id)arg1;	// IMP=0x000000000098e669
@property(readonly, copy) NSArray *accessoryServers;
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000098e427
- (_Bool)isReachable;	// IMP=0x000000000098e3df
- (id)dumpDescription;	// IMP=0x000000000098e014
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;	// IMP=0x000000000098df58
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x000000000098ded3
- (id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000098dd45

@end

