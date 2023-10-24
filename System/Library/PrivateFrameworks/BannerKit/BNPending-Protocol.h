//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/NSObject-Protocol.h>

@class BNPendingDequeuePromise, NSArray, NSDictionary, NSSet, NSString;
@protocol BNPresentable, BNPresentableUniquelyIdentifying;

@protocol BNPending <NSObject>
@property(readonly, copy, nonatomic) NSSet *activeSuspensionReasons;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(copy, nonatomic) NSString *penderIdentifier;
- (_Bool)setSuspended:(_Bool)arg1 forReason:(NSString *)arg2;
- (NSArray *)pullPresentablesWithIdentification:(id <BNPresentableUniquelyIdentifying>)arg1;
- (BNPendingDequeuePromise *)peekPresentable;
- (void)enqueuePresentable:(id <BNPresentable>)arg1 withOptions:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3;
@end

