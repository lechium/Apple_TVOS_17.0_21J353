//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIUtils : NSObject
{
}

+ (const char *)NINearbyObjectUpdateRateToShortString:(long long)arg1;	// IMP=0x0080000000001153
+ (const char *)NINearbyObjectUpdateRateToString:(long long)arg1;	// IMP=0x0080000000001130
+ (const char *)NISessionBackgroundModeToString:(long long)arg1;	// IMP=0x008000000000110d
+ (_Bool)nearbyObjectUpdateRate:(long long)arg1 isGreaterThan:(long long)arg2;	// IMP=0x00800000000010c4
+ (_Bool)isIntValidNearbyObjectUpdateRate:(long long)arg1;	// IMP=0x00800000000010b7
+ (_Bool)isIntValidAntennaDiversityOverride:(long long)arg1;	// IMP=0x00800000000010aa
+ (const char *)AntennaDiversityOverrideToString:(long long)arg1;	// IMP=0x0080000000001088
+ (_Bool)isIntValidRelationshipSpecifier:(long long)arg1;	// IMP=0x008000000000106e
+ (const char *)NIRelationshipSpecifierToString:(unsigned long long)arg1;	// IMP=0x008000000000104c

@end

