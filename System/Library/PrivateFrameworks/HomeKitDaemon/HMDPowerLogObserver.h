//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPowerLogObserverContext, NSString;

__attribute__((visibility("hidden")))
@interface HMDPowerLogObserver : HMFObject
{
    HMDPowerLogObserverContext *_context;	// 8 = 0x8
}

+ (id)supportedEventClasses;	// IMP=0x00100000002f8640
- (void).cxx_destruct;	// IMP=0x00000000002f862d
@property(retain, nonatomic) HMDPowerLogObserverContext *context; // @synthesize context=_context;
- (void)stop;	// IMP=0x00000000002f84e6
- (void)start;	// IMP=0x00000000002f8397
- (void)_handleHH2CloudKitOperationEvent:(id)arg1;	// IMP=0x00000000002f82ff
- (void)_reportCameraSettingsConfiguration:(id)arg1;	// IMP=0x00000000002f7b6a
- (void)_reportConfiguration:(id)arg1;	// IMP=0x00000000002f76a0
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000002f758c
- (id)initWithContext:(id)arg1;	// IMP=0x00000000002f751e
- (id)initWithLogEventDispatcher:(id)arg1;	// IMP=0x00000000002f7479

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

