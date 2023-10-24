//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCLLocationManager : NSObject
{
    struct RetainPtr<CLLocationManager> _locationManager;	// 8 = 0x8
    struct Client *_client;	// 16 = 0x10
    struct String _websiteIdentifier;	// 24 = 0x18
    _Bool _isWaitingForAuthorization;	// 32 = 0x20
    _Bool _mode;	// 33 = 0x21
}

- (id).cxx_construct;	// IMP=0x0000000000946a80
- (void).cxx_destruct;	// IMP=0x0000000000946a30
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000946970
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000946800
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0000000000946730
- (void)setEnableHighAccuracy:(_Bool)arg1;	// IMP=0x00000000009466f0
- (void)stop;	// IMP=0x00000000009466d0
- (void)dealloc;	// IMP=0x0000000000946680
- (id)initWithWebsiteIdentifier:(const void *)arg1 client:(struct Client *)arg2 mode:(_Bool)arg3;	// IMP=0x0000000000946550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

