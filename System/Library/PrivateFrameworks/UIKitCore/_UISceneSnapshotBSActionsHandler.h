//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneBSActionHandler-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSnapshotBSActionsHandler : NSObject <_UISceneBSActionHandler>
{
}

- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x000000000149a970
@property(readonly, nonatomic) _Bool wantsAsyncSnapshot;
@property(readonly, nonatomic) _Bool wantsOwnAssertion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

