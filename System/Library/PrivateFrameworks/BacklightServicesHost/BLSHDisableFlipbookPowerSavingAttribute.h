//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServices/BLSAttribute.h>

__attribute__((visibility("hidden")))
@interface BLSHDisableFlipbookPowerSavingAttribute : BLSAttribute
{
    unsigned long long _reason;	// 8 = 0x8
}

+ (id)disablePowerSavingForReason:(unsigned long long)arg1;	// IMP=0x006000000000b680
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (_Bool)checkEntitlementSourceForRequiredEntitlements:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000000b6d6

@end

