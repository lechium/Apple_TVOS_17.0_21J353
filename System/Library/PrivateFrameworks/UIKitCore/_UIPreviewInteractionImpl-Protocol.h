//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIPreviewInteraction, UIView;
@protocol UICoordinateSpace, UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@protocol _UIPreviewInteractionImpl <NSObject>
@property(nonatomic) __weak UIPreviewInteraction *previewInteraction;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property(readonly, nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <UIPreviewInteractionDelegate> delegate;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (id)initWithView:(UIView *)arg1 previewInteraction:(UIPreviewInteraction *)arg2;
@end
