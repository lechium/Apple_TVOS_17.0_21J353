//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMemoryUtilizationTracker : NSObject
{
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000ae2ad5
- (void).cxx_destruct;	// IMP=0x0000000000ae2ac7
@property(readonly) __weak id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)trackMemoryUsageWithReason:(long long)arg1;	// IMP=0x0000000000ae2864
- (id)initWithLogEventSubmitter:(id)arg1;	// IMP=0x0000000000ae27ef
- (id)init;	// IMP=0x0000000000ae2795

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

