//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEConfiguration, NERelayConfiguration, NEVPN, NSArray, NSNumber, NSString, NSUUID, UIImage;

@interface TVSSVPNConfiguration : NSObject
{
    int _sessionStatus;	// 8 = 0x8
    NEConfiguration *_neConfiguration;	// 16 = 0x10
    unsigned long long _connectionStatus;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    NEVPN *_vpn;	// 48 = 0x30
    NERelayConfiguration *_relay;	// 56 = 0x38
    void *_session;	// 64 = 0x40
}

+ (id)localizedConnectionStatus:(unsigned long long)arg1;	// IMP=0x004000000002aff0
- (void).cxx_destruct;	// IMP=0x001000000002b830
@property(nonatomic) int sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(nonatomic) void *session; // @synthesize session=_session;
@property(retain, nonatomic) NERelayConfiguration *relay; // @synthesize relay=_relay;
@property(retain, nonatomic) NEVPN *vpn; // @synthesize vpn=_vpn;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(retain, nonatomic) NEConfiguration *neConfiguration; // @synthesize neConfiguration=_neConfiguration;
- (id)_displayNameFromConfigurationName:(id)arg1;	// IMP=0x001000000002b540
- (void)_getConnectionStatus;	// IMP=0x001000000002b3d0
- (void)_updateConnectionStatus;	// IMP=0x001000000002b2d0
- (void)_setupEventHandler;	// IMP=0x001000000002b120
- (void)updateStatusForRelay;	// IMP=0x001000000002af20
- (void)updateWithNEConfiguration:(id)arg1;	// IMP=0x001000000002ae40
- (void)disconnect;	// IMP=0x001000000002adf0
- (void)connect;	// IMP=0x001000000002ada0
@property(nonatomic) _Bool enabled;
@property(readonly, nonatomic) _Bool isRelay;
- (id)initWithNEConfiguration:(id)arg1;	// IMP=0x001000000002a720
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) NSString *contentTitle;

// Remaining properties
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(nonatomic) _Bool contentIsDisabled;
@property(nonatomic) _Bool contentIsSelected;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText3;
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

