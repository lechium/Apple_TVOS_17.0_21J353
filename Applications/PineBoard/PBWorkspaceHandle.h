//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayConfiguration, NSString, PBWorkspace;

@interface PBWorkspaceHandle : NSObject
{
    PBWorkspace *_workspace;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007e16a
- (struct UIEdgeInsets)safeAreaInsetsForApplication:(id)arg1;	// IMP=0x001000000007e0ec
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsets;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)unregisterScene:(id)arg1;	// IMP=0x001000000007e021
- (void)registerScene:(id)arg1;	// IMP=0x001000000007e00a
- (id)configurationForIdentity:(id)arg1;	// IMP=0x001000000007dfd6
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
- (id)newApplicationSceneDeactivationAssertionWithReason:(long long)arg1;	// IMP=0x001000000007df58
- (void)executeTransitionRequest:(id)arg1;	// IMP=0x001000000007df41
- (id)initWithWorkspace:(id)arg1;	// IMP=0x001000000007ded6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

