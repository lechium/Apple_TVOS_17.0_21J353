//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileDB, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionLocalPersistence : NSObject
{
    geo_isolater *_isolation;	// 8 = 0x8
    GEOTileDB *_db;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001378941
- (void)removeSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001378782
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000137876c
- (void)fetchSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001378756
- (void)addSubscriptionWithIdentifier:(id)arg1 auditToken:(id)arg2 dataTypes:(unsigned long long)arg3 policy:(long long)arg4 region:(id)arg5 displayName:(id)arg6 expirationDate:(id)arg7 callbackQueue:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x000000000137849a
- (id)initWithTileDB:(id)arg1;	// IMP=0x0000000001378402
- (id)init;	// IMP=0x00000000013783d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

