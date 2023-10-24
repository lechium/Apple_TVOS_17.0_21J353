//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCEmulatedNetworkAlgorithmQueueBandwidth, VCEmulatedNetworkAlgorithmQueueDelay, VCEmulatedNetworkAlgorithmQueueLoss;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkQueue
{
    VCEmulatedNetworkAlgorithmQueueBandwidth *_queueBandwidthAlgorithm;	// 32 = 0x20
    VCEmulatedNetworkAlgorithmQueueLoss *_queueLossAlgorithm;	// 40 = 0x28
    VCEmulatedNetworkAlgorithmQueueDelay *_queueDelayAlgorithm;	// 48 = 0x30
    double _lastPolicyLoadingTime;	// 56 = 0x38
}

- (int)dequeuePacket:(id)arg1 time:(double)arg2;	// IMP=0x00000000002a59bf
- (void)runUntilTime:(double)arg1;	// IMP=0x00000000002a574a
- (int)enqueuePacket:(id)arg1;	// IMP=0x00000000002a562c
- (int)write:(id)arg1;	// IMP=0x00000000002a549e
- (void)markPacketLoss:(id)arg1;	// IMP=0x00000000002a5481
- (void)updateSettingsAtTime:(double)arg1;	// IMP=0x00000000002a53cb
- (void)dealloc;	// IMP=0x00000000002a5342
- (id)initWithPolicies:(id)arg1;	// IMP=0x00000000002a51f1

@end
