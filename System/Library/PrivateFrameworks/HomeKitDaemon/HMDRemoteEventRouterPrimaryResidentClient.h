//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterPrimaryResidentClient
{
    NSUUID *_primaryResidentIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001c3857
- (id)dumpStateDescription;	// IMP=0x00000000001c37d9
- (_Bool)_clientIsEnabled:(id)arg1;	// IMP=0x00000000001c3737
- (_Bool)clientIsEnabled:(id)arg1;	// IMP=0x00000000001c3725
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg1;	// IMP=0x00000000001c366d
- (unsigned long long)messageTransportRestriction;	// IMP=0x00000000001c3614

@end
