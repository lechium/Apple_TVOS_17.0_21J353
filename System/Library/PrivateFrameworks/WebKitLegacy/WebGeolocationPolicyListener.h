//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject
{
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> _geolocation;	// 8 = 0x8
    struct RetainPtr<WebView> _webView;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000000f7eb0
- (void).cxx_destruct;	// IMP=0x00000000000f7e50
- (_Bool)shouldClearCache;	// IMP=0x00000000000f7e10
- (void)denyOnlyThisRequest;	// IMP=0x00000000000f7d90
- (void)deny;	// IMP=0x00000000000f7cc0
- (void)allow;	// IMP=0x00000000000f7be0
- (id)initWithGeolocation:(NakedPtr_331571b6)arg1 forWebView:(id)arg2;	// IMP=0x00000000000f7b30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
