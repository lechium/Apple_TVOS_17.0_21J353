//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, NSString, TVSStateMachine, UITapGestureRecognizer;
@protocol PBTextEntryViewControllerDelegate;

@interface PBTextEntryViewController : UIViewController
{
    id <PBTextEntryViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_defaultTitle;	// 16 = 0x10
    NSString *_defaultMessage;	// 24 = 0x18
    long long _defaultButtonIndex;	// 32 = 0x20
    NSArray *_enteredValues;	// 40 = 0x28
    UIViewController *_childViewController;	// 48 = 0x30
    UITapGestureRecognizer *_menuRecognizer;	// 56 = 0x38
    TVSStateMachine *_stateMachine;	// 64 = 0x40
    long long _currentTextField;	// 72 = 0x48
    NSMutableArray *_textFieldValues;	// 80 = 0x50
    NSMutableArray *_buttonTitles;	// 88 = 0x58
    NSMutableArray *_userValues;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000166e34
@property(retain, nonatomic) NSMutableArray *userValues; // @synthesize userValues=_userValues;
@property(retain, nonatomic) NSMutableArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) NSMutableArray *textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(nonatomic) long long currentTextField; // @synthesize currentTextField=_currentTextField;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) NSArray *enteredValues; // @synthesize enteredValues=_enteredValues;
@property(nonatomic) long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) __weak id <PBTextEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_messageStringAttributes;	// IMP=0x0010000000166af5
- (id)_titleStringAttributes;	// IMP=0x0010000000166979
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x001000000016689a
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x00100000001667da
- (void)buttonView:(id)arg1 didSelectButton:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00100000001666f5
- (void)_synchronizeEnteredValues;	// IMP=0x0010000000166691
- (id)textField;	// IMP=0x0010000000166607
- (void)_showChildViewController:(id)arg1;	// IMP=0x001000000016644d
- (id)_buttonsForTextField:(long long)arg1 defaultButtonIndex:(long long *)arg2;	// IMP=0x00100000001661f5
- (void)_showTextEntryViewControllerForTextField:(long long)arg1;	// IMP=0x0010000000165d27
- (void)_configureStateMachine;	// IMP=0x0010000000165827
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000016579d
- (void)viewDidLoad;	// IMP=0x001000000016575c
- (void)loadView;	// IMP=0x0010000000165694
- (unsigned long long)addButtonWithTitle:(id)arg1;	// IMP=0x0010000000165626
- (void)setAlternateTitle:(id)arg1 message:(id)arg2 forTextFieldAtIndex:(unsigned long long)arg3;	// IMP=0x001000000016556a
- (unsigned long long)addTextFieldWithInitialText:(id)arg1 placeholder:(id)arg2 keyboardType:(long long)arg3;	// IMP=0x0010000000165438
- (id)init;	// IMP=0x0010000000165421
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000165324

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

