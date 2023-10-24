//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HFUpdateLogger, NSString;
@protocol HFCharacteristicReadPolicy;

@protocol HFCharacteristicValueOperationBatching <NSObject>
- (void)commitTransactionWithReason:(NSString *)arg1;
- (void)beginTransactionWithReason:(NSString *)arg1 readPolicy:(id <HFCharacteristicReadPolicy>)arg2 logger:(HFUpdateLogger *)arg3;
@end

