//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAudio/NSObject-Protocol.h>

@class NSDictionary;
@protocol HAL_DSP_HostCallbacks, HAL_DSP_IOProcessor;

@protocol HAL_DSP_Factory <NSObject>
- (id <HAL_DSP_IOProcessor>)createProcessor:(NSDictionary *)arg1 withHost:(id <HAL_DSP_HostCallbacks>)arg2;
@end

