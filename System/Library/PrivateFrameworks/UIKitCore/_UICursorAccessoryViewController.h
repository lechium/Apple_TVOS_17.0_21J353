//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSDictionary, NSString, UIColor, UITextRange, _UICursorAccessoryHostView;
@protocol _UICursorAccessoryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UICursorAccessoryViewController : UIViewController
{
    _Bool _visible;	// 8 = 0x8
    id <_UICursorAccessoryViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_selectionRects;	// 24 = 0x18
    UITextRange *_selectedRange;	// 32 = 0x20
    NSArray *_accessories;	// 40 = 0x28
    _UICursorAccessoryHostView *_hostView;	// 48 = 0x30
    NSDictionary *_accessoriesByIdentifier;	// 56 = 0x38
    struct CGRect _cursorRect;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000857249
@property(retain, nonatomic) NSDictionary *accessoriesByIdentifier; // @synthesize accessoriesByIdentifier=_accessoriesByIdentifier;
@property(retain, nonatomic) _UICursorAccessoryHostView *hostView; // @synthesize hostView=_hostView;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSArray *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) UITextRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(nonatomic) struct CGRect cursorRect; // @synthesize cursorRect=_cursorRect;
@property(nonatomic) __weak id <_UICursorAccessoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapToActivateAccessoryWithIdentifier:(id)arg1;	// IMP=0x00000000008570e5
- (void)configureItemView:(id)arg1 forAccessoryIdentifier:(id)arg2;	// IMP=0x0000000000856f65
- (CDStruct_c88e181d)_contentForAccessory:(id)arg1;	// IMP=0x00000000008568c9
- (void)setVisible:(_Bool)arg1 animationStyle:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008563ce
- (void)setVisible:(_Bool)arg1 animationStyle:(long long)arg2;	// IMP=0x00000000008563b9
@property(retain, nonatomic) UIColor *accessoryTintColor;
- (void)setAccessories:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000855e7a
- (void)_updateSelectionRectAnimated:(_Bool)arg1;	// IMP=0x0000000000855a91
- (void)_setSelectionRect:(struct CGRect)arg1 preferredPlacement:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000008558e3
- (void)viewDidLoad;	// IMP=0x00000000008558b6
- (void)loadView;	// IMP=0x0000000000855854
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000085584c
- (id)init;	// IMP=0x00000000008557f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
