//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXStoryMutableController-Protocol.h>

@class NSString, PXStoryAnimation;

@protocol PXStoryMutableAnimationController <PXStoryMutableController>
- (void)checkInAnimation:(PXStoryAnimation *)arg1;
- (PXStoryAnimation *)checkOutAnimationWithIdentifier:(NSString *)arg1 creationBlock:(PXStoryAnimation * (^)(void))arg2;
- (void)addAnimation:(PXStoryAnimation *)arg1;
@end

