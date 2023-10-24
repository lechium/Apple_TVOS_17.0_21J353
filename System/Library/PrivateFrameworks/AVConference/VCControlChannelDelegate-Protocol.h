//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData, NSNumber, NSString, VCControlChannel;

@protocol VCControlChannelDelegate <NSObject>
- (void)controlChannel:(VCControlChannel *)arg1 clearTransactionCacheForParticipant:(NSNumber *)arg2;
- (void)controlChannel:(VCControlChannel *)arg1 sendReliableMessage:(NSString *)arg2 didSucceed:(_Bool)arg3 toParticipant:(NSNumber *)arg4;
- (void)controlChannel:(VCControlChannel *)arg1 topic:(NSString *)arg2 payload:(NSData *)arg3 transactionID:(unsigned int)arg4 fromParticipant:(NSNumber *)arg5;
- (void)controlChannel:(VCControlChannel *)arg1 receivedMessage:(NSString *)arg2 transactionID:(unsigned int)arg3 fromParticipant:(NSNumber *)arg4;
@end

