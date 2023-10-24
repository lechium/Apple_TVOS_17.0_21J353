//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatar, NSString, SCNMaterial, SCNNode, SCNScene;
@protocol SCNSceneRenderer;

__attribute__((visibility("hidden")))
@interface AVTAvatarEnvironment : NSObject
{
    SCNScene *_scene;	// 8 = 0x8
    id <SCNSceneRenderer> _renderer;	// 16 = 0x10
    AVTAvatar *_avatar;	// 24 = 0x18
    SCNMaterial *_shadowPlaneMaterial;	// 32 = 0x20
    SCNNode *_whitePlane;	// 40 = 0x28
    SCNNode *_environmentNode;	// 48 = 0x30
    SCNNode *_defaultPointOfView;	// 56 = 0x38
    NSString *_framingMode;	// 64 = 0x40
    SCNNode *_animojiCamera;	// 72 = 0x48
    SCNNode *_memojiCameraGroup;	// 80 = 0x50
    SCNNode *_customCamera;	// 88 = 0x58
    SCNNode *_specializedLightingNode;	// 96 = 0x60
    SCNNode *_defaultLightingNode;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003bc21
@property(readonly, nonatomic) _Bool faceIsFullyVisible;
@property(nonatomic) float fadeFactor;
- (void)didSnapshot;	// IMP=0x000000000003bb7c
- (void)willSnapshot;	// IMP=0x000000000003bb63
- (void)setEnablePhysicsSimulation:(_Bool)arg1;	// IMP=0x000000000003ba11
- (void)updateWithPresentationConfiguration:(id)arg1;	// IMP=0x000000000003b7ee
- (void)updatePointOfViewFromFramingMode;	// IMP=0x000000000003b738
- (id)pointOfViewForFramingMode:(id)arg1;	// IMP=0x000000000003b67e
- (void)setFramingModeForcingPointOfViewUpdate:(id)arg1;	// IMP=0x000000000003b63f
@property(copy, nonatomic) NSString *framingMode;
- (void)updateSpecializedLighting;	// IMP=0x000000000003b4c7
- (void)updateCustomCameras;	// IMP=0x000000000003b422
- (void)avatarDidChange:(id)arg1 presentationConfiguration:(id)arg2;	// IMP=0x000000000003b365
@property(readonly, nonatomic) SCNNode *currentPointOfView;
@property(readonly, nonatomic) SCNNode *defaultPointOfView;
@property(readonly, nonatomic) SCNNode *environmentNode;
- (id)initAndInstallInScene:(id)arg1 renderer:(id)arg2;	// IMP=0x000000000003af9b
- (id)defaultEnvironmentNode;	// IMP=0x000000000003ad26

@end

