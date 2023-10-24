//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaDestinationMessageHandler, HMMediaDestination, NSString, NSUUID;
@protocol HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationsManager : HMFObject
{
    HMMediaDestination *_destination;	// 8 = 0x8
    HMDMediaDestinationMessageHandler *_messageHandler;	// 16 = 0x10
    id <HMDMediaDestinationsManagerDataSource> _dataSource;	// 24 = 0x18
    id <HMDMediaDestinationsManagerDelegate> _delegate;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000005a321
+ (id)deriveAudioGroupIdentifierFromDestinations:(id)arg1;	// IMP=0x001000000005a237
+ (unsigned long long)deriveSupportedOptionsFromDestinations:(id)arg1;	// IMP=0x001000000005a053
- (void).cxx_destruct;	// IMP=0x0000000000059993
@property __weak id <HMDMediaDestinationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationsManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDMediaDestinationMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) HMMediaDestination *destination; // @synthesize destination=_destination;
- (id)logIdentifier;	// IMP=0x00000000000598ac
- (id)attributeDescriptions;	// IMP=0x00000000000597e0
- (id)privateDescription;	// IMP=0x00000000000597ce
- (void)mediaDestinationsMessageHandler:(id)arg1 didReceiveDestinationUpdatedNotification:(id)arg2 destination:(id)arg3;	// IMP=0x00000000000596a8
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;	// IMP=0x000000000005956b
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;	// IMP=0x000000000005942e
- (_Bool)messageHandler:(id)arg1 isReadyForIncomingMessage:(id)arg2;	// IMP=0x00000000000593e6
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;	// IMP=0x00000000000592a8
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;	// IMP=0x0000000000059187
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000059043
- (id)dataSourceTargetAccessory;	// IMP=0x0000000000058f1f
- (id)dataSourceAssociatedDestinationManagers;	// IMP=0x0000000000058dfb
- (id)dataSourceAssociatedDestinations;	// IMP=0x0000000000058da4
- (id)mediaGroupsAggregatorMessenger;	// IMP=0x0000000000058c80
- (id)defaultDestination;	// IMP=0x0000000000058bcf
- (id)deriveAudioDestination;	// IMP=0x00000000000589cd
- (id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000058577
- (id)sendRequestsToUpdateSupportOptions:(unsigned long long)arg1;	// IMP=0x0000000000058116
@property(readonly) HMMediaDestination *committedDestination;
@property(readonly) NSUUID *identifier;
- (void)refreshDestination;	// IMP=0x0000000000057dac
- (void)mergeDestination:(id)arg1;	// IMP=0x0000000000057c64
- (void)legacyRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057bd9
- (void)requestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057924
- (void)stageAudioGroupIdentifier:(id)arg1;	// IMP=0x00000000000576e3
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000057578
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000057453
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000005735c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
