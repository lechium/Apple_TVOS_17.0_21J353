//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDBackgroundTaskLogger : HMFObject
{
    id <HMMLogEventSubmitting> _submitter;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000091c99c
- (void).cxx_destruct;	// IMP=0x000000000091c989
@property(readonly, nonatomic) id <HMMLogEventSubmitting> submitter; // @synthesize submitter=_submitter;
- (void)submitNotFiredLogEventForTask:(id)arg1;	// IMP=0x000000000091c730
- (void)submitLogEventForTask:(id)arg1;	// IMP=0x000000000091c55e
- (id)init;	// IMP=0x000000000091c504
- (id)initWithLogEventSubmitter:(id)arg1;	// IMP=0x000000000091c496

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

