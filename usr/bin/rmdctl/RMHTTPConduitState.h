//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSURL, RMHTTPConduitConfig;

@interface RMHTTPConduitState
{
}

- (id)reportDetails;	// IMP=0x002000000000ee94

// Remaining properties
@property(copy, nonatomic) NSURL *baseURL; // @dynamic baseURL;
@property(nonatomic) _Bool checkOutOnRemove; // @dynamic checkOutOnRemove;
@property(copy, nonatomic) NSString *chosenAuthenticationScheme; // @dynamic chosenAuthenticationScheme;
@property(retain, nonatomic) RMHTTPConduitConfig *conduitConfig; // @dynamic conduitConfig;
@property(copy, nonatomic) NSDate *localRetryAfterDate; // @dynamic localRetryAfterDate;
@property(nonatomic) long long numberOfConsecutiveAuthErrors; // @dynamic numberOfConsecutiveAuthErrors;
@property(nonatomic) long long numberOfConsecutiveErrors; // @dynamic numberOfConsecutiveErrors;
@property(nonatomic) long long numberOfConsecutiveFailures; // @dynamic numberOfConsecutiveFailures;
@property(copy, nonatomic) NSString *pushEnvironment; // @dynamic pushEnvironment;
@property(copy, nonatomic) NSString *pushTopic; // @dynamic pushTopic;
@property(copy, nonatomic) NSURL *referralBaseURL; // @dynamic referralBaseURL;
@property(nonatomic) long long referralCount; // @dynamic referralCount;
@property(copy, nonatomic) NSDate *serverRetryAfterDate; // @dynamic serverRetryAfterDate;

@end

