//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDAnalyticsReporter : NSObject
{
    MISSING_TYPE *callToStartTransportType;	// 8 = 0x8
}

+ (void)sendDualSIMRingtoneStateEvent:(_Bool)arg1;	// IMP=0x00200000002c8698
+ (void)sendSessionServerTerminatedEventWithActivitySession:(id)arg1 code:(unsigned int)arg2;	// IMP=0x00100000002c849f
+ (void)sendManualLaunchAttemptEventWithActivitySession:(id)arg1;	// IMP=0x00100000002c7fa4
+ (void)sendManualLaunchNeededEventWithActivitySession:(id)arg1;	// IMP=0x00100000002c7d46
- (void).cxx_destruct;	// IMP=0x00400000002cae76
- (id)init;	// IMP=0x00100000002cae35
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x00100000002c8d9f

@end

