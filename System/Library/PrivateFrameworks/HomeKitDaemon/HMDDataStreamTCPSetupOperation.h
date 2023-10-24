//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPSecuritySessionEncryption, HMFNetAddress, NSData;

__attribute__((visibility("hidden")))
@interface HMDDataStreamTCPSetupOperation
{
    HMFNetAddress *_remoteNetAddress;	// 56 = 0x38
    NSData *_controllerKeySalt;	// 64 = 0x40
    NSData *_accessoryKeySalt;	// 72 = 0x48
    long long _remoteTcpPort;	// 80 = 0x50
    HAPSecuritySessionEncryption *_sessionEncryption;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x006000000023c76a
- (void).cxx_destruct;	// IMP=0x0000000000239d55
@property(retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // @synthesize sessionEncryption=_sessionEncryption;
@property(nonatomic) long long remoteTcpPort; // @synthesize remoteTcpPort=_remoteTcpPort;
@property(retain, nonatomic) NSData *accessoryKeySalt; // @synthesize accessoryKeySalt=_accessoryKeySalt;
@property(readonly, nonatomic) NSData *controllerKeySalt; // @synthesize controllerKeySalt=_controllerKeySalt;
@property(retain, nonatomic) HMFNetAddress *remoteNetAddress; // @synthesize remoteNetAddress=_remoteNetAddress;
- (void)_finishStreamTransport;	// IMP=0x0000000000239a75
- (id)_createTCPTransport;	// IMP=0x0000000000239835
- (void)_generateStreamKeys;	// IMP=0x0000000000239622
- (void)processTransportSetupResponse:(id)arg1;	// IMP=0x000000000023922d
- (void)startSetup;	// IMP=0x0000000000238b81
- (id)_fullKeySalt;	// IMP=0x0000000000238add
- (_Bool)_isComplete;	// IMP=0x0000000000238a63
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;	// IMP=0x0000000000238a00

@end

