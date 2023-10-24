//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@class STTelephonyStateProvider;

@protocol STTelephonyStateObserver <NSObject>

@optional
- (void)mobileEquipmentInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)carrierBundleInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)subscriptionInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
@end

