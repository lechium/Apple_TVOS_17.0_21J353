//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayIdentity, FBScene, FBSceneManager, NSDictionary, NSString, PBSystemAppearanceManager, PBWorkspaceHostingWindow, UIWindowScene;
@protocol PBDisplayConfigurationProviding, PBLocalSynchronousWindowSceneProviding, PBWorkspaceGeometry;

@interface PBWorkspaceSceneFactory : NSObject
{
    FBScene *_rootScene;	// 8 = 0x8
    UIWindowScene *_rootWindowScene;	// 16 = 0x10
    PBWorkspaceHostingWindow *_rootSceneHostingWindow;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    _Bool _invalidated;	// 33 = 0x21
    PBSystemAppearanceManager *_systemAppearanceManager;	// 40 = 0x28
    id <PBDisplayConfigurationProviding> _displayConfigurationProvider;	// 48 = 0x30
    FBSDisplayIdentity *_displayIdentity;	// 56 = 0x38
    FBSceneManager *_sceneManager;	// 64 = 0x40
    id <PBLocalSynchronousWindowSceneProviding> _windowSceneProvider;	// 72 = 0x48
    id <PBWorkspaceGeometry> _workspaceGeometry;	// 80 = 0x50
    NSDictionary *_descriptors;	// 88 = 0x58
    NSDictionary *_scenes;	// 96 = 0x60
    NSDictionary *_windowScenes;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000001eac31
@property(nonatomic) __weak PBSystemAppearanceManager *systemAppearanceManager; // @synthesize systemAppearanceManager=_systemAppearanceManager;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)_createSceneUsingDescriptor:(id)arg1 geometry:(id)arg2;	// IMP=0x00100000001ea847
- (id)_createRootScene;	// IMP=0x00100000001ea707
- (id)_displayConfiguration;	// IMP=0x00100000001ea6d9
- (id)stateDumpBuilder;	// IMP=0x00100000001ea5e3
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001ea13c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001ea0eb
- (id)succinctDescriptionBuilder;	// IMP=0x00100000001ea06a
- (id)succinctDescription;	// IMP=0x00100000001ea019
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x00100000001e9dee
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e9d21
- (id)windowSceneForKey:(id)arg1;	// IMP=0x00100000001e9b46
- (id)sceneForKey:(id)arg1;	// IMP=0x00100000001e996b
- (_Bool)activate;	// IMP=0x00100000001e960e
@property(readonly, nonatomic) PBWorkspaceHostingWindow *rootSceneHostingWindow;
@property(readonly, nonatomic) UIWindowScene *rootWindowScene;
@property(readonly, nonatomic) FBScene *rootScene;
- (void)dealloc;	// IMP=0x00100000001e922d
- (id)initWithDisplayConfigurationProvider:(id)arg1 displayIdentity:(id)arg2 sceneManager:(id)arg3 windowSceneProvider:(id)arg4 workspaceGeometry:(id)arg5 descriptors:(id)arg6;	// IMP=0x00100000001e8bd9

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

