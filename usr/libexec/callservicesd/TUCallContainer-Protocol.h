//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSUUID, TUCall;

@protocol TUCallContainer <NSObject>
@property(readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property(readonly, copy, nonatomic) NSArray *currentAudioAndVideoCallGroups;
@property(readonly, copy, nonatomic) NSArray *currentCallGroups;
@property(readonly, nonatomic) _Bool anyCallIsEndpointOnCurrentDevice;
@property(readonly, nonatomic) _Bool anyCallIsHostedOnCurrentDevice;
@property(readonly, nonatomic) _Bool hasCurrentVideoCalls;
@property(readonly, nonatomic) _Bool hasCurrentAudioCalls;
@property(readonly, nonatomic) _Bool hasCurrentCalls;
@property(readonly, nonatomic) unsigned long long callCountOnDefaultPairedDevice;
@property(readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property(readonly, nonatomic) unsigned long long currentVideoCallCount;
@property(readonly, nonatomic) unsigned long long currentCallCount;
@property(readonly, nonatomic) TUCall *screeningCall;
@property(readonly, nonatomic) TUCall *currentVideoCall;
@property(readonly, nonatomic) TUCall *activeVideoCall;
@property(readonly, nonatomic) TUCall *incomingVideoCall;
@property(readonly, nonatomic) TUCall *incomingCall;
@property(readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property(readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property(readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property(readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property(readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property(readonly, copy, nonatomic) NSArray *displayedAudioAndVideoCalls;
@property(readonly, copy, nonatomic) NSArray *displayedCalls;
@property(readonly, copy, nonatomic) NSArray *incomingCalls;
@property(readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property(readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property(readonly, copy, nonatomic) NSArray *currentCalls;
- (_Bool)allCallsAreOfService:(int)arg1;
- (_Bool)allCallsPassTest:(_Bool (^)(TUCall *))arg1;
- (_Bool)anyCallPassesTest:(_Bool (^)(TUCall *))arg1;
- (unsigned long long)countOfCallsPassingTest:(_Bool (^)(TUCall *))arg1;
- (TUCall *)displayedCallFromCalls:(NSArray *)arg1;
- (TUCall *)callWithCallUUID:(NSString *)arg1;
- (TUCall *)callWithUniqueProxyIdentifier:(NSString *)arg1;
- (TUCall *)audioOrVideoCallWithStatus:(int)arg1;
- (TUCall *)videoCallWithStatus:(int)arg1;
- (TUCall *)callWithStatus:(int)arg1;
- (TUCall *)callPassingTest:(_Bool (^)(TUCall *))arg1;
- (NSArray *)callsWithGroupUUID:(NSUUID *)arg1;
- (NSArray *)audioAndVideoCallsWithStatus:(int)arg1;
- (NSArray *)callsWithStatus:(int)arg1;
- (NSArray *)callsPassingTest:(_Bool (^)(TUCall *))arg1;
@end

