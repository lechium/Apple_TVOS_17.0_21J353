//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVObservationController : NSObject
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    NSMutableDictionary *_proxyObserversByTokens;	// 16 = 0x10
    NSMutableDictionary *_notificationObservers;	// 24 = 0x18
    NSMutableDictionary *_notificationCenters;	// 32 = 0x20
    id _owner;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000011cffd
- (void)_stopAllObservation;	// IMP=0x000000000011ccd3
- (void)stopAllObservation;	// IMP=0x000000000011cca1
- (void)stopObserving:(id)arg1;	// IMP=0x000000000011cc01
- (void)startObservingNotificationForName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000011c988
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(_Bool)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000011c963
- (id)startObserving:(id)arg1 keyPath:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011c879
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011c72c
- (id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(_Bool)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000011c635
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(_Bool)arg3 includeChanges:(_Bool)arg4 observationHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000011c298
- (void)dealloc;	// IMP=0x000000000011c163
- (id)initWithOwner:(id)arg1;	// IMP=0x000000000011c072

@end

