//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourUI/IAMContextProvider-Protocol.h>

@class UIViewController;

@protocol IAMApplicationContextProvider <IAMContextProvider>

@optional
@property(nonatomic) double lastMessageDisplayTime;
@property(readonly) _Bool allowsModalMessageDisplay;
- (UIViewController *)viewControllerForModalPresentation;
@end

