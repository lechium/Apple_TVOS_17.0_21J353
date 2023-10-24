//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class BSTransaction;
@protocol PBControlCenterPresentingDelegate;

@protocol PBControlCenterPresenting <NSObject>
@property(nonatomic, getter=isSystemMenuIdleTimerActive) _Bool systemMenuIdleTimerActive;
@property(readonly, nonatomic) long long systemMenuLayoutLevel;
@property(readonly, nonatomic, getter=isSystemMenuPresenting) _Bool systemMenuPresenting;
@property(nonatomic) __weak id <PBControlCenterPresentingDelegate> controlCenterPresenterDelegate;
- (_Bool)dismissSystemMenuAnimated:(_Bool)arg1;
- (void)presentSystemMenuWithActivationReason:(unsigned long long)arg1;

@optional
- (BSTransaction *)transactionForDismissingSystemMenuAnimated:(_Bool)arg1;
@end
