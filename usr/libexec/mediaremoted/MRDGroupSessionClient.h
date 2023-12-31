//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol MRDGroupSession, OS_dispatch_queue;

@interface MRDGroupSessionClient : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    id <MRDGroupSession> _session;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000b092
@property(nonatomic) __weak id <MRDGroupSession> session; // @synthesize session=_session;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)infoFromGroupSession:(id)arg1;	// IMP=0x001000000000afe3
- (id)transportParticipants:(id)arg1 forSession:(id)arg2;	// IMP=0x001000000000aaa7
- (void)connectToDiscoveryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a966
- (void)session:(id)arg1 removeAllParticipantsWithReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a827
- (void)session:(id)arg1 removeParticipant:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a6c5
- (void)session:(id)arg1 denyPendingParticipant:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a53e
- (void)session:(id)arg1 approvePendingParticipant:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a3b7
- (void)connectToSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009e73
- (void)manager:(id)arg1 activeSessionDidChange:(id)arg2;	// IMP=0x0010000000009d3f
- (void)manager:(id)arg1 didEndHostedGroupSession:(id)arg2;	// IMP=0x0010000000009c8b
- (void)manager:(id)arg1 didStartHostedGroupSession:(id)arg2;	// IMP=0x0010000000009b57
- (void)manager:(id)arg1 didLeaveRemoteGroupSession:(id)arg2;	// IMP=0x0010000000009aa3
- (void)manager:(id)arg1 didJoinRemoteGroupSession:(id)arg2;	// IMP=0x001000000000996f
- (void)manager:(id)arg1 discoveredSessionsDidChange:(id)arg2;	// IMP=0x0010000000009866
- (void)sessionDidExitLowPowerMode:(id)arg1;	// IMP=0x0010000000009734
- (void)sessionDidEnterLowPowerMode:(id)arg1;	// IMP=0x0010000000009602
- (void)session:(id)arg1 didUpdateSynchronizedMetadata:(id)arg2;	// IMP=0x00100000000094ad
- (void)session:(id)arg1 didUpdatePendingParticipants:(id)arg2;	// IMP=0x0010000000009191
- (void)session:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x0010000000009012
- (void)session:(id)arg1 didUpdateMembers:(id)arg2;	// IMP=0x0010000000008e97
- (void)session:(id)arg1 didUpdateParticipants:(id)arg2;	// IMP=0x0010000000008d1b
- (id)client;	// IMP=0x0010000000008bcf
- (void)dealloc;	// IMP=0x0010000000008b1e
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000000898f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

