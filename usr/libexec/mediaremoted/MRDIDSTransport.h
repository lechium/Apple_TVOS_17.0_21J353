//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRAVOutputDevice, MRDIDSServiceConnection, MRDIDSTransportConnection, MRDeviceInfo, NSError, NSString;

@interface MRDIDSTransport : MRExternalDeviceTransport
{
    _Bool _shouldUseSystemAuthenticationPrompt;	// 16 = 0x10
    MRDeviceInfo *_deviceInfo;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSString *_sessionUID;	// 40 = 0x28
    MRAVOutputDevice *_outputDevice;	// 48 = 0x30
    MRDIDSTransportConnection *_transport;	// 56 = 0x38
    MRDIDSServiceConnection *_idsConnection;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000005cd0d
@property(retain, nonatomic) MRDIDSServiceConnection *idsConnection; // @synthesize idsConnection=_idsConnection;
@property(retain, nonatomic) MRDIDSTransportConnection *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
@property(retain, nonatomic) NSString *sessionUID; // @synthesize sessionUID=_sessionUID;
- (id)deviceInfo;	// IMP=0x001000000005cc90
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;	// IMP=0x001000000005cc80
- (_Bool)shouldUseSystemAuthenticationPrompt;	// IMP=0x001000000005cc70
- (id)_generateSessionUID;	// IMP=0x001000000005cbcb
- (void);	// IMP=0x001000000005c93a
- (_Bool)supportsIdleDisconnection;	// IMP=0x001000000005c8b7
- (void)resetWithError:(id)arg1;	// IMP=0x001000000005c834
- (id)_createConnectionWithUserInfo:(id)arg1;	// IMP=0x001000000005c3f2
- (id)createConnectionWithUserInfo:(id)arg1;	// IMP=0x001000000005bffb
- (id)error;	// IMP=0x001000000005bfb1
- (id)uid;	// IMP=0x001000000005bf61
- (long long)port;	// IMP=0x001000000005bf59
- (id)hostname;	// IMP=0x001000000005bf51
- (id)name;	// IMP=0x001000000005bf01
- (id)debugDescription;	// IMP=0x001000000005bdb8
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x001000000005bb61

@end

