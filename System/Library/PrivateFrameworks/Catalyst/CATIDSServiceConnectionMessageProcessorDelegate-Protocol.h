//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CATActiveIDSServiceConnectionContentSendData, CATIDSServiceConnectionMessageProcessor, NSArray, NSError;

@protocol CATIDSServiceConnectionMessageProcessorDelegate
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsToAckUpTo:(unsigned long long)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 receivedExpectedSequence:(unsigned long long)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsRetransmission:(NSArray *)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsAggregation:(CATActiveIDSServiceConnectionContentSendData *)arg2;
- (void)messageProcessor:(CATIDSServiceConnectionMessageProcessor *)arg1 wantsToCloseWithError:(NSError *)arg2;
- (void)messageProcessorWantsToExtendKeepAlive:(CATIDSServiceConnectionMessageProcessor *)arg1;
- (void)messageProcessorWantsToAcknowledgeRemote:(CATIDSServiceConnectionMessageProcessor *)arg1;
@end

