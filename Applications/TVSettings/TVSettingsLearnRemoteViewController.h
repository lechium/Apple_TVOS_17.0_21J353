//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSDictionary, NSSet, NSString, NSUUID, PBSExternalControlIRLearningConfiguration, PBSExternalControlIRLearningManager, UIButton, UILabel, UIProgressView, UIStackView, UITapGestureRecognizer;

@interface TVSettingsLearnRemoteViewController : UIViewController
{
    struct {
        unsigned int startLearningAttemptCount:4;
        unsigned int shouldCompleteOnViewDidAppear:1;
        unsigned int didFailFromError:1;
        unsigned int didFailFromInactivity:1;
        unsigned int shouldLearnNextActionOnButtonRelease:1;
    } _flags;	// 8 = 0x8
    int _currentActionBeingLearned;	// 12 = 0xc
    PBSExternalControlIRLearningConfiguration *_configuration;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_instructionLabel;	// 40 = 0x28
    UILabel *_bottomTextLabel;	// 48 = 0x30
    UILabel *_activityLabel;	// 56 = 0x38
    UIProgressView *_progressView;	// 64 = 0x40
    NSDictionary *_actionViewMap;	// 72 = 0x48
    UIStackView *_buttonStackView;	// 80 = 0x50
    UIStackView *_learningStackView;	// 88 = 0x58
    UIStackView *_learningHeaderStackView;	// 96 = 0x60
    UIStackView *_learningProgressStackView;	// 104 = 0x68
    UIButton *_focusButton;	// 112 = 0x70
    UITapGestureRecognizer *_leftTapGestureRecognizer;	// 120 = 0x78
    UITapGestureRecognizer *_rightTapGestureRecognizer;	// 128 = 0x80
    PBSExternalControlIRLearningManager *_learningManager;	// 136 = 0x88
    NSSet *_learnedActions;	// 144 = 0x90
    NSUUID *_learnedDeviceUUID;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00200000000ab84b
@property(retain, nonatomic) NSUUID *learnedDeviceUUID; // @synthesize learnedDeviceUUID=_learnedDeviceUUID;
@property(copy, nonatomic) NSSet *learnedActions; // @synthesize learnedActions=_learnedActions;
@property(nonatomic) int currentActionBeingLearned; // @synthesize currentActionBeingLearned=_currentActionBeingLearned;
@property(retain, nonatomic) PBSExternalControlIRLearningManager *learningManager; // @synthesize learningManager=_learningManager;
@property(retain, nonatomic) UITapGestureRecognizer *rightTapGestureRecognizer; // @synthesize rightTapGestureRecognizer=_rightTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftTapGestureRecognizer; // @synthesize leftTapGestureRecognizer=_leftTapGestureRecognizer;
@property(retain, nonatomic) UIButton *focusButton; // @synthesize focusButton=_focusButton;
@property(retain, nonatomic) UIStackView *learningProgressStackView; // @synthesize learningProgressStackView=_learningProgressStackView;
@property(retain, nonatomic) UIStackView *learningHeaderStackView; // @synthesize learningHeaderStackView=_learningHeaderStackView;
@property(retain, nonatomic) UIStackView *learningStackView; // @synthesize learningStackView=_learningStackView;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) NSDictionary *actionViewMap; // @synthesize actionViewMap=_actionViewMap;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) PBSExternalControlIRLearningConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_setAppearanceFor:(id)arg1 selected:(_Bool)arg2;	// IMP=0x00100000000ab369
- (id)_buildActionImageViews;	// IMP=0x00100000000aa835
- (void)_configureButtonStackForAction:(int)arg1;	// IMP=0x00100000000aa61f
- (void)_learnNextAction:(id)arg1;	// IMP=0x00100000000aa57d
- (void)_learnPreviousAction:(id)arg1;	// IMP=0x00100000000aa4db
- (void)_updateProgressViewWithProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000aa446
- (void)_hideProgressView;	// IMP=0x00100000000aa3bb
- (void)irLearningManager:(id)arg1 didFinishLearningAction:(int)arg2;	// IMP=0x00100000000a9ecb
- (void)irLearningManager:(id)arg1 didCompleteLearningAction:(int)arg2 withResult:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000a99ae
- (void)irLearningManager:(id)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3;	// IMP=0x00100000000a98a3
- (void)irLearningManager:(id)arg1 willStartLearningAction:(int)arg2;	// IMP=0x00100000000a95ad
- (void);	// IMP=0x00100000000a95a7
- (void)irLearningManager:(id)arg1 didSaveLearnedActions:(id)arg2 forDeviceWithUUID:(id)arg3;	// IMP=0x00100000000a9307
- (void)irLearningManager:(id)arg1 didFailToStartLearningWithError:(id)arg2;	// IMP=0x00100000000a9100
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000a8f67
- (id)preferredFocusEnvironments;	// IMP=0x00100000000a8eee
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000a8d8b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000a8baa
- (void)viewDidLoad;	// IMP=0x00100000000a7813
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000a7753

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

