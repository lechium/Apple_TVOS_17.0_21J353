//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@protocol CoreTelephonyClientDelegate <NSObject>

@optional
- (void)dualSimCapabilityDidChange;
- (void)simLessSubscriptionsDidChange;
- (void)activeSubscriptionsDidChange;
- (void)subscriptionInfoDidChange;
@end

