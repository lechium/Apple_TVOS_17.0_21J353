//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCLinkProbingHandlerDelegate-Protocol.h>

@class NSDictionary, NSNumber;
@protocol VCConnectionProtocol;

@protocol VCConnectionManagerDelegate <VCLinkProbingHandlerDelegate>
- (void)didMediaQualityDegrade:(_Bool)arg1;
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id <VCConnectionProtocol>)arg2;
- (void)connectionCallback:(id <VCConnectionProtocol>)arg1 isInitialConnection:(_Bool)arg2;
- (void)primaryConnectionChanged:(id <VCConnectionProtocol>)arg1 oldPrimaryConnection:(id <VCConnectionProtocol>)arg2 activeConnection:(id <VCConnectionProtocol>)arg3;

@optional
- (void)requestStatsWithOptions:(NSDictionary *)arg1;
- (void)logSignalStrength;
- (int)getSignalStrengthBars:(int *)arg1 displayBars:(int *)arg2 maxDisplayBars:(int *)arg3;
- (void)setRemoteDeviceVersionIDS;
- (void)handleRATChanged:(NSNumber *)arg1;
- (void)optIntoExistingSubscribedStreamsForConnection:(id <VCConnectionProtocol>)arg1;
- (void)optOutAllStreamsForConnection:(id <VCConnectionProtocol>)arg1;
- (void)resetParticipantGenerationCounter;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (void)discardConnection:(id <VCConnectionProtocol>)arg1;
- (void)didLocalNetworkQualityChange:(_Bool)arg1 isLocalNetworkQualityBad:(_Bool)arg2 isRemoteNetworkQualityBad:(_Bool)arg3;
@end

