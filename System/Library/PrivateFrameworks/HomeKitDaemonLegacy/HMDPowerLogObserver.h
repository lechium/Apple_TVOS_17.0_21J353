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

+ (id)supportedEventClasses;	// IMP=0x00100000002b30b1
- (void).cxx_destruct;	// IMP=0x00000000002b309e
@property(retain, nonatomic) HMDPowerLogObserverContext *context; // @synthesize context=_context;
- (void)stop;	// IMP=0x00000000002b2f57
- (void)start;	// IMP=0x00000000002b2e08
- (void)_reportCameraSettingsConfiguration:(id)arg1;	// IMP=0x00000000002b2673
- (void)_reportConfiguration:(id)arg1;	// IMP=0x00000000002b21a9
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000002b20e0
- (id)initWithContext:(id)arg1;	// IMP=0x00000000002b2072
- (id)initWithLogEventDispatcher:(id)arg1;	// IMP=0x00000000002b1fcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

