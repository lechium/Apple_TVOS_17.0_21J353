//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol CSAttSiriUIDismissProtocol, CSAttendingHintProviding, LBAttendingStatesServiceDelegate, OS_dispatch_queue;

@interface CSAttendingStatesProvidingProxy : NSObject
{
    id <LBAttendingStatesServiceDelegate> _remoteObjectProxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSAttendingHintProviding> _hintProvider;	// 24 = 0x18
    NSHashTable<CSAttSiriUIDismissProtocol> *_dismissUpdateReceivers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000079479
@property(retain, nonatomic) NSHashTable<CSAttSiriUIDismissProtocol> *dismissUpdateReceivers; // @synthesize dismissUpdateReceivers=_dismissUpdateReceivers;
@property(nonatomic) __weak id <CSAttendingHintProviding> hintProvider; // @synthesize hintProvider=_hintProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <LBAttendingStatesServiceDelegate> remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;	// IMP=0x001000000007935f
- (void)speechStartDetectedWithShouldDuckTTS:(_Bool)arg1;	// IMP=0x0010000000079311
- (void)speechStartDetectedWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;	// IMP=0x001000000007926f
- (void)localAttendingStoppedUnexpectedlyWithError:(id)arg1;	// IMP=0x00100000000791e2
- (void)localAttendingStartedWithRootRequestId:(id)arg1;	// IMP=0x0010000000079155
- (void)localAttendingStarted;	// IMP=0x001000000007910a
- (void)localAttendingWillStartWithRootRequestId:(id)arg1;	// IMP=0x001000000007907d
- (void)requestDismissed;	// IMP=0x0010000000079032
- (void)dismissAttending;	// IMP=0x0010000000078fe7
- (void)siriDidPromptWithRootRequestId:(id)arg1;	// IMP=0x0010000000078ed7
- (void)siriPromptWillStartWithRootRequestId:(id)arg1;	// IMP=0x0010000000078e34
- (void)siriDidPrompt;	// IMP=0x0010000000078e20
- (void)siriPromptWillStart;	// IMP=0x0010000000078e0c
- (void)startUpdateStates;	// IMP=0x0010000000078d8d
- (void)attendingStatesXPCDisconnected;	// IMP=0x0010000000078d42
- (void)registerAttendingHintProvider:(id)arg1;	// IMP=0x0010000000078cb5
- (void)removeDismissUpdateReceiver:(id)arg1;	// IMP=0x0010000000078c28
- (void)addDismissUpdateReceiver:(id)arg1;	// IMP=0x0010000000078b9b
- (id)init;	// IMP=0x0010000000078b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

