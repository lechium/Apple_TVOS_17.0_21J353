//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSPeerMessage, NSArray, NSData, NSString;
@protocol IDSPrioritizedTokenList;

@protocol IDSFanoutFactoryParameter
- (void)setAggregateMessages:(NSArray *)arg1;
- (id <IDSPrioritizedTokenList>)prioritizedTokenList;
- (_Bool)forceOnePerFanout;
- (unsigned long long)maxSize;
- (NSData *)fromIdentity;
- (NSString *)service;
- (IDSPeerMessage *)messageToSend;
- (NSArray *)aggregatableMessages;
- (NSString *)guid;
@end

