//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BLSHInternalTapToRadarIgnorer : NSObject
{
}

+ (void)resetIgnoredDesignations;	// IMP=0x008000000000f4f3
+ (_Bool)hasIgnoredDesignations;	// IMP=0x008000000000f4ab
+ (_Bool)shouldIgnoreDesignation:(unsigned long long)arg1;	// IMP=0x008000000000f413
+ (void)ignoreRadarDesignation:(unsigned long long)arg1;	// IMP=0x008000000000f31b
+ (id)_ignoredDesignations;	// IMP=0x008000000000f2a0
+ (id)_defaults;	// IMP=0x008000000000f22f

@end

