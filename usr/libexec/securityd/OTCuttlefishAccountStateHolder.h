//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableSet, NSString, TPSpecificUser;
@protocol OS_dispatch_queue, OTPersonaAdapter;

@interface OTCuttlefishAccountStateHolder : NSObject
{
    MISSING_TYPE *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_contextID;	// 32 = 0x20
    id <OTPersonaAdapter> _personaAdapter;	// 40 = 0x28
    TPSpecificUser *_activeAccount;	// 48 = 0x30
    NSMutableSet *_monitors;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001cfac2
@property(retain) NSMutableSet *monitors; // @synthesize monitors=_monitors;
@property(retain) TPSpecificUser *activeAccount; // @synthesize activeAccount=_activeAccount;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)asyncNotifyAccountStateChanges:(id)arg1 from:(id)arg2;	// IMP=0x00100000001cf8a2
- (_Bool)_onqueuePersistAccountChanges:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00100000001cf65d
- (_Bool)persistOctagonJoinAttempt:(int)arg1 error:(id *)arg2;	// IMP=0x00100000001cf60f
- (_Bool)persistLastHealthCheck:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001cf571
- (_Bool)persistAccountChanges:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00100000001cf300
- (_Bool)persistNewTrustState:(int)arg1 error:(id *)arg2;	// IMP=0x00100000001cf2b2
- (_Bool)persistNewEgoPeerID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001cf214
- (id)lastHealthCheckupDate:(id *)arg1;	// IMP=0x00100000001cf136
- (id)getEgoPeerID:(id *)arg1;	// IMP=0x00100000001cf027
- (id)_onqueueLoadOrCreateAccountMetadata:(id *)arg1;	// IMP=0x00100000001cedf5
- (id)loadOrCreateAccountMetadata:(id *)arg1;	// IMP=0x00100000001cec74
- (void)registerNotification:(id)arg1;	// IMP=0x00100000001cec0b
- (void)changeActiveAccount:(id)arg1;	// IMP=0x00100000001cebf9
- (id)initWithQueue:(id)arg1 container:(id)arg2 context:(id)arg3 personaAdapter:(id)arg4 activeAccount:(id)arg5;	// IMP=0x00100000001cea9c

@end

