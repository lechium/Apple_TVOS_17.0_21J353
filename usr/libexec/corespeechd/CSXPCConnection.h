//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioAlertProvidingProxy, CSAudioMeterProvidingProxy, CSAudioMetricProvidingProxy, CSAudioSessionInfoProvidingProxy, CSAudioSessionProvidingProxy, CSAudioStreamProvidingProxy, CSFallbackAudioSessionReleaseProvidingProxy;
@protocol CSXPCConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSXPCConnection : NSObject
{
    id <CSXPCConnectionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
    CSAudioSessionProvidingProxy *_audioSessionProvidingProxy;	// 32 = 0x20
    CSFallbackAudioSessionReleaseProvidingProxy *_fallbackAudioSessionProvidingProxy;	// 40 = 0x28
    CSAudioSessionInfoProvidingProxy *_audioSessionInfoProvidingProxy;	// 48 = 0x30
    CSAudioStreamProvidingProxy *_audioStreamProvidingProxy;	// 56 = 0x38
    CSAudioAlertProvidingProxy *_audioAlertProvidingProxy;	// 64 = 0x40
    CSAudioMeterProvidingProxy *_audioMeterProvidingProxy;	// 72 = 0x48
    CSAudioMetricProvidingProxy *_audioMetricProvidingProxy;	// 80 = 0x50
    unsigned long long _clientType;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000125419
@property(nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) CSAudioMetricProvidingProxy *audioMetricProvidingProxy; // @synthesize audioMetricProvidingProxy=_audioMetricProvidingProxy;
@property(retain, nonatomic) CSAudioMeterProvidingProxy *audioMeterProvidingProxy; // @synthesize audioMeterProvidingProxy=_audioMeterProvidingProxy;
@property(retain, nonatomic) CSAudioAlertProvidingProxy *audioAlertProvidingProxy; // @synthesize audioAlertProvidingProxy=_audioAlertProvidingProxy;
@property(retain, nonatomic) CSAudioStreamProvidingProxy *audioStreamProvidingProxy; // @synthesize audioStreamProvidingProxy=_audioStreamProvidingProxy;
@property(retain, nonatomic) CSAudioSessionInfoProvidingProxy *audioSessionInfoProvidingProxy; // @synthesize audioSessionInfoProvidingProxy=_audioSessionInfoProvidingProxy;
@property(retain, nonatomic) CSFallbackAudioSessionReleaseProvidingProxy *fallbackAudioSessionProvidingProxy; // @synthesize fallbackAudioSessionProvidingProxy=_fallbackAudioSessionProvidingProxy;
@property(retain, nonatomic) CSAudioSessionProvidingProxy *audioSessionProvidingProxy; // @synthesize audioSessionProvidingProxy=_audioSessionProvidingProxy;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handlePingPongMessage:(id)arg1 client:(id)arg2;	// IMP=0x0010000000125201
- (void)_notifyXPCDisconnectionToProxy:(id)arg1;	// IMP=0x00100000001251a6
- (void)_notifyXPCDisconnectionToProxies;	// IMP=0x00100000001250fc
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x0010000000124f01
- (void)_handleSetXPCClientTypeMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000124da7
- (void)_handleAudioProvidingRequestTypeSwitchMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000124c0a
- (void)_handleAudioProvidingMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000124a28
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x0010000000124705
- (void)_handleClientEvent:(id)arg1;	// IMP=0x001000000012459f
- (void)sendMessageToClient:(id)arg1;	// IMP=0x001000000012446a
- (void)activateConnection;	// IMP=0x00100000001243bb
- (_Bool)_getAudioProvideWithContext:(id)arg1 streamClientType:(unsigned long long)arg2;	// IMP=0x0010000000124174
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000123f5f

@end

