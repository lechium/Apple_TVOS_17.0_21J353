//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionValueTransformer : NSValueTransformer
{
}

+ (id)_subscriptionForUserAccount:(id)arg1;	// IMP=0x008000000001fd35
+ (void)_updateUserAccount:(id)arg1 fromJSONWithSubscription:(id)arg2;	// IMP=0x008000000001fa05
+ (id)_userAccountWithLegacySubscriptionPrimitives:(id)arg1;	// IMP=0x008000000001f78a
+ (id)_legacySubscriptionInfoForUserAccount:(id)arg1;	// IMP=0x008000000001f54d
+ (_Bool)_subscriptionIsCoreSpotlight:(id)arg1;	// IMP=0x008000000001f4bd
+ (_Bool)allowsReverseTransformation;	// IMP=0x008000000001f220
+ (Class)transformedValueClass;	// IMP=0x008000000001f20f
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x000000000001f316
- (id)transformedValue:(id)arg1;	// IMP=0x000000000001f228

@end

