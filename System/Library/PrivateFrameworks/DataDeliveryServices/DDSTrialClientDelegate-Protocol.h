//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSTrialAsset;
@protocol DDSTrialClient;

@protocol DDSTrialClientDelegate <NSObject>
- (void)trialClientDidStop:(id <DDSTrialClient>)arg1;
- (void)trialClient:(id <DDSTrialClient>)arg1 didReceiveAsset:(DDSTrialAsset *)arg2;
@end

