//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, XCTDSiriSystemInterface;

@interface XCTDSiriInterface : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _didSendSiriBeginTestAnalyticsEvent;	// 9 = 0x9
    id <XCTDSiriSystemInterface> _systemInterface;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002f50a
@property(retain) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool didSendSiriBeginTestAnalyticsEvent; // @synthesize didSendSiriBeginTestAnalyticsEvent=_didSendSiriBeginTestAnalyticsEvent;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) id <XCTDSiriSystemInterface> systemInterface; // @synthesize systemInterface=_systemInterface;
- (_Bool)injectVoiceRecognitionAudioInputPaths:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002f19a
- (_Bool)injectAssistantRecognitionStrings:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002eeac
- (_Bool)startSiriUIRequestWithAudioFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002eb90
- (_Bool)startSiriUIRequestWithText:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002e80a
- (void)_sendSiriRequestBeginEventIfNeeded;	// IMP=0x001000000002e677
@property(readonly, getter=isEnabled) _Bool enabled;
- (id)init;	// IMP=0x001000000002e54e
- (id)initWithSystemInterface:(id)arg1;	// IMP=0x001000000002e441
- (void)invalidate;	// IMP=0x001000000002e1d6
- (void)_dispatchSyncIfValidOrAssert:(CDUnknownBlockType)arg1;	// IMP=0x001000000002dfb1
- (void)dealloc;	// IMP=0x001000000002deff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
