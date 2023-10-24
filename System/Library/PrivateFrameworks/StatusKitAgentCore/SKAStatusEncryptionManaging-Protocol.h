//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class NSData, NSDate, NSString, SKADatabaseChannel, SKADecryptedStatusPayload, SKAStatusUnencryptedEnvelope, SKStatusPayload;

@protocol SKAStatusEncryptionManaging <NSObject>
- (NSString *)encryptionValidationTokenForChannel:(SKADatabaseChannel *)arg1;
- (SKADecryptedStatusPayload *)decryptStatusPayloadFromStatusEnvelopeData:(NSData *)arg1 channel:(SKADatabaseChannel *)arg2;
- (SKAStatusUnencryptedEnvelope *)extractEnvelopeFromStatusEnvelopeData:(NSData *)arg1;
- (NSData *)encodeStatusPayload:(SKStatusPayload *)arg1 statusUniqueIdentifier:(NSString *)arg2 dateCreated:(NSDate *)arg3 currentServerTime:(NSDate *)arg4 channel:(SKADatabaseChannel *)arg5;
@end

