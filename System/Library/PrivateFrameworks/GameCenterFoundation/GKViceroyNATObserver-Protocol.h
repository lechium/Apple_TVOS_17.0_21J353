//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@protocol GKViceroyNATObserver
@property(readonly, nonatomic) unsigned long long currentNATType;
- (void)getNATTypeWithForceRelay:(_Bool)arg1 withHandler:(void (^)(unsigned long long))arg2;
- (void)applySettingsAndAwaitReady:(NSDictionary *)arg1;
@end

