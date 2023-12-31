//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, NSInputStream, NSMutableData, NSOutputStream, NSString, NSURLSession, NSURLSessionStreamTask, NSURLSessionTaskTransactionMetrics;
@protocol APSTCPStreamDelegate;

@interface APSTCPStream : NSObject
{
    APSEnvironment *_environment;	// 8 = 0x8
    struct __SecIdentity *_clientIdentity;	// 16 = 0x10
    struct _DNSServiceRef_t *_serviceQuery;	// 24 = 0x18
    NSInputStream *_readStream;	// 32 = 0x20
    NSOutputStream *_writeStream;	// 40 = 0x28
    id <APSTCPStreamDelegate> _delegate;	// 48 = 0x30
    _Bool _forceWWANInterface;	// 56 = 0x38
    _Bool _useAlternatePort;	// 57 = 0x39
    _Bool _opened;	// 58 = 0x3a
    _Bool _isConnected;	// 59 = 0x3b
    _Bool _isSuspended;	// 60 = 0x3c
    unsigned long long _generation;	// 64 = 0x40
    NSMutableData *_receiveData;	// 72 = 0x48
    NSMutableData *_sendData;	// 80 = 0x50
    NSString *_peerName;	// 88 = 0x58
    NSString *_serverHostname;	// 96 = 0x60
    NSString *_serverIPAddress;	// 104 = 0x68
    NSString *_redirectHostname;	// 112 = 0x70
    NSString *_cachedIPAddress;	// 120 = 0x78
    _Bool _keepAliveProxyConfigured;	// 128 = 0x80
    _Bool _hasCompletedTLSHandshake;	// 129 = 0x81
    _Bool _peerCertificateIsAuthorized;	// 130 = 0x82
    _Bool _hasSentPresence;	// 131 = 0x83
    _Bool _nagleEnabled;	// 132 = 0x84
    NSString *_interfaceName;	// 136 = 0x88
    NSURLSession *_urlSession;	// 144 = 0x90
    NSURLSessionStreamTask *_streamTask;	// 152 = 0x98
    unsigned char _ipAddressFamily;	// 160 = 0xa0
    _Bool _remainsConnectedWhenWWANSuspends;	// 161 = 0xa1
}

+ (_Bool)isKeepAliveProxyFeatureEnabled;	// IMP=0x002000000006992c
+ (_Bool)isKeepAliveProxySupportedOnSomeInterface;	// IMP=0x0010000000069914
+ (unsigned int)cachedServerCountForDomain:(id)arg1;	// IMP=0x00100000000650ef
+ (void)setCachedServerCount:(unsigned int)arg1 forDomain:(id)arg2 ttl:(unsigned int)arg3;	// IMP=0x0010000000064fba
- (void).cxx_destruct;	// IMP=0x0020000000069b1c
@property(readonly, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) unsigned char ipAddressFamily; // @synthesize ipAddressFamily=_ipAddressFamily;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(nonatomic) _Bool useAlternatePort; // @synthesize useAlternatePort=_useAlternatePort;
@property(nonatomic) _Bool forceWWANInterface; // @synthesize forceWWANInterface=_forceWWANInterface;
@property(readonly, nonatomic) NSString *serverIPAddress; // @synthesize serverIPAddress=_serverIPAddress;
@property(readonly, nonatomic) NSString *serverHostname; // @synthesize serverHostname=_serverHostname;
@property(nonatomic) __weak id <APSTCPStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURLSessionTaskTransactionMetrics *taskTransactionMetrics;
@property(readonly, nonatomic) NSString *streamTaskDebugInfo;
- (_Bool)didPushCauseWake;	// IMP=0x0010000000069934
- (_Bool)isKeepAliveProxySupportedOnSomeInterface;	// IMP=0x0010000000069924
- (_Bool)isKeepAliveProxyConfigured;	// IMP=0x001000000006991c
- (_Bool)isKeepAliveProxySupportedOnSocketInterface;	// IMP=0x001000000006990c
- (void)holdPowerAssertionUntilStreamQuiesces;	// IMP=0x0010000000069906
- (id)tcpInfoDescription;	// IMP=0x00100000000696ff
- (id)_getTCPInfoData;	// IMP=0x00100000000694c8
- (void)_hasSpaceAvailable;	// IMP=0x00100000000693e0
- (void)_hasBytesAvailable;	// IMP=0x0010000000069249
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000006908c
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0010000000068ef2
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000068bb0
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;	// IMP=0x00100000000687d1
- (struct sockaddr *)_copyRemoteSockAddr;	// IMP=0x0010000000068652
- (struct sockaddr *)_copyLocalSockAddr;	// IMP=0x0010000000068391
- (id)_copyServerIPAddressString;	// IMP=0x001000000006833e
- (_Bool)hasErrorStatus;	// IMP=0x0010000000068320
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0010000000067be5
- (void)configureWhetherPeerIsTrustedFor:(struct __SecTrust **)arg1;	// IMP=0x00100000000679ac
- (_Bool)isTrust:(struct __SecTrust *)arg1 validWithPolicy:(struct __SecPolicy *)arg2 forPeer:(id)arg3;	// IMP=0x00100000000677fd
- (void)writeDataInBackground:(id)arg1;	// IMP=0x00100000000676e0
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x001000000006766c
- (void)_connectToServerWithConfiguration:(id)arg1;	// IMP=0x0010000000067239
- (void)_connectToServerWithCount:(unsigned int)arg1;	// IMP=0x0010000000066f6d
- (void)_connectToServerWithPeerName:(id)arg1;	// IMP=0x0010000000066756
- (void)close;	// IMP=0x00100000000665a0
- (void)_closeQuery;	// IMP=0x001000000006657a
- (void)_queryRecordReply:(const void *)arg1 length:(unsigned short)arg2 ttl:(unsigned int)arg3 errorCode:(int)arg4;	// IMP=0x001000000006630d
- (void)_openWithTXTLookup;	// IMP=0x0010000000065fa7
- (void)open;	// IMP=0x00100000000657f3
- (Class)configurationClass;	// IMP=0x00100000000657e2
- (id)_domain;	// IMP=0x0010000000065730
@property(readonly, copy, nonatomic) NSString *ifname;
@property(nonatomic) _Bool isSuspended;
@property(nonatomic) _Bool isConnected;
@property(copy, nonatomic) NSString *cachedIPAddress;
@property(copy, nonatomic) NSString *redirectHostname;
- (void)dealloc;	// IMP=0x001000000006526b
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00100000000651f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

