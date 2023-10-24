//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SDAirDropPeerMetric : NSObject
{
    NSString *_accountID;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    NSString *_modelName;	// 24 = 0x18
    NSNumber *_bluetoothDiscovery;	// 32 = 0x20
    NSNumber *_bonjourPTRDiscovery;	// 40 = 0x28
    NSNumber *_bonjourTXTRecordDiscovery;	// 48 = 0x30
    NSNumber *_bonjourResolveComplete;	// 56 = 0x38
    NSNumber *_tcpConnectionComplete;	// 64 = 0x40
    NSNumber *_tlsHandshakeComplete;	// 72 = 0x48
    NSNumber *_identityQueryComplete;	// 80 = 0x50
    NSNumber *_totalDiscovery;	// 88 = 0x58
    NSNumber *_verifiableIdentity;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000002fc10
@property(retain) NSNumber *verifiableIdentity; // @synthesize verifiableIdentity=_verifiableIdentity;
@property(retain) NSNumber *totalDiscovery; // @synthesize totalDiscovery=_totalDiscovery;
@property(retain) NSNumber *identityQueryComplete; // @synthesize identityQueryComplete=_identityQueryComplete;
@property(retain) NSNumber *tlsHandshakeComplete; // @synthesize tlsHandshakeComplete=_tlsHandshakeComplete;
@property(retain) NSNumber *tcpConnectionComplete; // @synthesize tcpConnectionComplete=_tcpConnectionComplete;
@property(retain) NSNumber *bonjourResolveComplete; // @synthesize bonjourResolveComplete=_bonjourResolveComplete;
@property(retain) NSNumber *bonjourTXTRecordDiscovery; // @synthesize bonjourTXTRecordDiscovery=_bonjourTXTRecordDiscovery;
@property(retain) NSNumber *bonjourPTRDiscovery; // @synthesize bonjourPTRDiscovery=_bonjourPTRDiscovery;
@property(retain) NSNumber *bluetoothDiscovery; // @synthesize bluetoothDiscovery=_bluetoothDiscovery;
@property(retain) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSString *accountID; // @synthesize accountID=_accountID;

@end

