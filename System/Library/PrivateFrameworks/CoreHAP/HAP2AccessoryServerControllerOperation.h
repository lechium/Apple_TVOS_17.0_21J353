//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAP2AccessoryServerController, HMFTimer, NSString;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerTransportCommon, HAP2AccessoryServerTransportRequestEndpoint, HAP2EncodedRequest, HAP2EncodedResponse;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerControllerOperation
{
    _Bool _attemptedSessionRefresh;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
    HAP2AccessoryServerController *_controller;	// 24 = 0x18
    id <HAP2AccessoryServerEncoding> _encoding;	// 32 = 0x20
    id <HAP2AccessoryServerTransportCommon> _transport;	// 40 = 0x28
    id <HAP2AccessoryServerTransportRequestEndpoint> _endpoint;	// 48 = 0x30
    NSString *_mimeType;	// 56 = 0x38
    double _timeout;	// 64 = 0x40
    unsigned long long _options;	// 72 = 0x48
    id <HAP2EncodedRequest> _request;	// 80 = 0x50
    id <HAP2EncodedResponse> _response;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000439ae
@property(readonly, copy) NSString *description;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000004378d
- (void)_cleanUp;	// IMP=0x0000000000043787
- (void)_parseResponseData:(id)arg1;	// IMP=0x0000000000043660
- (void)_sendRequest;	// IMP=0x0000000000043331
- (void)_openTransport:(_Bool)arg1;	// IMP=0x0000000000043042
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000042fde
- (void)cancel;	// IMP=0x0000000000042fa0
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000042e9e
- (void)finish;	// IMP=0x0000000000042dc8
- (void)main;	// IMP=0x0000000000042d18
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 request:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9;	// IMP=0x0000000000042ba8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

