//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RMActivationEngine, RMStatusEngine;

@interface RMStoreClient : NSObject
{
    NSString *_storeIdentifier;	// 8 = 0x8
    RMActivationEngine *_activationEngine;	// 16 = 0x10
    RMStatusEngine *_statusEngine;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000085fc9
@property(retain, nonatomic) RMStatusEngine *statusEngine; // @synthesize statusEngine=_statusEngine;
@property(retain, nonatomic) RMActivationEngine *activationEngine; // @synthesize activationEngine=_activationEngine;
@property(readonly, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void)_sendStatusData:(id)arg1;	// IMP=0x0010000000085ee4
- (void)_sendStatusOnlyIfNeeded:(_Bool)arg1;	// IMP=0x0010000000085d7f
- (void)statusEngineHasUnacknowledgedSubscription:(id)arg1;	// IMP=0x0010000000085d18
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000085bdb
- (void)remove;	// IMP=0x0010000000085b9c
- (void)create;	// IMP=0x0010000000085a38
- (void)start;	// IMP=0x0010000000085904
- (id)initWithActivationEngine:(id)arg1 statusEngine:(id)arg2 storeIdentifier:(id)arg3;	// IMP=0x001000000008584c
- (id)initWithManagementSourceObjectID:(id)arg1 storeIdentifier:(id)arg2 statusQuerier:(id)arg3 persistentContainer:(id)arg4;	// IMP=0x0010000000085625

@end

