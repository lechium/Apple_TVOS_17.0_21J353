//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSActivationEvent, NSMapTable;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotificationHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMapTable *_delegates;	// 16 = 0x10
    CSActivationEvent *_pendingActivationEvent;	// 24 = 0x18
    CDUnknownBlockType _pendingCompletion;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000009b854
- (void).cxx_destruct;	// IMP=0x002000000009b3c2
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion; // @synthesize pendingCompletion=_pendingCompletion;
@property(retain, nonatomic) CSActivationEvent *pendingActivationEvent; // @synthesize pendingActivationEvent=_pendingActivationEvent;
@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_hasPendingActivationForType:(unsigned long long)arg1;	// IMP=0x001000000009b2ea
- (void)_stopMonitoring;	// IMP=0x001000000009b26b
- (void)_startMonitoring;	// IMP=0x001000000009b1ec
- (_Bool)_isVoiceTriggerEvent:(id)arg1;	// IMP=0x001000000009b0d1
- (void)_notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009abf7
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ab40
- (void)setDelegate:(id)arg1 forType:(unsigned long long)arg2;	// IMP=0x001000000009aaa0
- (void)stop;	// IMP=0x001000000009aa4a
- (void)start;	// IMP=0x001000000009a9f4
- (void)dealloc;	// IMP=0x001000000009a9b6
- (id)init;	// IMP=0x001000000009a8f7

@end

