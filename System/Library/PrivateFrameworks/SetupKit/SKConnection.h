//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBConnection, CUPairingSession, CUPairingStream, NSData, NSError, NSMutableArray, NSMutableDictionary, NSString, SKDevice;
@protocol CUReadWriteRequestable, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKConnection : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    unsigned long long _authThrottleDeadlineTicks;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_authThrottleTimer;	// 24 = 0x18
    CDStruct_798ebea5 _frameHeader;	// 32 = 0x20
    id <CUReadWriteRequestable> _requestable;	// 40 = 0x28
    int _runState;	// 48 = 0x30
    _Bool _invalidateCalled;	// 52 = 0x34
    _Bool _invalidateDone;	// 53 = 0x35
    unsigned long long _mainAuthTagLength;	// 56 = 0x38
    CUPairingStream *_mainStream;	// 64 = 0x40
    CUPairingSession *_pairSetupSession;	// 72 = 0x48
    CUPairingSession *_pairVerifySession;	// 80 = 0x50
    _Bool _readRequested;	// 88 = 0x58
    _Bool _receivingHeader;	// 89 = 0x59
    NSMutableDictionary *_requests;	// 96 = 0x60
    NSMutableArray *_sendArray;	// 104 = 0x68
    _Bool _showPasswordCalled;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_startTimer;	// 120 = 0x78
    _Bool _stepDone;	// 128 = 0x80
    NSError *_stepError;	// 136 = 0x88
    struct LogCategory *_ucat;	// 144 = 0x90
    unsigned int _xidLast;	// 152 = 0x98
    _Bool _clientMode;	// 156 = 0x9c
    _Bool _persistentPairing;	// 157 = 0x9d
    _Bool _reversePairing;	// 158 = 0x9e
    int _passwordType;	// 160 = 0xa0
    unsigned int _bluetoothUseCase;	// 164 = 0xa4
    int _state;	// 168 = 0xa8
    CDUnknownBlockType _authCompletionHandler;	// 176 = 0xb0
    CDUnknownBlockType _authHidePasswordHandler;	// 184 = 0xb8
    CDUnknownBlockType _authShowPasswordHandler;	// 192 = 0xc0
    CDUnknownBlockType _authPromptHandler;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 208 = 0xd0
    NSString *_label;	// 216 = 0xd8
    NSString *_password;	// 224 = 0xe0
    CBConnection *_bleConnection;	// 232 = 0xe8
    SKDevice *_blePeerDevice;	// 240 = 0xf0
    CDUnknownBlockType _errorHandler;	// 248 = 0xf8
    NSData *_pskData;	// 256 = 0x100
    CDUnknownBlockType _invalidationHandler;	// 264 = 0x108
    CDUnknownBlockType _pairSetupConfigHandler;	// 272 = 0x110
    CDUnknownBlockType _receivedEventHandler;	// 280 = 0x118
    CDUnknownBlockType _receivedRequestHandler;	// 288 = 0x120
    CDUnknownBlockType _sendDataHandler;	// 296 = 0x128
    CDUnknownBlockType _stateChangedHandler;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x000000000000a481
@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType sendDataHandler; // @synthesize sendDataHandler=_sendDataHandler;
@property(nonatomic) _Bool reversePairing; // @synthesize reversePairing=_reversePairing;
@property(copy, nonatomic) CDUnknownBlockType receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedEventHandler; // @synthesize receivedEventHandler=_receivedEventHandler;
@property(nonatomic) _Bool persistentPairing; // @synthesize persistentPairing=_persistentPairing;
@property(copy, nonatomic) CDUnknownBlockType pairSetupConfigHandler; // @synthesize pairSetupConfigHandler=_pairSetupConfigHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSData *pskData; // @synthesize pskData=_pskData;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) _Bool clientMode; // @synthesize clientMode=_clientMode;
@property(nonatomic) unsigned int bluetoothUseCase; // @synthesize bluetoothUseCase=_bluetoothUseCase;
@property(retain, nonatomic) SKDevice *blePeerDevice; // @synthesize blePeerDevice=_blePeerDevice;
@property(retain, nonatomic) CBConnection *bleConnection; // @synthesize bleConnection=_bleConnection;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType authPromptHandler; // @synthesize authPromptHandler=_authPromptHandler;
@property(copy, nonatomic) CDUnknownBlockType authShowPasswordHandler; // @synthesize authShowPasswordHandler=_authShowPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authHidePasswordHandler; // @synthesize authHidePasswordHandler=_authHidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
- (void)_receivedResponse:(id)arg1;	// IMP=0x0000000000009def
- (void)_receivedRequest:(id)arg1;	// IMP=0x00000000000099af
- (void)_receivedEvent:(id)arg1;	// IMP=0x0000000000009730
- (void)_receivedObject:(id)arg1;	// IMP=0x0000000000009669
- (void)_receivedHeader:(const CDStruct_798ebea5 *)arg1 unencryptedObjectData:(id)arg2;	// IMP=0x0000000000009382
- (void)_receivedHeader:(const CDStruct_798ebea5 *)arg1 encryptedObjectData:(id)arg2;	// IMP=0x00000000000090d8
- (void)_receivedHeader:(const CDStruct_798ebea5 *)arg1 body:(id)arg2;	// IMP=0x0000000000008d4b
- (void)_receiveCompletion:(id)arg1;	// IMP=0x00000000000087c8
- (void)_receiveStart:(id)arg1;	// IMP=0x0000000000008675
- (void)receivedData:(id)arg1;	// IMP=0x00000000000085e5
- (void)_timeoutForXID:(id)arg1;	// IMP=0x0000000000008421
- (void)_timeoutForSendEntry:(id)arg1;	// IMP=0x00000000000081d4
- (void)_abortRequestsWithError:(id)arg1;	// IMP=0x0000000000008129
- (void)_processSends;	// IMP=0x0000000000007da3
- (void)_sendHeaderData:(id)arg1 bodyData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007b1c
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;	// IMP=0x0000000000007a32
- (void)_sendFrameType:(unsigned char)arg1 body:(id)arg2;	// IMP=0x000000000000782a
- (void)_sendResponse:(id)arg1 error:(id)arg2 xid:(id)arg3 requestID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000729f
- (void)_sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 sendEntry:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006afa
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000067c5
- (void)_sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006412
- (void)sendEventID:(id)arg1 data:(id)arg2 xid:(unsigned int)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000006142
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005f19
- (void)_serverError:(id)arg1;	// IMP=0x0000000000005e6f
- (void)_serverPairVerifyCompleted:(id)arg1;	// IMP=0x0000000000005ca1
- (void)_serverPairVerifyContinueWithData:(id)arg1 start:(_Bool)arg2;	// IMP=0x00000000000057ba
- (void)_serverPairSetupCompleted:(id)arg1;	// IMP=0x00000000000055c3
- (void)_serverPairSetupContinueWithData:(id)arg1 start:(_Bool)arg2;	// IMP=0x0000000000004f4e
- (void)_serverAcceptBLE;	// IMP=0x0000000000004e76
- (void)_serverAccept;	// IMP=0x0000000000004db4
- (void)_serverRun;	// IMP=0x0000000000004b7f
- (void)_clientError:(id)arg1;	// IMP=0x0000000000004a25
- (void)_clientPairVerifyCompleted:(id)arg1;	// IMP=0x0000000000004845
- (void)_clientPairVerifyWithData:(id)arg1;	// IMP=0x00000000000044fd
- (void)_clientPairVerifyStart;	// IMP=0x0000000000004344
- (void)_clientPairSetupCompleted:(id)arg1;	// IMP=0x0000000000004124
- (void)_clientPairSetupPromptWithFlags:(unsigned int)arg1 passwordType:(int)arg2 throttleSeconds:(int)arg3;	// IMP=0x0000000000003f04
- (void)_clientPairSetupContinueWithData:(id)arg1;	// IMP=0x0000000000003b3d
- (void)_clientPairSetupStartReverse;	// IMP=0x0000000000003a1e
- (void)_clientPairSetupStart;	// IMP=0x0000000000003806
- (void)_clientConnectCompleted:(id)arg1;	// IMP=0x000000000000369e
- (void)_clientConnectStartBLE;	// IMP=0x00000000000033bc
- (void)_clientConnectStart;	// IMP=0x000000000000333c
- (void)_clientRun;	// IMP=0x0000000000003009
- (void)_updateExternalState;	// IMP=0x0000000000002f26
- (void)updatePasswordType:(int)arg1;	// IMP=0x0000000000002ed5
- (void)tryPassword:(id)arg1;	// IMP=0x0000000000002e45
- (void)_run;	// IMP=0x0000000000002e1e
- (void)_pskPrepareClientMode:(_Bool)arg1;	// IMP=0x0000000000002cd0
- (void)_pairVerifyInvalidate;	// IMP=0x0000000000002c7b
- (void)_pairSetupInvalidate;	// IMP=0x0000000000002be7
- (id)deriveKeyWithSaltPtr:(const void *)arg1 saltLen:(unsigned long long)arg2 infoPtr:(const void *)arg3 infoLen:(unsigned long long)arg4 keyLen:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000002a63
- (void)_invalidated;	// IMP=0x00000000000028aa
- (void)_invalidateCore:(id)arg1;	// IMP=0x00000000000023fd
- (void)_invalidateWithError:(id)arg1;	// IMP=0x000000000000232f
- (void)invalidate;	// IMP=0x00000000000022e1
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000208b
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001ffb
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000001d0f
- (id)init;	// IMP=0x0000000000001c72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

