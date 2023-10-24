//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebGeolocationProviderIOS;

__attribute__((visibility("hidden")))
@interface _WebCoreLocationUpdateThreadingProxy : NSObject
{
    WebGeolocationProviderIOS *_provider;	// 8 = 0x8
}

- (void)resetGeolocation;	// IMP=0x00000000000fa670
- (void)errorOccurred:(id)arg1;	// IMP=0x00000000000fa600
- (void)positionChanged:(void *)arg1;	// IMP=0x00000000000fa450
- (void)geolocationAuthorizationDenied;	// IMP=0x00000000000fa3e0
- (void)geolocationAuthorizationGranted;	// IMP=0x00000000000fa370
- (id)initWithProvider:(id)arg1;	// IMP=0x00000000000fa330

@end
