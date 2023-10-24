//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIWindow, _UIContainerWindowPortalView;
@protocol UIInteractionEffect;

__attribute__((visibility("hidden")))
@interface _UIContainerWindowPortalInteraction : NSObject
{
    _Bool _portalViewEnabled;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    _Bool _attemptsToUseAncestorViewContainer;	// 10 = 0xa
    UIView *_view;	// 16 = 0x10
    _UIContainerWindowPortalView *_portalView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000e5b9e0
@property(retain, nonatomic) _UIContainerWindowPortalView *portalView; // @synthesize portalView=_portalView;
@property(nonatomic) _Bool attemptsToUseAncestorViewContainer; // @synthesize attemptsToUseAncestorViewContainer=_attemptsToUseAncestorViewContainer;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, setter=_setPortalViewEnabled:) _Bool _portalViewEnabled; // @synthesize _portalViewEnabled;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)_viewVisibilityDidChange;	// IMP=0x0000000000e5b91e
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000000e5b83a
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000000e5b7d6
- (void)ensureVisibilityInContainerWindow;	// IMP=0x0000000000e5b48a
- (id)_visibleViewContainer;	// IMP=0x0000000000e5b3c9
- (_Bool)_viewIsVisibleInContainer:(id)arg1;	// IMP=0x0000000000e5b2a7
@property(readonly, nonatomic) UIWindow *containerWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect;
@property(readonly) Class superclass;

@end

