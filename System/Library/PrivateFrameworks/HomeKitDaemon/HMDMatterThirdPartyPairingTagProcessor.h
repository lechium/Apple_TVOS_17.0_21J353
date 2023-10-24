//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEventTagProcessor.h>

@class HMDMatterThirdPartyPairingLogEvent, HMMStateTracker;

__attribute__((visibility("hidden")))
@interface HMDMatterThirdPartyPairingTagProcessor : HMMLogEventTagProcessor
{
    HMDMatterThirdPartyPairingLogEvent *_logEvent;	// 8 = 0x8
    long long _startTime;	// 16 = 0x10
    HMMStateTracker *_stateTracker;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c8a609
@property(retain, nonatomic) HMMStateTracker *stateTracker; // @synthesize stateTracker=_stateTracker;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) HMDMatterThirdPartyPairingLogEvent *logEvent; // @synthesize logEvent=_logEvent;
- (void)setLogEventCloseReason:(unsigned long long)arg1;	// IMP=0x0000000000c8a561
- (void)closeSessionWithEvent:(id)arg1;	// IMP=0x0000000000c8a0cc
- (void)processStateChange:(id)arg1;	// IMP=0x0000000000c89d16
- (void)processLongestPairingState:(id)arg1;	// IMP=0x0000000000c89b64
- (void)processCredentialsToClientEvent:(id)arg1;	// IMP=0x0000000000c89b20
- (void)processWiFiScanResultsEvent:(id)arg1;	// IMP=0x0000000000c89adc
- (void)processThreadScanResultsEvent:(id)arg1;	// IMP=0x0000000000c89a98
- (void)processFirmwareVersionEvent:(id)arg1;	// IMP=0x0000000000c899be
- (void)processPairingEventWindowOpenedSetupDuration:(id)arg1;	// IMP=0x0000000000c898e4
- (void)processAccessoryTransport:(id)arg1;	// IMP=0x0000000000c8980a
- (void)processThreadSetupDuration:(id)arg1;	// IMP=0x0000000000c89730
- (void)processCASESanityCheckEvent:(id)arg1;	// IMP=0x0000000000c89656
- (void)processAccessoryInfoEvent:(id)arg1;	// IMP=0x0000000000c88e6a
- (void)processPairingErrorCancelledEvent:(id)arg1;	// IMP=0x0000000000c88da9
- (void)processPairingErrorEvent:(id)arg1;	// IMP=0x0000000000c889df
- (void)processPairingSuccessEvent:(id)arg1;	// IMP=0x0000000000c889cd
- (void)processPairingStartEvent:(id)arg1;	// IMP=0x0000000000c88932
- (id)tagProcessingBlocks;	// IMP=0x0000000000c88902
- (id)initWithSubmitter:(id)arg1;	// IMP=0x0000000000c8886d

@end

