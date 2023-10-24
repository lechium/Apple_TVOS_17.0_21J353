//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserCloudShareOwnerAdoptionDailyEvent
{
    NSNumber *_configureState;	// 8 = 0x8
    NSNumber *_isPrimaryResident;	// 16 = 0x10
    NSNumber *_hasSharedUser;	// 24 = 0x18
    NSNumber *_percentageOfParticipantsHaveAccepted;	// 32 = 0x20
    NSNumber *_percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;	// 40 = 0x28
    NSNumber *_percentageOfParticipantsHaveCloudShareIDButNotAccepted;	// 48 = 0x30
    NSNumber *_percentageOfNonAcceptedParticipantsWithKnownCapability;	// 56 = 0x38
    NSNumber *_percentageOfUsersThatAreNotParticipant;	// 64 = 0x40
    NSNumber *_percentageOfParticipatingUsersThatNotAccepted;	// 72 = 0x48
    NSNumber *_percentageOfAcceptedParticipantsWithoutCloudShareID;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000083f2cd
@property(readonly, copy) NSNumber *percentageOfAcceptedParticipantsWithoutCloudShareID; // @synthesize percentageOfAcceptedParticipantsWithoutCloudShareID=_percentageOfAcceptedParticipantsWithoutCloudShareID;
@property(readonly, copy) NSNumber *percentageOfParticipatingUsersThatNotAccepted; // @synthesize percentageOfParticipatingUsersThatNotAccepted=_percentageOfParticipatingUsersThatNotAccepted;
@property(readonly, copy) NSNumber *percentageOfUsersThatAreNotParticipant; // @synthesize percentageOfUsersThatAreNotParticipant=_percentageOfUsersThatAreNotParticipant;
@property(readonly, copy) NSNumber *percentageOfNonAcceptedParticipantsWithKnownCapability; // @synthesize percentageOfNonAcceptedParticipantsWithKnownCapability=_percentageOfNonAcceptedParticipantsWithKnownCapability;
@property(readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDButNotAccepted; // @synthesize percentageOfParticipantsHaveCloudShareIDButNotAccepted=_percentageOfParticipantsHaveCloudShareIDButNotAccepted;
@property(readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDAndHaveAccepted; // @synthesize percentageOfParticipantsHaveCloudShareIDAndHaveAccepted=_percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property(readonly, copy) NSNumber *percentageOfParticipantsHaveAccepted; // @synthesize percentageOfParticipantsHaveAccepted=_percentageOfParticipantsHaveAccepted;
@property(readonly, copy) NSNumber *hasSharedUser; // @synthesize hasSharedUser=_hasSharedUser;
@property(readonly, copy) NSNumber *isPrimaryResident; // @synthesize isPrimaryResident=_isPrimaryResident;
@property(readonly, copy) NSNumber *configureState; // @synthesize configureState=_configureState;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithConfigureState:(long long)arg1 isPrimaryResident:(_Bool)arg2 trustStatusCounts:(struct CloudShareTrustManagerTrustStatusCounts)arg3;	// IMP=0x000000000083ed19

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

