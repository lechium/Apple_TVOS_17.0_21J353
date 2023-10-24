//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;

@protocol _UICollectionViewOrthogonalScrollView <NSObject>
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
@property(readonly, nonatomic, getter=isTracking) _Bool tracking;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) struct CGPoint contentOffset;
- (struct CGPoint)_panGestureLocationInView:(UIView *)arg1;
- (struct CGPoint)_panGestureVelocityInView:(UIView *)arg1;
@end

