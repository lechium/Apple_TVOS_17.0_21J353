//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDRTCReporter : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *relayDeviceRouteChangesByCallUUID;	// 16 = 0x10
    MISSING_TYPE *groupUUIDToConversationReportingSessions;	// 24 = 0x18
    MISSING_TYPE *conversationUUIDToConversationReport;	// 32 = 0x20
    MISSING_TYPE *groupUUIDToConversationInfo;	// 40 = 0x28
    MISSING_TYPE *callUUIDToCallReportingSessions;	// 48 = 0x30
    MISSING_TYPE *callUUIDToGFTCallReportingSessions;	// 56 = 0x38
    MISSING_TYPE *callUUIDtoConversationUUID;	// 64 = 0x40
    MISSING_TYPE *conversationGroupUUIDToCallUUID;	// 72 = 0x48
    MISSING_TYPE *callUUIDtoConversationGroupUUID;	// 80 = 0x50
    MISSING_TYPE *uuidToNWActivity;	// 88 = 0x58
    MISSING_TYPE *uuidToNWActivityConnecting;	// 96 = 0x60
    MISSING_TYPE *idsSessionUUIDToChatUUIDs;	// 104 = 0x68
    MISSING_TYPE *callInfosPendingScoreForCallUUIDs;	// 112 = 0x70
    MISSING_TYPE *userScoreEnabled;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00400000002036c0
- (id)init;	// IMP=0x001000000020368a
- (void)reportingController:(id)arg1 callUUID:(id)arg2 withUserScore:(int)arg3;	// IMP=0x001000000020256b
- (void)reportingController:(id)arg1 sentLetMeInResponseForConversation:(id)arg2 isApproved:(_Bool)arg3;	// IMP=0x001000000020205d
- (void)reportingController:(id)arg1 receivedLetMeInRequestForConversation:(id)arg2;	// IMP=0x0010000000201d85
- (void)reportingController:(id)arg1 voipPushDroppedOnTheFloor:(id)arg2;	// IMP=0x0010000000201ac1
- (void)reportingController:(id)arg1 voipAppBecameDisabledFromLaunching:(id)arg2;	// IMP=0x0010000000201824
- (void)reportingController:(id)arg1 voipAppFailedToPostIncomingCall:(id)arg2;	// IMP=0x00100000002017de
- (void)reportingController:(id)arg1 receivedGroupActivitesReports:(id)arg2 forConversation:(id)arg3;	// IMP=0x0010000000201495
- (void)reportingController:(id)arg1 receivedConnectionSetupReport:(id)arg2 eventType:(long long)arg3 forConversation:(id)arg4;	// IMP=0x0010000000200c7e
- (void)reportingController:(id)arg1 receivedIDSReports:(id)arg2 forSessionWithUUID:(id)arg3;	// IMP=0x0010000000200492
- (void)reportingController:(id)arg1 receivedIDSChat:(id)arg2;	// IMP=0x00100000001fff66
- (void)reportingController:(id)arg1 receivedIDSReports:(id)arg2 forConversation:(id)arg3;	// IMP=0x00100000001ff9b2
- (void)reportingController:(id)arg1 avcBlobRequestMessageRetrySucceededForConversationGroupUUID:(id)arg2;	// IMP=0x00100000001ff4bf
- (void)reportingController:(id)arg1 avcBlobRequestMessageRetryFailedForConversationGroupUUID:(id)arg2;	// IMP=0x00100000001ff1e9
- (void)reportingController:(id)arg1 avcBlobRequestMessageRetryStartedForConversationGroupUUID:(id)arg2;	// IMP=0x00100000001ff1bd
- (void)reportingController:(id)arg1 messageRetrySucceededForConversationGroupUUID:(id)arg2;	// IMP=0x00100000001ff191
- (void)reportingController:(id)arg1 messageRetryFailedForConversationGroupUUID:(id)arg2;	// IMP=0x00100000001ff0ba
- (void)reportingController:(id)arg1 messageRetryStartedForConversationGroupUUID:(id)arg2;	// IMP=0x00100000001ff08e
- (void)reportingController:(id)arg1 AVCBlobRecoveryTimedOutForConversation:(id)arg2;	// IMP=0x00100000001ff062
- (void)reportingController:(id)arg1 transitionAttemptForConversation:(id)arg2;	// IMP=0x00100000001ff036
- (void)reportingController:(id)arg1 AVCBlobRecoveryStartedForConversation:(id)arg2;	// IMP=0x00100000001ff00a
- (void)reportingController:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x00100000001fefde
- (void)reportingController:(id)arg1 addedActiveConversation:(id)arg2;	// IMP=0x00100000001fea66
- (void)reportingController:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;	// IMP=0x00100000001fe4dc
- (void)reportingController:(id)arg1 remoteMembersChangedForConversation:(id)arg2;	// IMP=0x00100000001fe3cb
- (void)reportingController:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x00100000001fe320
- (void)reportingController:(id)arg1 pickedRoute:(id)arg2 forCall:(id)arg3;	// IMP=0x00100000001fe14a
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x00100000001fdd98
- (void)reportingController:(id)arg1 timedOutPickingRoute:(id)arg2 forCall:(id)arg3;	// IMP=0x00100000001fa5d6
- (void)reportingController:(id)arg1 createConversationReportingSessionForConversation:(id)arg2;	// IMP=0x00100000001fa431
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001f9f06

@end

