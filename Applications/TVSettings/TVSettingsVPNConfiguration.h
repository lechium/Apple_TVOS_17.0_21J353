//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEConfiguration, NERelayConfiguration, NEVPN, NSArray, NSNumber, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TVSettingsVPNConfiguration : NSObject
{
    _Bool _onDemandCapable;	// 8 = 0x8
    int _sessionStatus;	// 12 = 0xc
    NEConfiguration *_neConfiguration;	// 16 = 0x10
    unsigned long long _connectionType;	// 24 = 0x18
    unsigned long long _connectionStatus;	// 32 = 0x20
    unsigned long long _grade;	// 40 = 0x28
    NSUUID *_identifier;	// 48 = 0x30
    NSString *_displayName;	// 56 = 0x38
    NSString *_organization;	// 64 = 0x40
    NSString *_server;	// 72 = 0x48
    NSString *_remoteAddress;	// 80 = 0x50
    NSArray *_ipAddresses;	// 88 = 0x58
    NSString *_localizedElapsedTime;	// 96 = 0x60
    NSArray *_domains;	// 104 = 0x68
    NSString *_applicationName;	// 112 = 0x70
    NSString *_applicationIdentifier;	// 120 = 0x78
    NEVPN *_vpn;	// 128 = 0x80
    NERelayConfiguration *_relay;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    void *_session;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_connectionTimer;	// 160 = 0xa0
    NSNumber *_sessionConnectTime;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000000b5cfd
@property(retain, nonatomic) NSNumber *sessionConnectTime; // @synthesize sessionConnectTime=_sessionConnectTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(nonatomic) int sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(nonatomic) void *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NERelayConfiguration *relay; // @synthesize relay=_relay;
@property(retain, nonatomic) NEVPN *vpn; // @synthesize vpn=_vpn;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(retain, nonatomic) NSArray *domains; // @synthesize domains=_domains;
@property(retain, nonatomic) NSString *localizedElapsedTime; // @synthesize localizedElapsedTime=_localizedElapsedTime;
@property(retain, nonatomic) NSArray *ipAddresses; // @synthesize ipAddresses=_ipAddresses;
@property(retain, nonatomic) NSString *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long grade; // @synthesize grade=_grade;
@property(nonatomic) unsigned long long connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(nonatomic) unsigned long long connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) _Bool onDemandCapable; // @synthesize onDemandCapable=_onDemandCapable;
@property(retain, nonatomic) NEConfiguration *neConfiguration; // @synthesize neConfiguration=_neConfiguration;
- (id);	// IMP=0x00100000000b5acb
- (id)_displayNameFromConfigurationName:(id)arg1;	// IMP=0x00100000000b5a73
- (id)_convertTimeToString:(unsigned long long)arg1;	// IMP=0x00100000000b58a2
- (unsigned long long)_elapsedTimeSinceStartTime:(id)arg1;	// IMP=0x00100000000b5794
- (void)_getConnectionStatus;	// IMP=0x00100000000b5653
- (void)_startConnectionTimer;	// IMP=0x00100000000b54c3
- (void)_cancelConnectionTimer;	// IMP=0x00100000000b542c
- (void)_updateExtendedStatusValues;	// IMP=0x00100000000b4cfb
- (void)_updateConnectionStatus;	// IMP=0x00100000000b4cb7
- (void)_updateConnectTimeString;	// IMP=0x00100000000b4c29
- (void)_setupEventHandler;	// IMP=0x00100000000b4a1b
- (void)updateStatusForRelay;	// IMP=0x00100000000b4926
- (void)updateWithNEConfiguration:(id)arg1;	// IMP=0x00100000000b4869
- (void)disconnect;	// IMP=0x00100000000b482d
- (void)connect;	// IMP=0x00100000000b47f1
@property(readonly, nonatomic) _Bool isProfileBacked;
@property(nonatomic) _Bool onDemandEnabled;
@property(nonatomic) _Bool enabled;
- (id)description;	// IMP=0x00100000000b40c5
- (void)dealloc;	// IMP=0x00100000000b4050
- (id)initWithNEConfiguration:(id)arg1;	// IMP=0x00100000000b3b96

@end
