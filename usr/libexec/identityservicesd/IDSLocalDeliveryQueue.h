//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSLocalDeliveryQueue : NSObject
{
    NSMutableArray *_messages;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSMutableDictionary *_statistics;	// 24 = 0x18
    struct os_unfair_lock_s _statisticsLock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003462c3
- (void)clearStats;	// IMP=0x0010000000345fbc
- (id)statisticsForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000345f16
@property(readonly) NSDictionary *statistics;
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;	// IMP=0x00100000003456f7
- (void)_removeMessageFromStatistics:(id)arg1;	// IMP=0x0010000000345256
- (void)_addMessageToStatistics:(id)arg1;	// IMP=0x0010000000344f08
- (id)nextSocketPairMessageNotOnServices:(id)arg1;	// IMP=0x001000000034491f
- (void)dequeueMessage:(id)arg1;	// IMP=0x0010000000344777
- (void)enqueueMessage:(id)arg1;	// IMP=0x0010000000344360
- (void)pushMessage:(id)arg1;	// IMP=0x0010000000344198
- (void)removeMessages:(id)arg1;	// IMP=0x001000000034417b
- (unsigned long long)countForDataMessageType:(long long)arg1;	// IMP=0x00100000003440cd
- (unsigned long long)countForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000344021
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *messages;
- (void)dealloc;	// IMP=0x0010000000343f9d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000343f22

@end
