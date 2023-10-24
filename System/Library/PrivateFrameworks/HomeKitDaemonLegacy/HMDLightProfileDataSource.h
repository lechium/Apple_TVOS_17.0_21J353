//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSDictionary, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface HMDLightProfileDataSource : HMFObject
{
}

@property(readonly) double naturalLightingEnabledRetryInterval;
@property(readonly) long long naturalLightingEnabledMaxRetryCount;
- (void)dispatchAfterTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000093c97a
@property(readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property(readonly) double naturalLightingCurveUpdateInterval;
@property(readonly) NSDictionary *naturalLightingCurveResourceFileContent;
@property(readonly, copy) NSTimeZone *localTimeZone;
- (unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x000000000093c433
@property(readonly, copy) NSDate *date;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

