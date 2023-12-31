//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HHAEndpointAssignmentManager, HHAEndpointAssignmentStatus, HHAQuarantinedHubs, NSDate, NSDictionary, NSMutableDictionary, NSUUID;
@protocol HHAEndpointAssignmentExecutor, HHAEndpointDependencyFactory, HHATimer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHAEndpoint : NSObject
{
    _Bool _traitsRetrieved;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    _Bool _isAssignmentLocked;	// 10 = 0xa
    NSUUID *_endpointIdentifier;	// 16 = 0x10
    NSUUID *_assignedHubId;	// 24 = 0x18
    NSMutableDictionary *_traits;	// 32 = 0x20
    long long _idleState;	// 40 = 0x28
    unsigned long long _endpointState;	// 48 = 0x30
    long long _sessionState;	// 56 = 0x38
    NSDate *_lastStateChange;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    HHAEndpointAssignmentManager *_assignmentManager;	// 80 = 0x50
    HHAQuarantinedHubs *_quarantinedHubList;	// 88 = 0x58
    id <HHAEndpointAssignmentExecutor> _executor;	// 96 = 0x60
    id <HHAEndpointDependencyFactory> _dependencyFactory;	// 104 = 0x68
    NSDate *_lockTime;	// 112 = 0x70
    double _lockDuration;	// 120 = 0x78
    id <HHATimer> _lockTimer;	// 128 = 0x80
    id <HHATimer> _reapAssignmentTimer;	// 136 = 0x88
    double _idleGracePeriodSec;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000000d281
@property(nonatomic) _Bool isAssignmentLocked; // @synthesize isAssignmentLocked=_isAssignmentLocked;
@property(readonly, nonatomic) double idleGracePeriodSec; // @synthesize idleGracePeriodSec=_idleGracePeriodSec;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) id <HHATimer> reapAssignmentTimer; // @synthesize reapAssignmentTimer=_reapAssignmentTimer;
@property(readonly, nonatomic) id <HHATimer> lockTimer; // @synthesize lockTimer=_lockTimer;
@property(readonly, nonatomic) double lockDuration; // @synthesize lockDuration=_lockDuration;
@property(readonly, nonatomic) NSDate *lockTime; // @synthesize lockTime=_lockTime;
@property(readonly, nonatomic) id <HHAEndpointDependencyFactory> dependencyFactory; // @synthesize dependencyFactory=_dependencyFactory;
@property(readonly, nonatomic) id <HHAEndpointAssignmentExecutor> executor; // @synthesize executor=_executor;
@property(readonly, nonatomic) HHAQuarantinedHubs *quarantinedHubList; // @synthesize quarantinedHubList=_quarantinedHubList;
@property(readonly, nonatomic) HHAEndpointAssignmentManager *assignmentManager; // @synthesize assignmentManager=_assignmentManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool traitsRetrieved; // @synthesize traitsRetrieved=_traitsRetrieved;
@property(retain, nonatomic) NSDate *lastStateChange; // @synthesize lastStateChange=_lastStateChange;
@property(nonatomic) long long sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic) unsigned long long endpointState; // @synthesize endpointState=_endpointState;
@property(nonatomic) long long idleState; // @synthesize idleState=_idleState;
@property(retain, nonatomic) NSMutableDictionary *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) NSUUID *assignedHubId; // @synthesize assignedHubId=_assignedHubId;
@property(readonly, nonatomic) NSUUID *endpointIdentifier; // @synthesize endpointIdentifier=_endpointIdentifier;
- (id)setIdleGracePeriodSeconds:(id)arg1;	// IMP=0x000000000000d05b
- (_Bool)isActiveWithHub:(id)arg1;	// IMP=0x000000000000d03a
@property(readonly, nonatomic) _Bool isAssignable;
@property(readonly, nonatomic) _Bool isAssigned;
@property(readonly, nonatomic) _Bool isStarving;
- (id)quarantinedHubs;	// IMP=0x000000000000cf5d
- (void)addHubsToQuarantine:(id)arg1;	// IMP=0x000000000000cf47
- (float)scoreForHub:(id)arg1;	// IMP=0x000000000000c9eb
- (_Bool)updateEndpointTraits:(id)arg1;	// IMP=0x000000000000c74c
@property(readonly, nonatomic) NSDictionary *descriptionDictionary;
@property(readonly, nonatomic) _Bool needsAssignment;
- (void)revokeAssignment;	// IMP=0x000000000000c3da
- (_Bool)assignToHub:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000000000c1fc
- (_Bool)updateSessionStatus:(id)arg1;	// IMP=0x000000000000bd49
- (_Bool)_statusRepresentsChange:(id)arg1;	// IMP=0x000000000000bc93
- (void)invalidate;	// IMP=0x000000000000baab
- (id)initWithId:(id)arg1 queue:(id)arg2 executor:(id)arg3 dependencyFactory:(id)arg4;	// IMP=0x000000000000b6e2
- (void)assignmentAttemptTimeout;	// IMP=0x000000000000b542
- (void)reattemptAssignment;	// IMP=0x000000000000b376
- (void)quarantineExpired;	// IMP=0x000000000000b217
- (void)_unlockAssignment;	// IMP=0x000000000000b046
- (void)_lockAssignmentForSeconds:(double)arg1;	// IMP=0x000000000000ad8e
- (void)_handleReapAssignmentTimer;	// IMP=0x000000000000ac43
- (void)_handleAssignmentLockTimerFired;	// IMP=0x000000000000ab67
@property(readonly, nonatomic) HHAEndpointAssignmentStatus *assignmentStatus;
- (id)description;	// IMP=0x000000000000aa15

@end

