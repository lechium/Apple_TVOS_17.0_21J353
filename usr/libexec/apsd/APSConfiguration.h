//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableArray, NSNumber, NSString, NSURL;
@protocol OS_dispatch_source;

@interface APSConfiguration : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSDictionary *_plist;	// 16 = 0x10
    NSDate *_expiry;	// 24 = 0x18
    NSDate *_fetchDate;	// 32 = 0x20
    NSError *_loadingError;	// 40 = 0x28
    _Bool _isLoaded;	// 48 = 0x30
    _Bool _hasValidSignature;	// 49 = 0x31
    _Bool _isLoadBalanced;	// 50 = 0x32
    NSURL *;	// 56 = 0x38
    NSMutableArray *_pendingCompletionBlocks;	// 64 = 0x40
    long long _connectionType;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_expireTimer;	// 80 = 0x50
    NSNumber *_expensiveConditionsBackOffInterval;	// 88 = 0x58
    NSNumber *_filterMessageTimeout;	// 96 = 0x60
}

+ (void)invalidateConfigurationForEnvironment:(id)arg1 connectionType:(long long)arg2;	// IMP=0x00400000000794d6
+ (void)loadConfigurationForEnvironment:(id)arg1 connectionType:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000000791cb
+ (id)configurationForEnvironment:(id)arg1 connectionType:(long long)arg2;	// IMP=0x0010000000078fbc
+ (id)_onQueue_configurationForEnvironment:(id)arg1 connectionType:(long long)arg2;	// IMP=0x0010000000078d12
+ (void)initialize;	// IMP=0x0010000000078cbb
- (void).cxx_destruct;	// IMP=0x002000000007afb7
@property(readonly, nonatomic) NSNumber *filterMessageTimeout; // @synthesize filterMessageTimeout=_filterMessageTimeout;
@property(readonly, nonatomic) NSNumber *expensiveConditionsBackOffInterval; // @synthesize expensiveConditionsBackOffInterval=_expensiveConditionsBackOffInterval;
@property(nonatomic) _Bool hasValidSignature; // @synthesize hasValidSignature=_hasValidSignature;
@property(copy, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property(copy, nonatomic) NSDate *fetchDate; // @synthesize fetchDate=_fetchDate;
- (void)setExpiryInterval:(double)arg1 expirationBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ad6e
- (_Bool)_isExpired;	// IMP=0x001000000007ad10
- (_Bool)_isLoaded;	// IMP=0x001000000007ad07
@property(readonly, nonatomic) NSNumber *filterOptimizationEnabled;
@property(readonly, nonatomic) NSNumber *simulatorConnectionEnabled;
@property(readonly, nonatomic) NSNumber *minPresenceSaltRotationInterval;
@property(readonly, nonatomic) NSString *urlTokenPrefix;
@property(readonly, nonatomic) NSNumber *pubSubDefaultTimeout;
@property(readonly, nonatomic) NSNumber *pubSubRetryAttemptsCount;
@property(readonly, nonatomic) NSNumber *delayedSuspendKeepAliveInterval;
@property(readonly, nonatomic) NSNumber *suspendToggleDailyLimit;
@property(readonly, nonatomic) NSNumber *suspendToggleHourlyLimit;
- (id)bagExpiryInterval;	// IMP=0x001000000007abe5
@property(readonly, nonatomic) NSNumber *disableDualModePiggybackTimer;
@property(readonly, nonatomic) NSNumber *lowQualityThresholdConnectedTime;
@property(readonly, nonatomic) NSNumber *highQualityThresholdConnectedTime;
@property(readonly, nonatomic) NSNumber *delayedReconnectTLSInterval;
@property(readonly, nonatomic) NSNumber *delayedReconnectTLSIntervalTrigger;
@property(readonly, nonatomic) NSNumber *delayedReconnectMinIntervalTrigger;
@property(readonly, nonatomic) NSNumber *delayedReconnectMaxIntervalTrigger;
@property(readonly, nonatomic) NSNumber *delayedReconnectMaxInterval;
@property(readonly, nonatomic) NSNumber *delayedReconnectInterval;
@property(readonly, nonatomic) NSNumber *delayedReconnectIntervalWatchWiFi;
@property(readonly, nonatomic) NSNumber *wifiKeepAliveEarlyFireConstantInterval;
- (id)ExpensiveConditionsBackOffInterval;	// IMP=0x001000000007aa89
@property(readonly, nonatomic) NSNumber *maxExpensiveConditionsConnectionAttempts;
@property(readonly, nonatomic) NSNumber *powerOptimizationsForExpensiveNetworkingDisabled;
@property(readonly, nonatomic) NSNumber *minimumIntervalFallbackEnabled;
@property(readonly, nonatomic) NSNumber *nagleEnabled;
@property(readonly, nonatomic) NSNumber *lastIPCachingTTLMinutesV2;
@property(readonly, nonatomic) NSNumber *lastIPCachingTTLMinutes;
@property(readonly, nonatomic) NSNumber *lastIPCachingPercentage;
@property(readonly, nonatomic) NSNumber *keepAliveV2TimeDriftMaximum;
@property(readonly, nonatomic) NSNumber *disableCostDrivenDualChannelAttempts;
@property(readonly, nonatomic) NSNumber *piggybackDualChannelAttempts;
@property(readonly, nonatomic) NSNumber *costDrivenDualChannelAttempts;
@property(readonly, nonatomic) NSNumber *forcedShortTimeoutInterval;
@property(readonly, nonatomic) NSNumber *activeInterval;
@property(readonly, nonatomic) NSNumber *awdSlowReceiveThreshold;
@property(readonly, nonatomic) NSNumber *wwanTrackedLinkQualityOffTransitions;
@property(readonly, nonatomic) NSNumber *wwanTrackedLinkQualityTimeInterval;
@property(readonly, nonatomic) NSNumber *maximumLowPriorityBatchesPerHour;
@property(readonly, nonatomic) NSNumber *lowPriorityMessageBatchSize;
@property(readonly, nonatomic) NSNumber *criticalMessageTimeout;
@property(readonly, nonatomic) NSNumber *criticalMessageKeepAliveTimerDuration;
@property(readonly, nonatomic) NSNumber *numberOfCriticalMessageKeepAlivesBeforeDisconnecting;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) unsigned long long serverCount;
@property(readonly, nonatomic) NSString *hostname;
- (void)_finishLoadWithResponse:(id)arg1 urlHost:(id)arg2 data:(id)arg3;	// IMP=0x001000000007a2f8
- (void)_failWithError:(id)arg1;	// IMP=0x001000000007a1d2
- (void)_callCompletionBlocksWithError:(id)arg1;	// IMP=0x0010000000079f6c
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000079e11
- (id)pendingCompletionBocks;	// IMP=0x0010000000079e03
- (void)dealloc;	// IMP=0x0010000000079dc4
- (id)initWithEnvironment:(id)arg1 connectionType:(long long)arg2;	// IMP=0x0010000000079795

@end
