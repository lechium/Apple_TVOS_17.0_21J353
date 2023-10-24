//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSPredicate, NSUUID;
@protocol CSDCHRecentCall;

@protocol CSDCHManager <NSObject>
@property(readonly, copy, nonatomic) NSArray *recentCalls;
- (NSArray *)callsWithPredicate:(NSPredicate *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;
- (void)setOutgoingLocalParticipantUUID:(NSUUID *)arg1 forRecentCallsMatchingPredicate:(NSPredicate *)arg2;

@optional
- (void)deleteCallsWithPredicate:(NSPredicate *)arg1 completion:(void (^)(long long))arg2;
- (void)addToCallHistory:(id <CSDCHRecentCall>)arg1;
- (void)deleteCall:(id <CSDCHRecentCall>)arg1;
@end

