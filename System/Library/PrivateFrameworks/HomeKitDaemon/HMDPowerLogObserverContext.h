//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFPowerLogger, HMMIntervalMapper;
@protocol HMMLogEventDispatching;

__attribute__((visibility("hidden")))
@interface HMDPowerLogObserverContext : NSObject
{
    HMMIntervalMapper *_homeConfigurationEventHistogram;	// 8 = 0x8
    HMMIntervalMapper *_cameraConfigurationEventHistogram;	// 16 = 0x10
    id <HMMLogEventDispatching> _logEventDispatcher;	// 24 = 0x18
    HMFPowerLogger *_powerLogger;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002f743f
@property(readonly, nonatomic) __weak HMFPowerLogger *powerLogger; // @synthesize powerLogger=_powerLogger;
@property(readonly, nonatomic) __weak id <HMMLogEventDispatching> logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property(readonly, nonatomic) HMMIntervalMapper *cameraConfigurationEventHistogram; // @synthesize cameraConfigurationEventHistogram=_cameraConfigurationEventHistogram;
@property(readonly, nonatomic) HMMIntervalMapper *homeConfigurationEventHistogram; // @synthesize homeConfigurationEventHistogram=_homeConfigurationEventHistogram;
- (id)initWithLogEventDispatcher:(id)arg1 powerLogger:(id)arg2;	// IMP=0x00000000002f725c

@end
