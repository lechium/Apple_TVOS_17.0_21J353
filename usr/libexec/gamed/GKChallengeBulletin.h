//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKChallengeInternal, NSString;

@interface GKChallengeBulletin
{
    GKChallengeInternal *_challenge;	// 16 = 0x10
    NSString *_challengeID;	// 24 = 0x18
}

+ (void)expireChallengeList;	// IMP=0x00400000001b7f4c
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001b7dcb
- (void).cxx_destruct;	// IMP=0x00200000001ba9de
@property(retain, nonatomic) NSString *challengeID; // @synthesize challengeID=_challengeID;
@property(retain, nonatomic) GKChallengeInternal *challenge; // @synthesize challenge=_challenge;
- (void)handleAcceptAction;	// IMP=0x00100000001ba2ec
- (unsigned long long)launchEventType;	// IMP=0x00100000001ba1a4
- (id)customChallengeSoundPathForBundleID:(id)arg1;	// IMP=0x00100000001b9fb2
- (void)assembleBulletin;	// IMP=0x00100000001b9d0d
- (void)notifyClient:(id)arg1;	// IMP=0x00100000001b9b49
- (void)notifyApp;	// IMP=0x00100000001b980d
- (_Bool)isAppRunning;	// IMP=0x00100000001b9474
- (void)refreshData;	// IMP=0x00100000001b91ef
- (void)setGameName:(id)arg1;	// IMP=0x00100000001b918a
- (_Bool)supportsChallenges;	// IMP=0x00100000001b911c
- (id)gameName;	// IMP=0x00100000001b90a2
- (void)setOriginatorPlayer:(id)arg1;	// IMP=0x00100000001b903d
- (id)originatorPlayer;	// IMP=0x00100000001b8fed
- (void)setOriginatorPlayerID:(id)arg1;	// IMP=0x00100000001b8f88
- (id)originatorPlayerID;	// IMP=0x00100000001b8f0e
- (void)setReceiverPlayer:(id)arg1;	// IMP=0x00100000001b8ea9
- (id)receiverPlayer;	// IMP=0x00100000001b8e59
- (void)setReceiverPlayerID:(id)arg1;	// IMP=0x00100000001b8df4
- (id)receiverPlayerID;	// IMP=0x00100000001b8d7a
- (id)gameDescriptor;	// IMP=0x00100000001b8a45
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b8238
- (id)URLContext;	// IMP=0x00100000001b7f38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001b7e9d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b7e02
- (id)init;	// IMP=0x00100000001b7dd3

@end

