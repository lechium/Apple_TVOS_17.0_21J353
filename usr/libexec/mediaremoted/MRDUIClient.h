//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MRDUIClient : NSObject
{
    _Bool _hasLockScreenAssertion;	// 8 = 0x8
    _Bool _hasQuickControlsAssertion;	// 9 = 0x9
    _Bool _hasScreenMirroringAssertion;	// 10 = 0xa
    _Bool _hasGroupSessionNearbyAssertion;	// 11 = 0xb
    _Bool _hasRouteRecommendationAssertion;	// 12 = 0xc
    _Bool _hasGroupSessionLowPowerPlatterAssertion;	// 13 = 0xd
    NSString *_bundleID;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000f11ad
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) _Bool hasGroupSessionLowPowerPlatterAssertion; // @synthesize hasGroupSessionLowPowerPlatterAssertion=_hasGroupSessionLowPowerPlatterAssertion;
@property(nonatomic) _Bool hasRouteRecommendationAssertion; // @synthesize hasRouteRecommendationAssertion=_hasRouteRecommendationAssertion;
@property(nonatomic) _Bool hasGroupSessionNearbyAssertion; // @synthesize hasGroupSessionNearbyAssertion=_hasGroupSessionNearbyAssertion;
@property(nonatomic) _Bool hasScreenMirroringAssertion; // @synthesize hasScreenMirroringAssertion=_hasScreenMirroringAssertion;
@property(nonatomic) _Bool hasQuickControlsAssertion; // @synthesize hasQuickControlsAssertion=_hasQuickControlsAssertion;
@property(nonatomic) _Bool hasLockScreenAssertion; // @synthesize hasLockScreenAssertion=_hasLockScreenAssertion;
- (void)nearbyGroupSessionDismissed:(id)arg1;	// IMP=0x00100000000f10c4
- (void)routeRecommendationDismissed;	// IMP=0x00100000000f1087
- (id)remoteObjectProxy;	// IMP=0x00100000000f1071
- (void)dealloc;	// IMP=0x00100000000f1000
- (id)description;	// IMP=0x00100000000f0fbf
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000f0f26

@end
