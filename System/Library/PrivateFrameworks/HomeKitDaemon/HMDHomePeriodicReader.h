//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomePeriodicReader : HMFObject
{
    NSString *_timerID;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000067042e
- (void).cxx_destruct;	// IMP=0x00000000006702bd
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
- (void)_startTimer;	// IMP=0x000000000066fe2a
- (void)_issueCharacteristicRequests:(id)arg1;	// IMP=0x000000000066fba0
- (void)_checkToIssueRead;	// IMP=0x000000000066f9f3
- (void)checkToIssueRead;	// IMP=0x000000000066f89f
- (void)startReadTimer;	// IMP=0x000000000066f74b
- (id)_characteristicsToRead;	// IMP=0x000000000066ee58
- (void)residentUpdated;	// IMP=0x000000000066ed81
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x000000000066ec0f
- (void)handleCharacteristicBasedEventAdded:(id)arg1;	// IMP=0x000000000066eb38
- (id)logIdentifier;	// IMP=0x000000000066ea5c
- (void)dealloc;	// IMP=0x000000000066e9e7
- (void)configure:(id)arg1;	// IMP=0x000000000066e882

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
