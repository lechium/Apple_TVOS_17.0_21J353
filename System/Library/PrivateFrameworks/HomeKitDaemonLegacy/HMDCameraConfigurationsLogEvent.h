//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDCameraConfigurationsLogEvent : HMMLogEvent
{
    NSArray *_homeSettingsConfigurations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004a0787
@property(readonly, nonatomic) NSArray *homeSettingsConfigurations; // @synthesize homeSettingsConfigurations=_homeSettingsConfigurations;
- (id)initWithHomes:(id)arg1;	// IMP=0x00000000004a0531

@end

