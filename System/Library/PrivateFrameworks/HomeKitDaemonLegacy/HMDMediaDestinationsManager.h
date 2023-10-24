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

+ (id)logCategory;	// IMP=0x0010000000054688
+ (id)deriveAudioGroupIdentifierFromDestinations:(id)arg1;	// IMP=0x001000000005459e
+ (unsigned long long)deriveSupportedOptionsFromDestinations:(id)arg1;	// IMP=0x00100000000543ba
- (void).cxx_destruct;	// IMP=0x0000000000053cfa
@property __weak id <HMDMediaDestinationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationsManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDMediaDestinationMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) HMMediaDestination *destination; // @synthesize destination=_destination;
- (id)logIdentifier;	// IMP=0x0000000000053c13
- (id)attributeDescriptions;	// IMP=0x0000000000053b47
- (id)privateDescription;	// IMP=0x0000000000053b35
- (void)mediaDestinationsMessageHandler:(id)arg1 didReceiveDestinationUpdatedNotification:(id)arg2 destination:(id)arg3;	// IMP=0x0000000000053a13
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3;	// IMP=0x00000000000538d6
- (void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3;	// IMP=0x0000000000053799
- (_Bool)messageHandler:(id)arg1 isReadyForIncomingMessage:(id)arg2;	// IMP=0x0000000000053751
- (id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2;	// IMP=0x0000000000053613
- (id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2;	// IMP=0x00000000000534f2
- (id)dataSourceDestinationControllerWithIdentifier:(id)arg1;	// IMP=0x00000000000533ae
- (id)dataSourceTargetAccessory;	// IMP=0x000000000005328a
- (id)dataSourceAssociatedDestinationManagers;	// IMP=0x0000000000053166
- (id)dataSourceAssociatedDestinations;	// IMP=0x000000000005310f
- (id)mediaGroupsAggregatorMessenger;	// IMP=0x0000000000052feb
- (id)defaultDestination;	// IMP=0x0000000000052f3a
- (id)deriveAudioDestination;	// IMP=0x0000000000052d38
- (id)sendRequestsToUpdateAudioGroupIdentifier:(id)arg1;	// IMP=0x00000000000528e2
- (id)sendRequestsToUpdateSupportOptions:(unsigned long long)arg1;	// IMP=0x0000000000052481
@property(readonly) HMMediaDestination *committedDestination;
@property(readonly) NSUUID *identifier;
- (void)refreshDestination;	// IMP=0x000000000005211b
- (void)mergeDestination:(id)arg1;	// IMP=0x0000000000051fd3
- (void)legacyRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051f48
- (void)requestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051ca0
- (void)stageAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000051a63
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000000518f8
- (id)initWithDestination:(id)arg1 messageHandler:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000000517d3
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x00000000000516dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
