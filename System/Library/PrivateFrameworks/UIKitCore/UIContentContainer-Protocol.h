//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UITraitCollection;
@protocol UIContentContainer, UIViewControllerTransitionCoordinator;

@protocol UIContentContainer <NSObject>
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (struct CGSize)sizeForChildContentContainer:(id <UIContentContainer>)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
@end

