//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDBrowsableContentAPICoordinator, NSMutableArray, NSMutableDictionary, NSString;

@interface MRDBrowsableContentServer : NSObject
{
    NSMutableArray *_queuedInitiatePlaybackMessages;	// 8 = 0x8
    NSMutableArray *_queuedRelayableMessages;	// 16 = 0x10
    NSMutableDictionary *_queuedBeginLoadingBlocks;	// 24 = 0x18
    MRDBrowsableContentAPICoordinator *_apiCoordinator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004109e
@property(readonly, nonatomic) MRDBrowsableContentAPICoordinator *apiCoordinator; // @synthesize apiCoordinator=_apiCoordinator;
- (_Bool)_messageRequiresMediaServerBlessing:(id)arg1;	// IMP=0x001000000004106f
- (_Bool)_messageCanLaunchApp:(id)arg1;	// IMP=0x001000000004104a
- (void)_scheduleEndProcessAssertionForClient:(id)arg1;	// IMP=0x0010000000041002
- (_Bool)_takeProcessAssertionForClient:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000040df9
- (void)_handleSupportedAPIsDidChangeForClient:(id)arg1;	// IMP=0x00100000000408d4
- (void)_handleBrowsableContentDidFinishLoadingFromClient:(id)arg1 indexPath:(CDStruct_3716a28a)arg2 withError:(id)arg3;	// IMP=0x0010000000040633
- (void)_sendInitiatePlaybackMessage:(id)arg1;	// IMP=0x001000000004034d
- (void)_relayMessage:(id)arg1 toClientWithBundleIDAndReply:(id)arg2;	// IMP=0x001000000003feff
- (void)_handleGetAppsSupportingBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000003fe53
- (void)_handleSetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000003fd99
- (void)_handleGetSupportedBrowsableContentAPIsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000003fd1a
- (void)_handleRequestPlaybackInitializationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000003fa20
- (void)_clientDidUnregisterCanBeNowPlaying:(id)arg1;	// IMP=0x001000000003f959
- (void)_clientDidRegisterCanBeNowPlaying:(id)arg1;	// IMP=0x001000000003f892
- (void)_clearQueuedBeginLoadingMessagesForApp:(id)arg1;	// IMP=0x001000000003f7a8
- (void)_sendQueuedBeginLoadingMessagesForAvailableApp:(id)arg1;	// IMP=0x001000000003f5f2
- (void)_enqueueCompletion:(CDUnknownBlockType)arg1 forUnavailableDestinationApp:(id)arg2;	// IMP=0x001000000003f4e6
- (void)_handleBeginLoadingBrowsableContentMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000003efa0
- (void)collectDiagnostic:(id)arg1;	// IMP=0x001000000003ef84
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000003ee69
- (id)init;	// IMP=0x001000000003ed24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

