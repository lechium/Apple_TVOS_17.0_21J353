//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@interface UINavigationController (PXDiagnosticsEnvironment)
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00900000003b6d4e
- (id)px_navigationDestination;	// IMP=0x00900000007c8387
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00900000007c814c
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00900000007c803a
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x00900000007c7f93
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x00900000007c7ef6
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000007c7e56
- (_Bool)px_allowsTabSwitching;	// IMP=0x00900000007c7de3
- (id)px_childViewControllersForModalInPresentation;	// IMP=0x0090000000880907
- (void)px_pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0090000000880860
- (id)px_popToViewControllerPrecedingViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0090000000880786
- (_Bool)px_preparePopToViewController:(id)arg1 forced:(_Bool)arg2;	// IMP=0x009000000088052e
- (void)_ppt_setTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00900000008804c7
- (CDUnknownBlockType)_ppt_transitionAnimationCompletionHandler;	// IMP=0x0090000000880489
- (void)ppt_notifyTransitionAnimationDidComplete;	// IMP=0x009000000088043c
- (void)ppt_installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0090000000880348
@end

