//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXProvider, NSMutableOrderedSet, NSString;
@protocol CSDFaceTimeProviderDelegateManagerDelegate, OS_dispatch_queue;

@interface CSDFaceTimeIMAVProviderDelegate : NSObject
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    id <CSDFaceTimeProviderDelegateManagerDelegate> _faceTimeDemuxerDelegate;	// 16 = 0x10
    CDUnknownBlockType _providerDidBegin;	// 24 = 0x18
    CDUnknownBlockType _imAccountForActionBlock;	// 32 = 0x20
    CXProvider *_provider;	// 40 = 0x28
    NSMutableOrderedSet *_cachedChats;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000022f5d
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableOrderedSet *cachedChats; // @synthesize cachedChats=_cachedChats;
@property(retain, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) CDUnknownBlockType imAccountForActionBlock; // @synthesize imAccountForActionBlock=_imAccountForActionBlock;
@property(copy, nonatomic) CDUnknownBlockType providerDidBegin; // @synthesize providerDidBegin=_providerDidBegin;
@property(nonatomic) __weak id <CSDFaceTimeProviderDelegateManagerDelegate> faceTimeDemuxerDelegate; // @synthesize faceTimeDemuxerDelegate=_faceTimeDemuxerDelegate;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;	// IMP=0x0010000000022c53
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x00100000000229eb
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x0010000000022763
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x00100000000224e1
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x001000000002242c
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x0010000000022377
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x001000000002210f
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x0010000000021e69
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;	// IMP=0x0010000000021c92
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x001000000002196a
- (void)providerDidReset:(id)arg1;	// IMP=0x0010000000021741
- (void)providerDidBegin:(id)arg1;	// IMP=0x0010000000021544
- (void)invitedToIMAVChat:(id)arg1;	// IMP=0x00100000000210eb
- (void)handleChatOutFrequencyChangedNotification:(id)arg1;	// IMP=0x0010000000020f1c
- (void)handleChatInFrequencyChangedNotification:(id)arg1;	// IMP=0x0010000000020d4d
- (void)handleChatMayRequireBreakBeforeMakeChanged:(id)arg1;	// IMP=0x0010000000020b10
- (void)handleChatConferenceMetadataUpdated:(id)arg1;	// IMP=0x00100000000208e2
- (void)handleChatConferenceIDChangedNotification:(id)arg1;	// IMP=0x0010000000020670
- (void)handleChatCallInfoChangedNotification:(id)arg1;	// IMP=0x001000000002038f
- (void)handleChatInvitationSent:(id)arg1;	// IMP=0x001000000002018e
- (void)handleChatFirstRemoteFrameArrived:(id)arg1;	// IMP=0x001000000001ffe0
- (id)failureContextForChat:(id)arg1;	// IMP=0x001000000001f2d6
- (void)handleChatStateChanged:(id)arg1;	// IMP=0x001000000001ec18
- (void)daemonConnected:(id)arg1;	// IMP=0x001000000001eb5f
- (void)_updateProviderForEndedChat:(id)arg1;	// IMP=0x001000000001e881
- (void)_updateProviderForConnectedChat:(id)arg1;	// IMP=0x001000000001e357
- (void)_updateProviderForConnectingChat:(id)arg1;	// IMP=0x001000000001e108
- (unsigned int)IMAVChatRemoteVideoPresentationStateFromCXVideoPresentationState:(long long)arg1;	// IMP=0x001000000001e0ed
- (void)_setLocalLandscapeAspectRatio:(struct CGSize)arg1 localPortraitAspectRatio:(struct CGSize)arg2 forChat:(id)arg3;	// IMP=0x001000000001e0e7
- (void)inviteIMAVPeersWithAction:(id)arg1 tokensToExclude:(id)arg2 joinCallActionToFulfill:(id)arg3;	// IMP=0x001000000001d7bc
- (_Bool)hasCallStartedConnectingWithUUID:(id)arg1;	// IMP=0x001000000001d71b
- (void)_endChatWithUUID:(id)arg1 withEndedReason:(unsigned int)arg2;	// IMP=0x001000000001d4e4
- (void)endCallWithUUID:(id)arg1;	// IMP=0x001000000001d465
- (void)endCallWithUUIDAsLocalHangup:(id)arg1;	// IMP=0x001000000001d3e6
- (void)endCallWithUUIDAsDeclinedElsewhere:(id)arg1;	// IMP=0x001000000001d367
- (void)endCallWithUUIDAsAnsweredElsewhere:(id)arg1;	// IMP=0x001000000001d2e8
- (void)registerChat:(id)arg1;	// IMP=0x001000000001d230
- (id)upgradeSessionUUIDForCallWithUUID:(id)arg1;	// IMP=0x001000000001d228
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x001000000001d194
- (id)chatWithUUID:(id)arg1;	// IMP=0x001000000001cf18
- (void)_requestPendingInvites;	// IMP=0x001000000001ce3d
- (void)_setUpListeners;	// IMP=0x001000000001c39c
- (void)dealloc;	// IMP=0x001000000001c327
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000001c1c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

