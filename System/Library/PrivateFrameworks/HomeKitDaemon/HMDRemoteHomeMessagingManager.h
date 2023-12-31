//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteHomeMessagingManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_homeUUIDToHandlerMap;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000a5e1c1
- (void).cxx_destruct;	// IMP=0x0000000000a5e1b1
@property(readonly, nonatomic) NSMapTable *homeUUIDToHandlerMap; // @synthesize homeUUIDToHandlerMap=_homeUUIDToHandlerMap;
- (_Bool)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a5de27
- (void)registerHandler:(id)arg1;	// IMP=0x0000000000a5dc78
- (id)init;	// IMP=0x0000000000a5dc0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

