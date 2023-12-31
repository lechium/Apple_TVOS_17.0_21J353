//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

@class IKAppMenuBarDocument, IKViewElement, NSArray, NSString, UIColor, UITabBarItem, UIView, _TVPlayer;

__attribute__((visibility("hidden")))
@interface _TVMenuBarController : UITabBarController
{
    IKViewElement *_menuBarTemplate;	// 8 = 0x8
    IKAppMenuBarDocument *_menuBarDocument;	// 16 = 0x10
    NSArray *_menuItemElements;	// 24 = 0x18
    unsigned long long _previousSelectedIndex;	// 32 = 0x20
    IKViewElement *_nowPlayingMenuItemElement;	// 40 = 0x28
    long long _nowPlayingMenuItemInsertionIndex;	// 48 = 0x30
    _TVPlayer *_nowPlayingPlayer;	// 56 = 0x38
    UIView *_leadingAccessory;	// 64 = 0x40
    UIView *_trailingAccessory;	// 72 = 0x48
    UIColor *_selectionTintColor;	// 80 = 0x50
    UITabBarItem *_searchTabBarItem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000006662c
@property(retain, nonatomic) UITabBarItem *searchTabBarItem; // @synthesize searchTabBarItem=_searchTabBarItem;
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(retain, nonatomic) UIView *trailingAccessory; // @synthesize trailingAccessory=_trailingAccessory;
@property(retain, nonatomic) UIView *leadingAccessory; // @synthesize leadingAccessory=_leadingAccessory;
@property(retain, nonatomic) _TVPlayer *nowPlayingPlayer; // @synthesize nowPlayingPlayer=_nowPlayingPlayer;
@property(nonatomic) long long nowPlayingMenuItemInsertionIndex; // @synthesize nowPlayingMenuItemInsertionIndex=_nowPlayingMenuItemInsertionIndex;
@property(retain, nonatomic) IKViewElement *nowPlayingMenuItemElement; // @synthesize nowPlayingMenuItemElement=_nowPlayingMenuItemElement;
@property(nonatomic) unsigned long long previousSelectedIndex; // @synthesize previousSelectedIndex=_previousSelectedIndex;
@property(copy, nonatomic) NSArray *menuItemElements; // @synthesize menuItemElements=_menuItemElements;
@property(retain, nonatomic) IKAppMenuBarDocument *menuBarDocument; // @synthesize menuBarDocument=_menuBarDocument;
@property(retain, nonatomic) IKViewElement *menuBarTemplate; // @synthesize menuBarTemplate=_menuBarTemplate;
- (id)activeDocument;	// IMP=0x00000000000663ff
- (void)_updateNowPlayingPlayer:(id)arg1;	// IMP=0x0000000000065d7f
- (void)_playerDidChangeState:(id)arg1;	// IMP=0x0000000000065c9e
- (void)_playbackViewControllerWillPresent:(id)arg1;	// IMP=0x0000000000065c23
- (_Bool)_shouldShowNowPlayingMenuItem;	// IMP=0x0000000000065bf0
- (void)_configureTabBarItem:(id)arg1 forMenuItemElement:(id)arg2;	// IMP=0x00000000000653d5
- (void)_configureTabBarSelectionStyleFromElement:(id)arg1;	// IMP=0x000000000006524a
- (void)_configureViewController:(id)arg1 forMenuItemElement:(id)arg2;	// IMP=0x0000000000064ca2
- (id)_fontForTextElement:(id)arg1;	// IMP=0x0000000000064af9
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000063553
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x00000000000632c2
- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000006321e
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;	// IMP=0x0000000000062f23
- (void)viewDidLoad;	// IMP=0x0000000000062eb7
- (void)dealloc;	// IMP=0x0000000000062e36
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000062ce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

