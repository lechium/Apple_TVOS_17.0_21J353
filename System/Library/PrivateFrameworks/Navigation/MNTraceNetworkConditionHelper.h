//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MNTraceNetworkConditionHelper : NSObject
{
}

+ (id)getNLCProfile:(id)arg1;	// IMP=0x00800000000ce66d
+ (id)availableNLCProfiles;	// IMP=0x00800000000ce5f6
+ (id)nlcProfiles;	// IMP=0x00800000000ce57f
+ (id)activeNLCProfile;	// IMP=0x00800000000ce50d
+ (_Bool)disableNLC;	// IMP=0x00800000000ce49b
+ (_Bool)enableNLC:(id)arg1;	// IMP=0x00800000000ce429
+ (_Bool)hasActiveNetworkConditionInducer;	// IMP=0x00800000000ce3b7
+ (_Bool)deviceSupportsCellularData;	// IMP=0x00800000000ce345
+ (_Bool)isCellDataEnabled;	// IMP=0x00800000000ce2d3
+ (_Bool)setCellDataEnabled:(_Bool)arg1;	// IMP=0x00800000000ce261
+ (_Bool)isWiFiEnabled;	// IMP=0x00800000000ce1ef
+ (_Bool)setWiFiEnabled:(_Bool)arg1;	// IMP=0x00800000000ce17d
+ (_Bool)setCurrentState:(id)arg1;	// IMP=0x00800000000ce050
+ (id)getCurrentState;	// IMP=0x00800000000cdfde

@end

