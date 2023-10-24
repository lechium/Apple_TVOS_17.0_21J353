//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol ASDOctaneClientProtocol;

@interface OctaneClientConnection : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    id <ASDOctaneClientProtocol> _remoteObject;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    NSMutableSet *_eventObservations;	// 32 = 0x20
    long long _type;	// 40 = 0x28
}

+ (id)_connectionForUUID:(id)arg1;	// IMP=0x002000000006f4ea
+ (void)_enumerateAllConnectionsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006f095
+ (void)receiveEventOfType:(long long)arg1 withData:(id)arg2 onAllObserversWithID:(id)arg3;	// IMP=0x001000000006eddd
+ (unsigned long long)observerCountForEventIdentifier:(id)arg1;	// IMP=0x001000000006ecbf
+ (void)removeConnectionWithUUID:(id)arg1;	// IMP=0x001000000006e986
+ (id)connectionsForBundleID:(id)arg1;	// IMP=0x001000000006e7bd
+ (id)addConnectionWithBundleID:(id)arg1 connection:(id)arg2 type:(long long)arg3;	// IMP=0x001000000006e638
+ (void)initialize;	// IMP=0x001000000006e5ea
- (void).cxx_destruct;	// IMP=0x002000000006fcc0
- (void)receiveEventOfType:(long long)arg1 eventData:(id)arg2 identifier:(id)arg3;	// IMP=0x001000000006fca1
- (void)transactionUpdated:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006fc82
- (void)transactionDeleted:(unsigned long long)arg1 forBundleID:(id)arg2;	// IMP=0x001000000006fc63
- (void)unregisterObservationID:(id)arg1;	// IMP=0x001000000006fbe7
- (void)registerObservationID:(id)arg1;	// IMP=0x001000000006fb6b
- (void)dealloc;	// IMP=0x001000000006faa6
- (id)initWithBundleID:(id)arg1 connection:(id)arg2 type:(long long)arg3;	// IMP=0x001000000006f89a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

