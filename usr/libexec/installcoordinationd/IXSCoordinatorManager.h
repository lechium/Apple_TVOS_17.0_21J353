//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IXSCoordinatorManager : NSObject
{
    NSObject<OS_dispatch_queue> *_mapQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_createQueue;	// 16 = 0x10
    NSMutableDictionary *_identityToCoordinatorMap;	// 24 = 0x18
    NSMutableDictionary *_uuidToCoordinatorMap;	// 32 = 0x20
    NSMutableDictionary *_connectionToProcessScopedCoordinatorMap;	// 40 = 0x28
    NSMutableArray *_identityPriority;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0020000000009c6c
+ (id)prioritySaveURL;	// IMP=0x0010000000009be2
+ (id)saveDir;	// IMP=0x0010000000009b55
+ (id)savePathForCoordinator:(id)arg1;	// IMP=0x0010000000009a5b
- (void).cxx_destruct;	// IMP=0x002000000000ec29
@property(readonly, nonatomic) NSMutableArray *identityPriority; // @synthesize identityPriority=_identityPriority;
@property(readonly, nonatomic) NSMutableDictionary *connectionToProcessScopedCoordinatorMap; // @synthesize connectionToProcessScopedCoordinatorMap=_connectionToProcessScopedCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *uuidToCoordinatorMap; // @synthesize uuidToCoordinatorMap=_uuidToCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *identityToCoordinatorMap; // @synthesize identityToCoordinatorMap=_identityToCoordinatorMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *createQueue; // @synthesize createQueue=_createQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
- (void)convertProcessScopedCoordinatorToGlobalScoped:(id)arg1;	// IMP=0x001000000000ea16
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000000e4e5
- (void)clearAllCoordinatorsForCreator:(unsigned long long)arg1;	// IMP=0x001000000000e137
- (void)_enumerateCoordinatorsForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000dc1d
- (void)enumerateCoordinatorsApplicableToConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000dc0b
- (void)enumerateCoordinators:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dbf4
- (_Bool)prioritizeCoordinator:(id)arg1;	// IMP=0x001000000000db9e
- (_Bool)prioritizeCoordinatorWithIdentity:(id)arg1;	// IMP=0x001000000000d8fa
- (void)unregisterCoordinator:(id)arg1;	// IMP=0x001000000000d6f5
- (void)performCreationBlockingOperation:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d640
- (id)coordinatorForIdentity:(id)arg1 connection:(id)arg2 error:(id *)arg3 creatingIfNotExisting:(CDUnknownBlockType)arg4;	// IMP=0x001000000000cb8d
- (id)_lookupCoordinatorForIdentity:(id)arg1 checkingScopeForConnection:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000c674
- (id)_lookupCoordinatorForIdentity:(id)arg1;	// IMP=0x001000000000c4c4
- (id)coordinatorsForBundleIdentifier:(id)arg1;	// IMP=0x001000000000c256
- (id)coordinatorForIdentity:(id)arg1;	// IMP=0x001000000000c244
- (id)coordinatorForUUID:(id)arg1;	// IMP=0x001000000000bff8
- (_Bool)_coordinator:(id)arg1 isApplicableToConnection:(id)arg2;	// IMP=0x001000000000bef3
- (void)_onMapQueue_saveIdentityPriority;	// IMP=0x001000000000bc9f
- (_Bool)_onMapQueue_removeCoordinatorFromMaps:(id)arg1;	// IMP=0x001000000000b994
- (id)init;	// IMP=0x0010000000009e0a
@property(readonly, nonatomic) unsigned long long coordinatorCount;

@end

