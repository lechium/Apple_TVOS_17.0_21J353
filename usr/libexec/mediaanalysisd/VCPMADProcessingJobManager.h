//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface VCPMADProcessingJobManager : NSObject
{
    NSMutableDictionary *_queueNameToQueueGroup;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_inProcessAssetBudget;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000000af424
- (void).cxx_destruct;	// IMP=0x00200000000af96d
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *inProcessAssetBudget; // @synthesize inProcessAssetBudget=_inProcessAssetBudget;
- (CDUnknownBlockType)getJobScheduler;	// IMP=0x00100000000af871
- (void)registerQueueGroupWithName:(id)arg1 andNumberOfQueues:(unsigned long long)arg2;	// IMP=0x00100000000af479
- (id)init;	// IMP=0x00100000000af3a1

@end

