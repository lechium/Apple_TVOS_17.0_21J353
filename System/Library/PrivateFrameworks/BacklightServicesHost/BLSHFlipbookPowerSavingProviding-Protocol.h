//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@protocol BLSHFlipbookPowerSavingProviding <NSObject>
@property(readonly, nonatomic, getter=isFlipbookPowerSavingEnabled) _Bool flipbookPowerSavingEnabled;
- (void)decrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
- (void)incrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
@end

