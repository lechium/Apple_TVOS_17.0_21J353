//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICLiveLink, NSMutableArray, NSUUID;

__attribute__((visibility("hidden")))
@interface ICLiveLinkPlaybackCoordinatorMedium : NSObject
{
    struct os_unfair_lock_s _fetchServerStateLock;	// 8 = 0x8
    ICLiveLink *_liveLink;	// 16 = 0x10
    NSUUID *_localParticipantUUID;	// 24 = 0x18
    long long _fetchServerStateInProgressCount;	// 32 = 0x20
    NSMutableArray *_fetchServerStateCompletions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009697d
@property(readonly, nonatomic) NSMutableArray *fetchServerStateCompletions; // @synthesize fetchServerStateCompletions=_fetchServerStateCompletions;
@property(readonly, nonatomic) long long fetchServerStateInProgressCount; // @synthesize fetchServerStateInProgressCount=_fetchServerStateInProgressCount;
@property(readonly, nonatomic) struct os_unfair_lock_s fetchServerStateLock; // @synthesize fetchServerStateLock=_fetchServerStateLock;
@property(readonly, copy, nonatomic) NSUUID *localParticipantUUID; // @synthesize localParticipantUUID=_localParticipantUUID;
@property(readonly, nonatomic) __weak ICLiveLink *liveLink; // @synthesize liveLink=_liveLink;
- (void)_reloadTransportControlStateForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000966f1
- (void)_broadcastTransportControlStateDictionary:(id)arg1 forItemWithIdentifier:(id)arg2;	// IMP=0x0000000000096598
- (void)_broadcastLocalParticipantStateDictionary:(id)arg1;	// IMP=0x00000000000964c8
- (void)clearCoordinationMediumDelegate;	// IMP=0x00000000000963b8
- (void)synchronizePlaybackStateForReason:(id)arg1;	// IMP=0x00000000000962e0
- (void)handleNewTransportControlStateDictionary:(id)arg1;	// IMP=0x00000000000961d0
- (void)handleNewParticipantStateDictionary:(id)arg1;	// IMP=0x00000000000960c0
- (void)removeParticipant:(id)arg1;	// IMP=0x0000000000095fb0
- (void)handlePlaybackSyncPayload:(id)arg1;	// IMP=0x0000000000095d98
- (_Bool)isCoordinatorSuspended;	// IMP=0x0000000000095d90
- (id)initWithLiveLink:(id)arg1;	// IMP=0x0000000000095beb

@end

