//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCListenerEndpoint, TKHostTokenDriverCache, TKSlotWatcher, TKSmartCardSlot;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface TKSlotWatch : NSObject
{
    TKSmartCardSlot *_smartCardSlot;	// 8 = 0x8
    long long _previousSlotState;	// 16 = 0x10
    NSString *_slotType;	// 24 = 0x18
    TKSlotWatcher *_slotWatcher;	// 32 = 0x20
    NSXPCListenerEndpoint *_endpoint;	// 40 = 0x28
    TKHostTokenDriverCache *_driverCache;	// 48 = 0x30
    NSMutableDictionary *_tokenConnections;	// 56 = 0x38
    NSObject<OS_os_transaction> *_transaction;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
}

+ (_Bool)smartCard:(id)arg1 mightHandleAIDFromExtension:(id)arg2 foundAID:(id *)arg3;	// IMP=0x004000000000a588
+ (id)supportedAIDsOfExtension:(id)arg1;	// IMP=0x001000000000a380
+ (void)parseAIDForAttribute:(id)arg1 into:(id)arg2;	// IMP=0x001000000000a1ce
- (void).cxx_destruct;	// IMP=0x002000000000b5d2
// Error: Property attributes should begin with the type ('T') attribute, property name: name
// Property attributes: (null)

- (void)tokenRemoved;	// IMP=0x001000000000b365
- (void)tokenArrived;	// IMP=0x001000000000aa70
- (void)getTokenIDs:(id)arg1;	// IMP=0x0010000000009fe1
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000009e8d
- (void)remove;	// IMP=0x0010000000009e0e
- (id)initWithName:(id)arg1 endpoint:(id)arg2 slotType:(id)arg3 watcher:(id)arg4;	// IMP=0x0010000000009aef

@end

