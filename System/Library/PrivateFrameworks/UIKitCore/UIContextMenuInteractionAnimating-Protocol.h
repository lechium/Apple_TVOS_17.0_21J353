//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIViewController;

@protocol UIContextMenuInteractionAnimating <NSObject>
@property(readonly, nonatomic) UIViewController *previewViewController;
- (void)addCompletion:(void (^)(void))arg1;
- (void)addAnimations:(void (^)(void))arg1;
@end

