//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction, CXCallSource, CXTransactionGroup, CXTransactionManager;

@protocol CXTransactionManagerDelegate <NSObject>
- (void)transactionManager:(CXTransactionManager *)arg1 transactionGroupCompleted:(CXTransactionGroup *)arg2;
- (void)transactionManager:(CXTransactionManager *)arg1 actionTimedOut:(CXAction *)arg2 forCallSource:(CXCallSource *)arg3;
@end

