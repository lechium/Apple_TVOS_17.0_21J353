//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VKARWalkingCameraController;

__attribute__((visibility("hidden")))
@interface VKARWalkingDebugGestureCameraBehavior
{
    VKARWalkingCameraController *_controller;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000008c35dc
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000008c34c4
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000008c34be
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;	// IMP=0x00000000008c3334
- (id)initWithCameraController:(id)arg1;	// IMP=0x00000000008c32ae

@end

