//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSData, NSString;

@interface IDSActivityScribeMessage : FTIDSMessage
{
    unsigned char _pushPriority;	// 232 = 0xe8
    unsigned char _activityPolicy;	// 233 = 0xe9
    int _version;	// 236 = 0xec
    int _responseStatus;	// 240 = 0xf0
    NSArray *_tokens;	// 248 = 0xf8
    NSString *_activityTopic;	// 256 = 0x100
    NSString *_subActivity;	// 264 = 0x108
    NSData *_metadataBlob;	// 272 = 0x110
    NSString *_messageID;	// 280 = 0x118
    long long _ttl;	// 288 = 0x120
    NSString *_responsePresenceTopic;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00200000000ec54d
@property(nonatomic) int responseStatus; // @synthesize responseStatus=_responseStatus;
@property(retain, nonatomic) NSString *responsePresenceTopic; // @synthesize responsePresenceTopic=_responsePresenceTopic;
@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) unsigned char activityPolicy; // @synthesize activityPolicy=_activityPolicy;
@property(nonatomic) unsigned char pushPriority; // @synthesize pushPriority=_pushPriority;
@property(retain, nonatomic) NSData *metadataBlob; // @synthesize metadataBlob=_metadataBlob;
@property(retain, nonatomic) NSString *subActivity; // @synthesize subActivity=_subActivity;
@property(retain, nonatomic) NSString *activityTopic; // @synthesize activityTopic=_activityTopic;
@property(retain, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (void)handleResponseHeaders:(id)arg1;	// IMP=0x00100000000ec2cf
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000000ec215
- (id)messageBody;	// IMP=0x00100000000ebd66
- (id)additionalMessageHeadersForOutgoingPush;	// IMP=0x00100000000ebd03
- (id)topic;	// IMP=0x00100000000ebcf6
- (_Bool)wantsIntegerUniqueIDs;	// IMP=0x00100000000ebcee
- (_Bool)wantsResponse;	// IMP=0x00100000000ebce6
- (_Bool)isIDSMessage;	// IMP=0x00100000000ebcde
- (_Bool)highPriority;	// IMP=0x00100000000ebcd6
- (_Bool)wantsAPSRetries;	// IMP=0x00100000000ebcce
- (_Bool)wantsIDSProtocolVersion;	// IMP=0x00100000000ebcc6
- (_Bool);	// IMP=0x00100000000ebcbe
- (_Bool)wantsCompressedBody;	// IMP=0x00100000000ebcb6
- (_Bool)wantsBinaryPush;	// IMP=0x00100000000ebcae
- (long long)responseCommand;	// IMP=0x00100000000ebca3
- (long long)command;	// IMP=0x00100000000ebc98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ebaea

@end

