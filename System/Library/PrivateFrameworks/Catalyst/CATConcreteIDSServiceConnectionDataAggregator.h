//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet;
@protocol CATIDSServiceConnectionDataAggregatorDelegate, CATTimer, CATTimerSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATConcreteIDSServiceConnectionDataAggregator : NSObject
{
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 8 = 0x8
    id <CATTimerSource> mTimerSource;	// 16 = 0x10
    double mMissingItemInterval;	// 24 = 0x18
    _Bool mSupportsSequenceCorrection;	// 32 = 0x20
    NSMutableDictionary *mAggregationsByDataNumber;	// 40 = 0x28
    unsigned long long mNextDeploymentNumber;	// 48 = 0x30
    unsigned long long mNextExpectedSequenceNumber;	// 56 = 0x38
    unsigned long long mGreatestExpectedSequenceNumber;	// 64 = 0x40
    NSMutableIndexSet *mPendingSequenceNumbers;	// 72 = 0x48
    id <CATTimer> mMissingContentTimer;	// 80 = 0x50
    id <CATIDSServiceConnectionDataAggregatorDelegate> _delegate;	// 88 = 0x58
}

+ (id)missingContentTimerIdentifier;	// IMP=0x001000000000c968
- (void).cxx_destruct;	// IMP=0x000000000000ca37
@property(nonatomic) __weak id <CATIDSServiceConnectionDataAggregatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x000000000000c9c2
- (void)dataAggregationCompleted:(id)arg1;	// IMP=0x000000000000c7d6
- (void)missingContentTimerDidFire:(id)arg1 fireCount:(unsigned long long)arg2;	// IMP=0x000000000000c716
- (void)updateMissingContentTrackingForDataContent:(id)arg1;	// IMP=0x000000000000c3b1
- (void)updateExistingDataWindowWithContent:(id)arg1;	// IMP=0x000000000000c282
- (void)processNewDataWindowWithContent:(id)arg1;	// IMP=0x000000000000c193
- (void)receiveExpectedSequenceNumber:(unsigned long long)arg1;	// IMP=0x000000000000c0a7
- (void)receiveDataContent:(id)arg1;	// IMP=0x000000000000bf81
@property(readonly, nonatomic) unsigned long long receivedSequenceNumber;
- (id)missingSequenceNumbers;	// IMP=0x000000000000bed8
- (id)initWithWorkQueue:(id)arg1 timerSource:(id)arg2 missingItemInterval:(double)arg3 supportsSequenceCorrection:(_Bool)arg4;	// IMP=0x000000000000bdf5

@end

