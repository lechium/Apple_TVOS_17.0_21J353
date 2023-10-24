//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PGPictureInPictureProxy;

__attribute__((visibility("hidden")))
@interface _PGPictureInPictureConnectionExportedObject : NSObject
{
    PGPictureInPictureProxy *_pictureInPictureProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004127a
- (oneway void)handleCommand:(id)arg1;	// IMP=0x0000000000041220
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x00000000000411ea
- (oneway void)setStashedOrUnderLock:(_Bool)arg1;	// IMP=0x00000000000411b6
- (oneway void)actionButtonTapped;	// IMP=0x0000000000041185
- (oneway void)hostedWindowSizeChangeEnded;	// IMP=0x0000000000041154
- (oneway void)hostedWindowSizeChangeBegan;	// IMP=0x0000000000041123
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;	// IMP=0x00000000000410a3
- (oneway void)pictureInPictureInvalidated;	// IMP=0x0000000000041072
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;	// IMP=0x000000000004103e
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040fe1
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f87
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f2d
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040ed0
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040e73
- (void)dealloc;	// IMP=0x0000000000040dfd
- (id)initWithPictureInPictureProxy:(id)arg1;	// IMP=0x0000000000040d54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
