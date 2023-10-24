//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol HMDAudioAnalysisEventSubscriberContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisEventSubscriber : NSObject
{
    id <HMDAudioAnalysisEventSubscriberContext> _context;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000003525e6
- (void).cxx_destruct;	// IMP=0x0000000000352158
@property(readonly) id <HMDAudioAnalysisEventSubscriberContext> context; // @synthesize context=_context;
- (void)_postUpdateEventRouterEventIfDifferent:(id)arg1;	// IMP=0x0000000000351971
- (id)transformHMDBulletinToHMBulletin:(id)arg1;	// IMP=0x00000000003517e1
- (void)_handleAudioAnalysisEventMessage:(id)arg1;	// IMP=0x0000000000351519
- (void)_postBulletinNotificationWithBulletin:(id)arg1;	// IMP=0x00000000003513a1
- (void)_postOrUpdateNotificationWithBulletin:(id)arg1;	// IMP=0x000000000035134c
- (id)mediaSystemLastKnownEventKeyForAccessoryUUID:(id)arg1 pairedAccessoryUUID:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x0000000000351189
- (void)_postOrUpdateNotificationWithBulletin:(id)arg1 stereoPairedAccessory:(id)arg2;	// IMP=0x0000000000350e3d
- (void)postOrUpdateNotificationWithBulletinIfneeded:(id)arg1;	// IMP=0x0000000000350db7
- (void)postNotificationForEvent:(id)arg1;	// IMP=0x0000000000350af8
- (void)deregisterForMessages;	// IMP=0x0000000000350a8a
- (void)registerForMessages;	// IMP=0x000000000035089c
- (void)configureWithContext:(id)arg1;	// IMP=0x000000000035085a
- (id)initWithContext:(id)arg1;	// IMP=0x00000000003507f2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)stereoPairedCounterpartAccessory;	// IMP=0x0000000000350599
- (_Bool)shouldPublishEvent:(id)arg1;	// IMP=0x000000000035025d
- (id)logIdentifier;	// IMP=0x00000000003501e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

