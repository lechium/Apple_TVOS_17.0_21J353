//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNMTLDeviceWisdomParameters : NSObject
{
}

- (id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e4062
- (id)wisdomParameterForMTLDevice:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e3ffb
- (void)_flushMetalDeviceWisdomParametersCache;	// IMP=0x00000000000e3ff5
- (id)_cachedMetalDeviceWisdomParametersAndReturnError:(id *)arg1;	// IMP=0x00000000000e3fb0
- (id)_wisdomResourcesPath;	// IMP=0x00000000000e3f34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
