//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneBSActionHandler-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneFocusMovementBSActionsHandler : NSObject <_UISceneBSActionHandler>
{
    NSMutableDictionary *_pendingFocusMovementActions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009d7458
- (void)_focusSystemSceneComponentDidPerformInitialSetupNotification:(id)arg1;	// IMP=0x00000000009d71ea
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;	// IMP=0x00000000009d6e66
- (id)init;	// IMP=0x00000000009d6da6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

