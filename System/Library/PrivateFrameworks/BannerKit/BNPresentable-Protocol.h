//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/BNPresentableIdentifying-Protocol.h>
#import <BannerKit/BNPresentableObserving-Protocol.h>

@class NSString, UIViewController;
@protocol BNPanGestureProxy, BNPresentableContext;

@protocol BNPresentable <BNPresentableIdentifying, BNPresentableObserving>

@optional
@property(readonly, nonatomic) long long presentableType;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableBehavior;
- (void)draggingDidBeginWithGestureProxy:(id <BNPanGestureProxy>)arg1;
- (NSString *)presentableDescription;
@end

