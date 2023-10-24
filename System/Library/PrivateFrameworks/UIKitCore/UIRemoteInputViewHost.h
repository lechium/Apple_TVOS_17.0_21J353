//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSString, UIInputViewController, UIInputViewSet, UIRemoteInputViewInfo, UIView, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIRemoteInputViewHost : NSObject
{
    UIViewController *_inputRootViewController;	// 8 = 0x8
    UIInputViewController *_inputViewController;	// 16 = 0x10
    UIView *_inputView;	// 24 = 0x18
    NSLayoutConstraint *_inputViewWidthConstraint;	// 32 = 0x20
    NSLayoutConstraint *_inputViewHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_inputViewBottomConstraint;	// 48 = 0x30
    UIViewController *_assistantViewController;	// 56 = 0x38
    struct CGSize _previousInputViewSize;	// 64 = 0x40
    _Bool _shouldShowDockView;	// 80 = 0x50
    UIWindow *_inputViewWindow;	// 88 = 0x58
    UIWindow *_assistantViewWindow;	// 96 = 0x60
    UIInputViewSet *_inputViewSet;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000015bdae
@property(nonatomic) _Bool shouldShowDockView; // @synthesize shouldShowDockView=_shouldShowDockView;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
@property(readonly, nonatomic) UIWindow *assistantViewWindow; // @synthesize assistantViewWindow=_assistantViewWindow;
@property(readonly, nonatomic) UIWindow *inputViewWindow; // @synthesize inputViewWindow=_inputViewWindow;
- (id)settingsScene;	// IMP=0x000000000015bcb6
- (id)remoteAssistantItemForResponder:(id)arg1;	// IMP=0x000000000015b800
- (id)rtiGroupsForBarButtonItemGroups:(id)arg1;	// IMP=0x000000000015b7f8
@property(readonly, nonatomic) UIRemoteInputViewInfo *inputViewInfo;
- (void)updateInputViewsIfNecessary;	// IMP=0x000000000015b444
- (_Bool)updateCustomInputViewIfNecessary;	// IMP=0x000000000015a843
- (_Bool)updateAssistantViewIfNecessary;	// IMP=0x0000000000159d92
- (struct UIEdgeInsets)assistantViewInsets;	// IMP=0x0000000000159c46
@property(readonly, nonatomic) UIRemoteInputViewInfo *assistantViewInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

