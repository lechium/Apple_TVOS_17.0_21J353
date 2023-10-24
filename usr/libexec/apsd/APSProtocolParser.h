//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APNSPackDecoder, APNSPackEncoder;
@protocol APSProtocolParserDelegate;

@interface APSProtocolParser : NSObject
{
    _Bool _isPackedFormat;	// 8 = 0x8
    APNSPackEncoder *_encoderWrapper;	// 16 = 0x10
    APNSPackDecoder *_decoderWrapper;	// 24 = 0x18
    id <APSProtocolParserDelegate> _delegate;	// 32 = 0x20
    unsigned long long _identifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005a78a
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <APSProtocolParserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APNSPackDecoder *decoderWrapper; // @synthesize decoderWrapper=_decoderWrapper;
@property(retain, nonatomic) APNSPackEncoder *encoderWrapper; // @synthesize encoderWrapper=_encoderWrapper;
@property(nonatomic) _Bool isPackedFormat; // @synthesize isPackedFormat=_isPackedFormat;
- (void)setSerialItemInParameters:(id)arg1 commandID:(unsigned long long)arg2 itemID:(unsigned long long)arg3 itemData:(id)arg4;	// IMP=0x00100000000595c0
- (void)setSerialNumberInParameters:(id)arg1 commandID:(unsigned long long)arg2 itemID:(unsigned long long)arg3 Integer:(long long)arg4;	// IMP=0x0010000000058a80
- (_Bool)_parseSerialMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;	// IMP=0x001000000005888b
- (_Bool)parseMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4;	// IMP=0x00100000000585ae
- (void)APNSPackDecoder:(id)arg1 ReceivedError:(int)arg2;	// IMP=0x001000000005854a
- (void)APNSPackEncoder:(id)arg1 receivedError:(int)arg2;	// IMP=0x00100000000584e6
- (id)copyPubSubChannelListWithInput:(id)arg1 baseToken:(id)arg2 messageID:(unsigned int)arg3;	// IMP=0x0010000000058254
- (id)copyTaskNotificationMessageWithInput:(id)arg1;	// IMP=0x00100000000580be
- (id)copyTaskControlMessageWithInput:(id)arg1 messageId:(unsigned long long)arg2;	// IMP=0x0010000000057ec0
- (id)copySetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2;	// IMP=0x0010000000057cb7
- (id)copySetActiveIntervalMessageWithInterval:(unsigned int)arg1;	// IMP=0x0010000000057b2c
- (id)copyPresenceTrackingRequestWithMessageID:(unsigned long long)arg1 pushToken:(id)arg2 salt:(unsigned long long)arg3 trackingFlag:(unsigned int)arg4 timestamp:(unsigned long long)arg5;	// IMP=0x0010000000057816
- (id)copyTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6;	// IMP=0x0010000000057419
- (id)copyFlushResponseMessageWithPaddingLength:(unsigned long long)arg1;	// IMP=0x001000000005725a
- (id)copyFlushMessageWithWantPaddingLength:(unsigned long long)arg1 paddingLength:(unsigned long long)arg2;	// IMP=0x001000000005703b
- (id)copyMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 isPlistFormat:(_Bool)arg5 lastRTT:(id)arg6;	// IMP=0x0010000000056c6f
- (id)copyKeepAliveMessageWithMetadata:(id)arg1;	// IMP=0x00100000000564de
- (id)copyMessageTransportAcknowledgeMessage;	// IMP=0x0010000000056404
- (id)copyMessageTracingAckWithTopicHash:(id)arg1 status:(int)arg2 tracingUUID:(id)arg3 token:(id)arg4;	// IMP=0x001000000005612d
- (id)copyMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3;	// IMP=0x0010000000055e8e
- (id)copyMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2;	// IMP=0x0010000000055e79
- (id)copyFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 nonWakingHashes:(id)arg4 pausedHashes:(id)arg5 token:(id)arg6 version:(unsigned long long)arg7;	// IMP=0x00100000000549ca
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 interface:(long long)arg4 activeInterval:(unsigned int)arg5 metadata:(id)arg6 certificates:(id)arg7 nonce:(id)arg8 signature:(id)arg9 redirectCount:(unsigned char)arg10 tcpHandshakeTimeMilliseconds:(double)arg11 dnsResolveTimeMilliseconds:(double)arg12 tlsHandshakeTimeMilliseconds:(double)arg13 consecutiveConnectionFailureReason:(id)arg14 lastConnected:(id)arg15 disconnectReason:(unsigned int)arg16;	// IMP=0x0010000000053a7a
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 interface:(long long)arg4 activeInterval:(unsigned int)arg5 metadata:(id)arg6 certificates:(id)arg7 nonce:(id)arg8 signature:(id)arg9 redirectCount:(unsigned char)arg10 lastConnected:(id)arg11 disconnectReason:(unsigned int)arg12;	// IMP=0x0010000000053a14
- (id)copyConnectMessageWithToken:(id)arg1 interface:(long long)arg2 presenceFlags:(unsigned int)arg3 activeInterval:(unsigned int)arg4 metadata:(id)arg5 certificates:(id)arg6 nonce:(id)arg7 signature:(id)arg8 redirectCount:(unsigned char)arg9 tcpHandshakeTimeMilliseconds:(double)arg10 dnsResolveTimeMilliseconds:(double)arg11 tlsHandshakeTimeMilliseconds:(double)arg12 consecutiveConnectionFailureReason:(id)arg13 lastConnected:(id)arg14 disconnectReason:(unsigned int)arg15;	// IMP=0x00100000000539be
- (id)copyConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 metadata:(id)arg4 certificates:(id)arg5 nonce:(id)arg6 signature:(id)arg7 redirectCount:(unsigned char)arg8 tcpHandshakeTimeMilliseconds:(double)arg9 dnsResolveTimeMilliseconds:(double)arg10 tlsHandshakeTimeMilliseconds:(double)arg11 consecutiveConnectionFailureReason:(id)arg12 lastConnected:(id)arg13 disconnectReason:(unsigned int)arg14;	// IMP=0x001000000005395e
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 metadata:(id)arg4 certificates:(id)arg5 nonce:(id)arg6 signature:(id)arg7 redirectCount:(unsigned char)arg8 lastConnected:(id)arg9 disconnectReason:(unsigned int)arg10;	// IMP=0x00100000000538ec
- (id)copyConnectMessageWithToken:(id)arg1 state:(int)arg2;	// IMP=0x00100000000538a8
- (void)setIsPackedFormat:(_Bool)arg1 maxEncoderTableSize:(unsigned long long)arg2 maxDecoderTableSize:(unsigned long long)arg3 interface:(long long)arg4;	// IMP=0x00100000000536e9
- (id)init;	// IMP=0x0010000000053698

@end
