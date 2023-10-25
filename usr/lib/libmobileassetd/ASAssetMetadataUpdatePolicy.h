//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASAssetMetadataUpdatePolicy : NSObject
{
}

+ (id)policy;	// IMP=0x00800000001d9d57
- (double)automaticMetadataUpdateIntervalForAssetType:(id)arg1;	// IMP=0x00000000001da49d
- (double)defaultNetworkTimeout;	// IMP=0x00000000001da48f
- (id)checkPreferencesForOverride:(id)arg1;	// IMP=0x00000000001da372
- (id)getSystemAppURL:(id)arg1;	// IMP=0x00000000001da29e
- (id)serverURLForAssetType:(id)arg1;	// IMP=0x00000000001da088
- (char *)trainName;	// IMP=0x00000000001d9ebd
- (id)_stringPreferenceValueForKey:(id)arg1;	// IMP=0x00000000001d9dfb
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateError:(id)arg3;	// IMP=0x00000000001d9de5
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateInterval:(double)arg3;	// IMP=0x00000000001d9dac

@end
