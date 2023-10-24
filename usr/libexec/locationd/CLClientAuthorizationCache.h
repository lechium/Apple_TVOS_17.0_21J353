//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLLocation, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface CLClientAuthorizationCache : CLIntersiloService
{
    _Bool _isInitialCache;	// 8 = 0x8
    NSDictionary *_clientKeyToAuthContextMap;	// 16 = 0x10
    NSMutableDictionary *_clientKeyToClientInfoMap;	// 24 = 0x18
    CLLocation *_currentLocation;	// 32 = 0x20
    NSMutableArray *_cachePopulationReplyBlocks;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0020000000d7f4d6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d7f4bd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000d7f460
@property(retain, nonatomic) NSMutableArray *cachePopulationReplyBlocks; // @synthesize cachePopulationReplyBlocks=_cachePopulationReplyBlocks;
@property(nonatomic) _Bool isInitialCache; // @synthesize isInitialCache=_isInitialCache;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSMutableDictionary *clientKeyToClientInfoMap; // @synthesize clientKeyToClientInfoMap=_clientKeyToClientInfoMap;
@property(retain, nonatomic) NSDictionary *clientKeyToAuthContextMap; // @synthesize clientKeyToAuthContextMap=_clientKeyToAuthContextMap;
- (void)updateCurrentLocation:(id)arg1;	// IMP=0x0010000000d80cb9
- (void)notifyWhenCacheIsPopulatedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d80c2f
- (void)setPersistentStoreDictionary:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000d80808
- (void)setClientsAuthorizationMap:(id)arg1;	// IMP=0x0010000000d805f0
- (id)syncgetAuthorizationContextForClient:(id)arg1 at:(id)arg2;	// IMP=0x0010000000d7fc37
- (void)getAuthorizationContextOfNonZonalClient:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d7fa07
- (id)syncgetAuthorizationContextIfClientIsNonZonal:(id)arg1;	// IMP=0x0010000000d7f83f
- (int)syncgetAuthorizationOfClient:(id)arg1 forServiceMask:(unsigned long long)arg2;	// IMP=0x0010000000d7f600
- (void)endService;	// IMP=0x0010000000d7f596
- (void)beginService;	// IMP=0x0010000000d7f56f
- (id)init;	// IMP=0x0010000000d7f532

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

