//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BLSHSceneEnvironmentObserving;

__attribute__((visibility("hidden")))
@interface BLSHSceneEnvironmentObserver : NSObject
{
    id <BLSHSceneEnvironmentObserving> _observer;	// 8 = 0x8
}

+ (id)observerWithObserver:(id)arg1;	// IMP=0x001000000000782b
- (void).cxx_destruct;	// IMP=0x0000000000007aab
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x00000000000079ce
@property(readonly, copy) NSString *description;
- (id)initWithObserver:(id)arg1;	// IMP=0x0000000000007874

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

