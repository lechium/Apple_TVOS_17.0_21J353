//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSContinuity, NSData, NSDictionary, NSMutableSet, NSObject, NSString, NSTimer, SDStatusMonitor;
@protocol OS_os_transaction;

@interface SDActivityAdvertiser
{
    unsigned char _versionByte;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    IDSContinuity *_continuity;	// 24 = 0x18
    double _goodbyeTimerInterval;	// 32 = 0x20
    NSTimer *_goodbyeTimer;	// 40 = 0x28
    NSMutableSet *_shouldNotAdvertiseRequesters;	// 48 = 0x30
    _Bool _advertisingEnabled;	// 56 = 0x38
    _Bool _isAdvertising;	// 57 = 0x39
    NSObject<OS_os_transaction> *_advertisingTransaction;	// 64 = 0x40
    NSData *_rawAdvertisementData;	// 72 = 0x48
    NSData *_advertisementData;	// 80 = 0x50
    unsigned int _powerAssertionID;	// 88 = 0x58
    int _powerAssertionClientPID;	// 92 = 0x5c
    NSData *_currentAdvertisementPayload;	// 96 = 0x60
    NSDictionary *_currentAdvertisementOptions;	// 104 = 0x68
    CDUnknownBlockType _currentErrorHandler;	// 112 = 0x70
}

+ (id)sharedAdvertiser;	// IMP=0x0020000000054d18
- (void).cxx_destruct;	// IMP=0x00200000000584d1
@property(readonly, nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;
- (void)pairedSFPeerDevicesWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000580b4
- (void)peerForUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057e75
- (void)loginIDWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057daa
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 withErrorHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057819
- (void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x00100000000576b0
- (void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x00100000000575be
- (void)continuity:(id)arg1 continuityDidStopAdvertisingOfType:(long long)arg2 withError:(id)arg3;	// IMP=0x00100000000575ac
- (void)continuity:(id)arg1 didStopAdvertisingOfType:(long long)arg2;	// IMP=0x0010000000057486
- (void)continuity:(id)arg1 didStartAdvertisingOfType:(long long)arg2;	// IMP=0x0010000000057360
- (void)continuityDidUpdateState:(id)arg1;	// IMP=0x00100000000570f2
- (id)encryptedAdvertisingInformation;	// IMP=0x0010000000056e88
- (id)createAdvertisingInformation;	// IMP=0x0010000000056cc2
- (_Bool)updateAdvertiser;	// IMP=0x0010000000056c54
- (void)goodbyeTimeoutFired:(id)arg1;	// IMP=0x0010000000056be3
- (void)invalidateGoodbyeTimer;	// IMP=0x0010000000056b63
- (void)startGoodbyeTimer;	// IMP=0x0010000000056a51
- (void)releaseIdleSleepAssertion;	// IMP=0x00100000000569ba
- (void)preventIdleSleepAssertion;	// IMP=0x00100000000567c7
- (void)consoleUserChanged:(id)arg1;	// IMP=0x0010000000056708
- (void)systemWillSleep:(id)arg1;	// IMP=0x0010000000056665
- (void)resetStateRequested:(id)arg1;	// IMP=0x0010000000056653
- (void)removeObservers;	// IMP=0x0010000000056600
- (void)addObservers;	// IMP=0x0010000000056577
@property(readonly) NSString *state;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000056084
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;	// IMP=0x0010000000055f35
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0010000000055e9c
- (void)connectionEstablished:(id)arg1;	// IMP=0x0010000000055e5b
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0000000000055e53
- (id)remoteObjectInterface;	// IMP=0x0010000000055cf7
- (id)exportedInterface;	// IMP=0x0010000000055b28
- (id)machServiceName;	// IMP=0x0010000000055b1b
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055b09
- (void)_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055af7
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x0010000000055725
- (void)resumeForReason:(id)arg1;	// IMP=0x00100000000555e2
- (void)stopForReason:(id)arg1;	// IMP=0x00100000000554b6
- (void)stop;	// IMP=0x0010000000055434
- (_Bool)restart;	// IMP=0x0010000000054f81
- (void)start;	// IMP=0x0010000000054f7b
- (id)init;	// IMP=0x0010000000054db9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

