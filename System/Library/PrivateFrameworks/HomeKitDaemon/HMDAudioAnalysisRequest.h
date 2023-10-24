//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID, SNDetectSoundRequest, SNSystemAudioAnalyzer;
@protocol HMDAudioAnalysisRequestDelegate, HMDAudioAnalysisRequestManagerContext;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisRequest : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _didRequestEnd;	// 12 = 0xc
    _Bool _lastResultContainedDetection;	// 13 = 0xd
    NSUUID *_identifier;	// 16 = 0x10
    id <HMDAudioAnalysisRequestManagerContext> _context;	// 24 = 0x18
    unsigned long long _reason;	// 32 = 0x20
    NSDate *_eventStartDate;	// 40 = 0x28
    SNDetectSoundRequest *_request;	// 48 = 0x30
    NSString *_soundIdentifier;	// 56 = 0x38
    NSDate *_creationDate;	// 64 = 0x40
    id <HMDAudioAnalysisRequestDelegate> _delegate;	// 72 = 0x48
    SNSystemAudioAnalyzer *_analyzer;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000cdd28f
- (void).cxx_destruct;	// IMP=0x0000000000cdd0e2
@property _Bool lastResultContainedDetection; // @synthesize lastResultContainedDetection=_lastResultContainedDetection;
@property(readonly) __weak SNSystemAudioAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property(readonly) __weak id <HMDAudioAnalysisRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy) NSString *soundIdentifier; // @synthesize soundIdentifier=_soundIdentifier;
@property(retain) SNDetectSoundRequest *request; // @synthesize request=_request;
@property(readonly, copy) NSDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
@property(retain) id <HMDAudioAnalysisRequestManagerContext> context; // @synthesize context=_context;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x0000000000cdcf1d
- (void)forceTrigger;	// IMP=0x0000000000cdcbd8
- (id)_homePresenceByPairingIdentity;	// IMP=0x0000000000cdcaf8
- (void)postEventEndNotification;	// IMP=0x0000000000cdc734
- (void)_refreshRequest;	// IMP=0x0000000000cdc6de
- (void)removeRequest;	// IMP=0x0000000000cdc697
- (void)_removeRequest;	// IMP=0x0000000000cdc55b
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000cdc3d9
- (void)notifySubscribersForRequestResults:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000000cdc32b
- (void)requestDidComplete:(id)arg1;	// IMP=0x0000000000cdc287
- (void)request:(id)arg1 didProduceResult:(id)arg2;	// IMP=0x0000000000cdb8bd
- (void)configureWithContext:(id)arg1;	// IMP=0x0000000000cdb6dc
- (id)initWithSoundIdentifier:(id)arg1 delegate:(id)arg2 requestIdentifier:(id)arg3 reason:(unsigned long long)arg4;	// IMP=0x0000000000cdb5e6
@property _Bool didRequestEnd; // @synthesize didRequestEnd=_didRequestEnd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

