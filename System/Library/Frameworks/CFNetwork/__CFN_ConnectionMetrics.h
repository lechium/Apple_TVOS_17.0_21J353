//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID;
@protocol OS_nw_connection, OS_nw_endpoint, OS_nw_establishment_report;

@interface __CFN_ConnectionMetrics : NSObject
{
    struct os_unfair_lock_s connectionLock;	// 8 = 0x8
    _Bool _needsCachedTCPInfoAtEnd;	// 12 = 0xc
    _Bool _needsCachedSubflowCounts;	// 13 = 0xd
    _Bool _TLSConfigured;	// 14 = 0xe
    _Bool _cellular;	// 15 = 0xf
    _Bool _expensive;	// 16 = 0x10
    _Bool _constrained;	// 17 = 0x11
    _Bool _multipath;	// 18 = 0x12
    _Bool _usedTFO;	// 19 = 0x13
    _Bool _isUnlistedTracker;	// 20 = 0x14
    _Bool _usedByTransaction;	// 21 = 0x15
    _Bool _coalesced;	// 22 = 0x16
    _Bool _discretionary;	// 23 = 0x17
    _Bool _dataBudgetingEnabled;	// 24 = 0x18
    unsigned short _negotiatedTLSProtocolVersion;	// 26 = 0x1a
    unsigned short _negotiatedTLSCipherSuite;	// 28 = 0x1c
    int _privacyStance;	// 32 = 0x20
    NSObject<OS_nw_connection> *_connection;	// 40 = 0x28
    NSDictionary *_cachedTCPInfoAtEnd;	// 48 = 0x30
    NSDictionary *_cachedSubflowCounts;	// 56 = 0x38
    NSUUID *_UUID;	// 64 = 0x40
    unsigned long long _identifier;	// 72 = 0x48
    NSUUID *_initiatingTransactionID;	// 80 = 0x50
    double _beginTime;	// 88 = 0x58
    double _establishTime;	// 96 = 0x60
    double _firstByteReceivedTime;	// 104 = 0x68
    double _endTime;	// 112 = 0x70
    NSObject<OS_nw_endpoint> *_endpoint;	// 120 = 0x78
    long long _http3DiscoveryStatus;	// 128 = 0x80
    NSObject<OS_nw_endpoint> *_localEndpoint;	// 136 = 0x88
    NSObject<OS_nw_endpoint> *_remoteEndpoint;	// 144 = 0x90
    NSString *_interfaceName;	// 152 = 0x98
    NSString *_networkProtocolName;	// 160 = 0xa0
    NSObject<OS_nw_establishment_report> *_establishmentReport;	// 168 = 0xa8
    struct weak_ptr<TransportConnection> _transportConnection;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001a855d
- (id).cxx_construct;	// IMP=0x00000000001a854a
- (void).cxx_destruct;	// IMP=0x00000000001a849f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a80e4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a7bec
@property(readonly, nonatomic, getter=_daemon_isDataBudgetingEnabled) _Bool _daemon_dataBudgetingEnabled;
@property(readonly, nonatomic, getter=_daemon_isDiscretionary) _Bool _daemon_discretionary;
@property(readonly, copy, nonatomic) NSString *_daemon_interfaceName;
@property(readonly, nonatomic) double _daemon_establishTime;

@end

