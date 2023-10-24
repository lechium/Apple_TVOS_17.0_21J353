//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSGibraltarVoiceTriggerHandler, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSCoreSpeechServicesListener : NSObject
{
    CSGibraltarVoiceTriggerHandler *_gibraltarVoiceTriggerHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCListener *_servicesListener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000044347
@property(retain, nonatomic) NSXPCListener *servicesListener; // @synthesize servicesListener=_servicesListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSGibraltarVoiceTriggerHandler *gibraltarVoiceTriggerHandler; // @synthesize gibraltarVoiceTriggerHandler=_gibraltarVoiceTriggerHandler;
- (oneway void)getFirstPassRunningMode:(CDUnknownBlockType)arg1;	// IMP=0x001000000004422a
- (oneway void)requestUpdatedSATAudio:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044214
- (oneway void)clearTriggerCount:(CDUnknownBlockType)arg1;	// IMP=0x001000000004414f
- (oneway void)getTriggerCount:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044088
- (oneway void)setDelayInterstitialSounds:(id)arg1 level:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043f59
- (oneway void)getVoiceTriggerRTModelRequestOptionsWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043ea6
- (oneway void)getCurrentVoiceTriggerLocaleWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043df0
- (oneway void)getTestResponse:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043d4b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000043c14
- (_Bool)_servicesListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000043a5c
- (void)listen;	// IMP=0x0010000000043982
- (id)init;	// IMP=0x001000000004392a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
