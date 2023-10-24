//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APSSystemMonitor;

@interface APSTopicFilterPolicyEmbedded
{
    _Bool _downgradeWhenLocked;	// 16 = 0x10
    APSSystemMonitor *_systemMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000c0ec9
@property(retain, nonatomic) APSSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(nonatomic) _Bool downgradeWhenLocked; // @synthesize downgradeWhenLocked=_downgradeWhenLocked;
- (void)systemDidUnlock;	// IMP=0x00100000000c0e45
- (void)systemDidLock;	// IMP=0x00100000000c0e06
- (void)logFilterPolicyInformation;	// IMP=0x00100000000c0d04
- (id)topicChosenByPolicyFromTopics:(id)arg1;	// IMP=0x00100000000c0b4b
- (long long)filterChosenByPolicyForTopic:(id)arg1;	// IMP=0x00100000000c09b1
- (void)dealloc;	// IMP=0x00100000000c0965
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000c08e2
- (id)initShouldDowngradeWhenLocked:(_Bool)arg1 systemMonitor:(id)arg2 withDelegate:(id)arg3;	// IMP=0x00100000000c0840

@end

