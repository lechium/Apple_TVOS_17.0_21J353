//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXCharacterSoundMap, AXMDisplayManager, AXSSPunctuationGroup, AXUISoftwareKeyboardManager, AXVoiceOverActivity, BRLTTable, MISSING_TYPE, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSNumber, NSString, VOSCommandManager, VOTElement, VOTEventFactory, VOTKeyboardManager, VOTOutputRequest, VOTVisionEngine;
@protocol OS_dispatch_queue, OS_os_transaction, VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTRotorManagementProtocol, VOTWorkspaceUnitTestDelegate;

@interface VOTWorkspace : NSObject
{
    VOTEventFactory *_eventFactory;	// 8 = 0x8
    id <VOTElementManagementProtocol> _elementManager;	// 16 = 0x10
    id <VOTRotorManagementProtocol> _rotorManager;	// 24 = 0x18
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 32 = 0x20
    VOTKeyboardManager *_keyboardManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_avAccessQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_keyPostingQueue;	// 56 = 0x38
    struct __CFRunLoop *_runLoop;	// 64 = 0x40
    struct {
        unsigned int count;
        double delay;
        double lastTime;
        _Bool connected;
        double lastRecordedTimeOfDeath;
    } _retryState;	// 72 = 0x48
    _Bool _soundMuted;	// 112 = 0x70
    _Bool _speechMuted;	// 113 = 0x71
    _Bool _voiceOverMuted;	// 114 = 0x72
    _Bool _screenCurtainEnabled;	// 115 = 0x73
    _Bool _isSystemBatteryLow;	// 116 = 0x74
    _Bool _hintsEnabled;	// 117 = 0x75
    _Bool _typingPitchChangeEnabled;	// 118 = 0x76
    _Bool _isPostingKeyboardEvents;	// 119 = 0x77
    _Bool _speakingRateInRotor;	// 120 = 0x78
    _Bool _outputDisabled;	// 121 = 0x79
    _Bool _screenOn;	// 122 = 0x7a
    _Bool _playKeyboardClicksOnHWInput;	// 123 = 0x7b
    _Bool _largeCursorEnabled;	// 124 = 0x7c
    int _typingMode;	// 128 = 0x80
    long long _tvInteractionMode;	// 136 = 0x88
    VOTOutputRequest *_completionRequest;	// 144 = 0x90
    long long _orientation;	// 152 = 0x98
    long long _realOrientation;	// 160 = 0xa0
    double _lastLockButtonPress;	// 168 = 0xa8
    double _lastHomeButtonPress;	// 176 = 0xb0
    double _lastKeyboardKeyPress;	// 184 = 0xb8
    double _lastDeviceInteractionEvent;	// 192 = 0xc0
    double _lastUnmuteEvent;	// 200 = 0xc8
    double _screenOnTime;	// 208 = 0xd0
    double _screenOffTime;	// 216 = 0xd8
    double _lastPowerCheck;	// 224 = 0xe0
    double _lastDeviceLock;	// 232 = 0xe8
    _Bool _deviceIsCharging;	// 240 = 0xf0
    NSArray *_enabledLanguageRotorItems;	// 248 = 0xf8
    NSString *_selectedLanguage;	// 256 = 0x100
    NSString *_audioAccessoryInstalledAssetLanguage;	// 264 = 0x108
    NSString *_systemSpokenLanguage;	// 272 = 0x110
    NSArray *_enabledBrailleLanguageRotorItems;	// 280 = 0x118
    BRLTTable *_selectedBrailleTable;	// 288 = 0x120
    long long _cachedRotorType;	// 296 = 0x128
    NSMutableDictionary *_appCache;	// 304 = 0x130
    NSMutableDictionary *_appCacheWithExactPID;	// 312 = 0x138
    struct os_unfair_lock_s _appCacheLock;	// 320 = 0x140
    NSString *_postKeyThreadKey;	// 328 = 0x148
    struct {
        _Bool isRunLoopEnabled;
        _Bool speakAutocorrectionsEnabled;
        _Bool ringerSwitchSilent;
        _Bool audioIsRoutedToSpeaker;
        _Bool speechLogging;
        _Bool isInternalInstall;
    } _vtwFlags;	// 336 = 0x150
    NSLock *_systemLangaugeLock;	// 344 = 0x158
    _Bool _originalKBAttachedState;	// 352 = 0x160
    _Bool _originalKBAttachedStateIsValid;	// 353 = 0x161
    long long _triggeredKBAttachState;	// 360 = 0x168
    long long _forcedOrientation;	// 368 = 0x170
    long long _applicationOrientation;	// 376 = 0x178
    NSMutableArray *_punctuationGroups;	// 384 = 0x180
    AXSSPunctuationGroup *_defaultPunctuationGroup;	// 392 = 0x188
    _Bool useRingerSwitchForNotificationOutput;	// 400 = 0x190
    _Bool _voiceOverIsIdle;	// 401 = 0x191
    _Bool _screenCurtainSuspended;	// 402 = 0x192
    _Bool _wasEnabledThroughAccessory;	// 403 = 0x193
    _Bool _supportsHomeGestures;	// 404 = 0x194
    _Bool _accessoryShutdownInProgress;	// 405 = 0x195
    _Bool _inUnitTestMode;	// 406 = 0x196
    _Bool _inPerformanceTestMode;	// 407 = 0x197
    _Bool _isSiriTalking;	// 408 = 0x198
    _Bool _isSiriListening;	// 409 = 0x199
    _Bool _duckingTemporarilyDisabled;	// 410 = 0x19a
    _Bool _pauseSpeechAndHaptics;	// 411 = 0x19b
    _Bool _brailleFormattingEnabled;	// 412 = 0x19c
    _Bool _imageCaptionsEnabled;	// 413 = 0x19d
    _Bool _textDetectionEnabled;	// 414 = 0x19e
    _Bool _buttonIconDetectionEnabled;	// 415 = 0x19f
    _Bool _soundEffectsEnabled;	// 416 = 0x1a0
    _Bool _captionPanelEnabled;	// 417 = 0x1a1
    _Bool _updateRotorWithElement;	// 418 = 0x1a2
    _Bool _reachabilityActive;	// 419 = 0x1a3
    _Bool _audioDestinationRequestExternal;	// 420 = 0x1a4
    _Bool _systemVolumeControlsAvailablity;	// 421 = 0x1a5
    _Bool _brailleAlertsEnabled;	// 422 = 0x1a6
    _Bool _useDigitalCrownNavigation;	// 423 = 0x1a7
    _Bool _telephonyIsActive;	// 424 = 0x1a8
    _Bool _overridePropertiesForTesting;	// 425 = 0x1a9
    _Bool _userRecentlyUnlockedDeviceForUnitTesting;	// 426 = 0x1aa
    _Bool _userUnlockedDeviceForUnitTesting;	// 427 = 0x1ab
    _Bool _isRingerSwitchSilentForUnitTesting;	// 428 = 0x1ac
    _Bool _disableVoiceOverSettingOnStop;	// 429 = 0x1ad
    int _currentCallStateForUnitTests;	// 432 = 0x1b0
    long long _navigateImagesOption;	// 440 = 0x1b8
    NSString *additionalLanguageRotorItem;	// 448 = 0x1c0
    CDUnknownBlockType testingEventListener;	// 456 = 0x1c8
    AXVoiceOverActivity *_selectedActivity;	// 464 = 0x1d0
    MISSING_TYPE *notificationsWhenLockedOutput;	// 472 = 0x1d8
    long long bannerNotificationsOutput;	// 480 = 0x1e0
    double _lastSpeechMuteToggleTime;	// 488 = 0x1e8
    double _lastSoundMuteToggleTime;	// 496 = 0x1f0
    unsigned long long _customContentImportance;	// 504 = 0x1f8
    NSArray *_imageCaptioningDisabledApps;	// 512 = 0x200
    long long _containerOutputFeedback;	// 520 = 0x208
    long long _moreContentOutputFeedback;	// 528 = 0x210
    long long _numberFeedback;	// 536 = 0x218
    long long _emojiFeedback;	// 544 = 0x220
    long long _navigationDirection;	// 552 = 0x228
    double _lastTelephonyCallActive;	// 560 = 0x230
    NSMutableDictionary *_websiteLanguageMappingOverrides;	// 568 = 0x238
    CDUnknownBlockType _punctuationGroupsUpdatedHandler;	// 576 = 0x240
    double _reachabilityOffset;	// 584 = 0x248
    NSArray *_activities;	// 592 = 0x250
    long long _suppressValueChangeNotificationCount;	// 600 = 0x258
    long long _suppressSelectionChangeNotificationCount;	// 608 = 0x260
    long long _suppressSelectionChangeNotificationSpeechOutputCount;	// 616 = 0x268
    long long _systemVisualizationState;	// 624 = 0x270
    AXUISoftwareKeyboardManager *_softwareKeyboardManager;	// 632 = 0x278
    VOTVisionEngine *_visionEngine;	// 640 = 0x280
    AXMDisplayManager *_displayManager;	// 648 = 0x288
    VOSCommandManager *_userCommandManager;	// 656 = 0x290
    NSObject<VOTWorkspaceUnitTestDelegate> *_unitTestDelegate;	// 664 = 0x298
    NSNumber *_unitTestSpeechRate;	// 672 = 0x2a0
    NSString *_unitTestSystemSpokenLanguage;	// 680 = 0x2a8
    NSString *_reachabilityIdentifier;	// 688 = 0x2b0
    AXCharacterSoundMap *_characterSoundMap;	// 696 = 0x2b8
    NSObject<OS_dispatch_queue> *_managedConfigurationQueue;	// 704 = 0x2c0
    NSObject<OS_os_transaction> *_votTransaction;	// 712 = 0x2c8
}

+ (id)sharedWorkspace;	// IMP=0x002000000004afd0
- (void).cxx_destruct;	// IMP=0x0010000000058642
@property(retain, nonatomic) NSObject<OS_os_transaction> *votTransaction; // @synthesize votTransaction=_votTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managedConfigurationQueue; // @synthesize managedConfigurationQueue=_managedConfigurationQueue;
@property(retain, nonatomic) AXCharacterSoundMap *characterSoundMap; // @synthesize characterSoundMap=_characterSoundMap;
@property(nonatomic) _Bool disableVoiceOverSettingOnStop; // @synthesize disableVoiceOverSettingOnStop=_disableVoiceOverSettingOnStop;
@property(retain, nonatomic) NSString *reachabilityIdentifier; // @synthesize reachabilityIdentifier=_reachabilityIdentifier;
@property(retain, nonatomic) NSString *unitTestSystemSpokenLanguage; // @synthesize unitTestSystemSpokenLanguage=_unitTestSystemSpokenLanguage;
@property(retain, nonatomic) NSNumber *unitTestSpeechRate; // @synthesize unitTestSpeechRate=_unitTestSpeechRate;
@property(nonatomic) int currentCallStateForUnitTests; // @synthesize currentCallStateForUnitTests=_currentCallStateForUnitTests;
@property(nonatomic) _Bool isRingerSwitchSilentForUnitTesting; // @synthesize isRingerSwitchSilentForUnitTesting=_isRingerSwitchSilentForUnitTesting;
@property(nonatomic) _Bool userUnlockedDeviceForUnitTesting; // @synthesize userUnlockedDeviceForUnitTesting=_userUnlockedDeviceForUnitTesting;
@property(nonatomic) _Bool userRecentlyUnlockedDeviceForUnitTesting; // @synthesize userRecentlyUnlockedDeviceForUnitTesting=_userRecentlyUnlockedDeviceForUnitTesting;
@property(nonatomic) _Bool overridePropertiesForTesting; // @synthesize overridePropertiesForTesting=_overridePropertiesForTesting;
@property(nonatomic) __weak NSObject<VOTWorkspaceUnitTestDelegate> *unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;
@property(nonatomic) _Bool telephonyIsActive; // @synthesize telephonyIsActive=_telephonyIsActive;
@property(readonly, nonatomic) _Bool useDigitalCrownNavigation; // @synthesize useDigitalCrownNavigation=_useDigitalCrownNavigation;
@property(retain, nonatomic) VOSCommandManager *userCommandManager; // @synthesize userCommandManager=_userCommandManager;
@property(retain, nonatomic) AXMDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
// Error: Property attributes should begin with the type ('T') attribute, property name: visionEngine
// Property attributes: (null)

@property(nonatomic) _Bool brailleAlertsEnabled; // @synthesize brailleAlertsEnabled=_brailleAlertsEnabled;
@property(readonly, nonatomic) AXUISoftwareKeyboardManager *softwareKeyboardManager; // @synthesize softwareKeyboardManager=_softwareKeyboardManager;
@property(nonatomic) _Bool systemVolumeControlsAvailablity; // @synthesize systemVolumeControlsAvailablity=_systemVolumeControlsAvailablity;
@property(nonatomic) long long systemVisualizationState; // @synthesize systemVisualizationState=_systemVisualizationState;
@property(nonatomic) long long suppressSelectionChangeNotificationSpeechOutputCount; // @synthesize suppressSelectionChangeNotificationSpeechOutputCount=_suppressSelectionChangeNotificationSpeechOutputCount;
@property(nonatomic) long long suppressSelectionChangeNotificationCount; // @synthesize suppressSelectionChangeNotificationCount=_suppressSelectionChangeNotificationCount;
@property(nonatomic) long long suppressValueChangeNotificationCount; // @synthesize suppressValueChangeNotificationCount=_suppressValueChangeNotificationCount;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) _Bool audioDestinationRequestExternal; // @synthesize audioDestinationRequestExternal=_audioDestinationRequestExternal;
@property(nonatomic) double reachabilityOffset; // @synthesize reachabilityOffset=_reachabilityOffset;
@property(nonatomic) _Bool reachabilityActive; // @synthesize reachabilityActive=_reachabilityActive;
@property(copy, nonatomic) CDUnknownBlockType punctuationGroupsUpdatedHandler; // @synthesize punctuationGroupsUpdatedHandler=_punctuationGroupsUpdatedHandler;
@property(retain, nonatomic) NSMutableDictionary *websiteLanguageMappingOverrides; // @synthesize websiteLanguageMappingOverrides=_websiteLanguageMappingOverrides;
@property(nonatomic) _Bool largeCursorEnabled; // @synthesize largeCursorEnabled=_largeCursorEnabled;
@property(nonatomic) _Bool updateRotorWithElement; // @synthesize updateRotorWithElement=_updateRotorWithElement;
@property(nonatomic) double lastTelephonyCallActive; // @synthesize lastTelephonyCallActive=_lastTelephonyCallActive;
@property(nonatomic) _Bool captionPanelEnabled; // @synthesize captionPanelEnabled=_captionPanelEnabled;
@property(nonatomic) long long navigationDirection; // @synthesize navigationDirection=_navigationDirection;
@property(nonatomic) long long emojiFeedback; // @synthesize emojiFeedback=_emojiFeedback;
@property(nonatomic) long long numberFeedback; // @synthesize numberFeedback=_numberFeedback;
@property(nonatomic) _Bool soundEffectsEnabled; // @synthesize soundEffectsEnabled=_soundEffectsEnabled;
@property(nonatomic) _Bool buttonIconDetectionEnabled; // @synthesize buttonIconDetectionEnabled=_buttonIconDetectionEnabled;
@property(nonatomic) _Bool textDetectionEnabled; // @synthesize textDetectionEnabled=_textDetectionEnabled;
@property(nonatomic) _Bool imageCaptionsEnabled; // @synthesize imageCaptionsEnabled=_imageCaptionsEnabled;
@property(nonatomic) long long moreContentOutputFeedback; // @synthesize moreContentOutputFeedback=_moreContentOutputFeedback;
@property(nonatomic) _Bool brailleFormattingEnabled; // @synthesize brailleFormattingEnabled=_brailleFormattingEnabled;
@property(nonatomic) long long containerOutputFeedback; // @synthesize containerOutputFeedback=_containerOutputFeedback;
@property(retain, nonatomic) NSArray *imageCaptioningDisabledApps; // @synthesize imageCaptioningDisabledApps=_imageCaptioningDisabledApps;
@property(nonatomic) unsigned long long customContentImportance; // @synthesize customContentImportance=_customContentImportance;
@property(nonatomic) _Bool pauseSpeechAndHaptics; // @synthesize pauseSpeechAndHaptics=_pauseSpeechAndHaptics;
@property(nonatomic) _Bool duckingTemporarilyDisabled; // @synthesize duckingTemporarilyDisabled=_duckingTemporarilyDisabled;
@property(nonatomic) _Bool isSiriListening; // @synthesize isSiriListening=_isSiriListening;
@property(nonatomic) _Bool isSiriTalking; // @synthesize isSiriTalking=_isSiriTalking;
@property(nonatomic) _Bool inPerformanceTestMode; // @synthesize inPerformanceTestMode=_inPerformanceTestMode;
@property(nonatomic) _Bool inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;
@property(nonatomic) _Bool accessoryShutdownInProgress; // @synthesize accessoryShutdownInProgress=_accessoryShutdownInProgress;
@property(nonatomic) _Bool supportsHomeGestures; // @synthesize supportsHomeGestures=_supportsHomeGestures;
@property(nonatomic) _Bool wasEnabledThroughAccessory; // @synthesize wasEnabledThroughAccessory=_wasEnabledThroughAccessory;
@property(nonatomic) _Bool screenCurtainSuspended; // @synthesize screenCurtainSuspended=_screenCurtainSuspended;
@property(nonatomic) _Bool voiceOverIsIdle; // @synthesize voiceOverIsIdle=_voiceOverIsIdle;
@property(nonatomic) double lastSoundMuteToggleTime; // @synthesize lastSoundMuteToggleTime=_lastSoundMuteToggleTime;
@property(nonatomic) double lastSpeechMuteToggleTime; // @synthesize lastSpeechMuteToggleTime=_lastSpeechMuteToggleTime;
@property(nonatomic) _Bool useRingerSwitchForNotificationOutput; // @synthesize useRingerSwitchForNotificationOutput;
@property(nonatomic) long long bannerNotificationsOutput; // @synthesize bannerNotificationsOutput;
@property(nonatomic) long long notificationsWhenLockedOutput; // @synthesize notificationsWhenLockedOutput;
@property(nonatomic) double screenOnTime; // @synthesize screenOnTime=_screenOnTime;
@property(copy, nonatomic) CDUnknownBlockType testingEventListener; // @synthesize testingEventListener;
@property(nonatomic) _Bool playKeyboardClicksOnHWInput; // @synthesize playKeyboardClicksOnHWInput=_playKeyboardClicksOnHWInput;
@property(nonatomic) _Bool outputDisabled; // @synthesize outputDisabled=_outputDisabled;
@property(nonatomic) _Bool speakingRateInRotor; // @synthesize speakingRateInRotor=_speakingRateInRotor;
@property(nonatomic) long long rotorType; // @synthesize rotorType=_cachedRotorType;
@property(nonatomic) _Bool isSystemBatteryLow; // @synthesize isSystemBatteryLow=_isSystemBatteryLow;
@property(nonatomic) _Bool screenCurtainEnabled; // @synthesize screenCurtainEnabled=_screenCurtainEnabled;
@property(nonatomic) double lastKeyboardKeyPress; // @synthesize lastKeyboardKeyPress=_lastKeyboardKeyPress;
@property(nonatomic) double lastLockButtonPress; // @synthesize lastLockButtonPress=_lastLockButtonPress;
@property(nonatomic) double lastHomeButtonPress; // @synthesize lastHomeButtonPress=_lastHomeButtonPress;
@property(retain, nonatomic) NSString *additionalLanguageRotorItem; // @synthesize additionalLanguageRotorItem;
@property(nonatomic) _Bool typingPitchChangeEnabled; // @synthesize typingPitchChangeEnabled=_typingPitchChangeEnabled;
@property(nonatomic) long long navigateImagesOption; // @synthesize navigateImagesOption=_navigateImagesOption;
@property(nonatomic) _Bool voiceOverMuted; // @synthesize voiceOverMuted=_voiceOverMuted;
@property(nonatomic) _Bool soundMuted; // @synthesize soundMuted=_soundMuted;
@property(readonly, nonatomic) NSString *systemSpokenLanguage; // @dynamic systemSpokenLanguage;
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x0010000000057dd4
- (void)handleUSBMFiBrailleDisplayConnected;	// IMP=0x0010000000057cdd
- (void)handleBluetoothBrailleDisplayConnected;	// IMP=0x0010000000057c0a
- (void)_setUSBRMPreferenceDisabled;	// IMP=0x0010000000057bab
- (_Bool)_userHasDisabledUSBRM;	// IMP=0x0010000000057b52
@property(readonly, nonatomic) _Bool navigationStyleHonorsGroups;
@property(retain, nonatomic) NSObject<VOTRotorManagementProtocol> *rotorManager; // @dynamic rotorManager;
@property(retain, nonatomic) NSObject<VOTElementManagementProtocol> *elementManager; // @dynamic elementManager;
- (id)applicationForPID:(int)arg1;	// IMP=0x0010000000057807
- (id)applicationForElement:(id)arg1;	// IMP=0x0010000000057411
- (id)applicationForCurrentElement;	// IMP=0x00100000000573a7
- (_Bool)isBaseSystemSpokenEqualToLocalization;	// IMP=0x0010000000057271
@property(retain, nonatomic) BRLTTable *selectedBrailleTable;
- (void)_selectedBrailleTableChanged;	// IMP=0x001000000005700f
- (void)updateSelectedLanguage;	// IMP=0x0010000000056e10
@property(retain) NSString *selectedLanguage; // @synthesize selectedLanguage=_selectedLanguage;
- (void)unitTestSetBrailleRotorItems:(id)arg1;	// IMP=0x00100000000568a3
@property(readonly, nonatomic) NSArray *brailleLanguageRotorItems;
@property(readonly, nonatomic) NSArray *languageRotorItems; // @dynamic languageRotorItems;
- (double)lastLockButtonPressTime;	// IMP=0x0010000000056618
- (_Bool)isRingerSwitchSilent;	// IMP=0x00100000000565ad
- (_Bool)userRecentlyUnlockedDevice;	// IMP=0x001000000005653a
- (_Bool)userUnlockedDevice;	// IMP=0x00100000000564e4
- (_Bool)isAudioRoutedToSpeaker;	// IMP=0x00100000000564d8
@property(nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
- (void)_localeChanged:(id)arg1;	// IMP=0x0010000000056494
- (void)_activeAudioRouteChanged:(id)arg1;	// IMP=0x00100000000563bc
- (int)currentCallState;	// IMP=0x001000000005639d
- (int)_callCenterQueue_currentCallState;	// IMP=0x0010000000056395
@property(readonly, nonatomic) double speechRateFromSettings;
- (_Bool)screenOn;	// IMP=0x00100000000562f4
- (void)setScreenOn:(_Bool)arg1 silently:(_Bool)arg2;	// IMP=0x0010000000056299
- (void)screenLockOccurred;	// IMP=0x001000000005626c
- (void)unmuteEligibleEventOccured;	// IMP=0x0010000000056207
- (void)userInteractedWithDevice;	// IMP=0x00100000000561a2
@property(nonatomic) _Bool speechMuted; // @synthesize speechMuted=_speechMuted;
@property(nonatomic) _Bool speechLogging; // @dynamic speechLogging;
- (void)refreshBraille:(_Bool)arg1 rotorSelection:(id)arg2;	// IMP=0x0010000000056070
- (void)_postNextLanguageEvent;	// IMP=0x0010000000056013
- (void)performNextLanguageButtonPress;	// IMP=0x0010000000055fb2
- (void)performEjectButtonPress;	// IMP=0x0010000000055eb9
- (void)performVolumeDownButtonPress;	// IMP=0x0010000000055db3
- (void)performVolumeUpButtonPress;	// IMP=0x0010000000055cad
- (void)performHomeButtonPress;	// IMP=0x0010000000055ba8
- (void)resetSystemBatteryLowState;	// IMP=0x0010000000055b28
- (void)rotateDeviceOrientation:(_Bool)arg1;	// IMP=0x0010000000055a47
- (void)_resetOrientationAndAnnounce:(_Bool)arg1 updateApplication:(_Bool)arg2;	// IMP=0x0010000000055982
- (void)resetOrientation;	// IMP=0x0010000000055966
- (long long)applicationOrientation;	// IMP=0x0010000000055959
- (long long)deviceOrientation;	// IMP=0x001000000005594c
- (void)_setDeviceOrientation:(long long)arg1 shouldAnnounce:(_Bool)arg2 updateApplication:(_Bool)arg3;	// IMP=0x0010000000055483
- (_Bool)announceOrientationChanges;	// IMP=0x001000000005547b
- (_Bool)speakAutocorrectionsEnabled;	// IMP=0x001000000005546f
- (void)_speakCorrectionsChanged;	// IMP=0x0010000000055419
- (void)_preferencesCaptionPanelChanged;	// IMP=0x00100000000553b9
- (void)_languageChangedInBuddy;	// IMP=0x0010000000055275
- (void)_languageChanged;	// IMP=0x0010000000055131
- (unsigned long long)fingerCount;	// IMP=0x001000000005511b
- (struct CGPoint)fingerPosition;	// IMP=0x0010000000055105
- (void)handleReturnToSpringBoard;	// IMP=0x00100000000550c2
- (void)cancelTapAndHoldMode;	// IMP=0x001000000005509c
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x0010000000055086
@property(readonly, nonatomic) _Bool directTouchElementsPresent;
- (void)handleUnsetForcedOrientationAndAnnounce:(_Bool)arg1;	// IMP=0x0010000000055042
- (void)handleSetForcedOrientation:(long long)arg1 shouldAnnounce:(_Bool)arg2;	// IMP=0x0010000000054ff0
- (void)handleOrientationChanged;	// IMP=0x0010000000054fcd
- (void)handleRingerSwitchSwitched:(id)arg1;	// IMP=0x0010000000054fc7
- (void)handleProximityEvent:(id)arg1;	// IMP=0x0010000000054f67
- (void)handleLockButtonPress:(id)arg1;	// IMP=0x0010000000054eee
- (void)handlePlayPauseKeyPress:(id)arg1;	// IMP=0x0010000000054ed8
- (void)_wst_handleMediaKeyPress:(id)arg1;	// IMP=0x0010000000054ec6
- (void)handleMediaKeyPress:(id)arg1;	// IMP=0x0010000000054ec0
- (void)_handleSystemMuteKey:(id)arg1;	// IMP=0x0010000000054ae4
- (void)temporarilyChangeQuickNavState:(_Bool)arg1;	// IMP=0x0010000000054a3b
- (void)_temporarilyChangeQuickNav:(id)arg1;	// IMP=0x0010000000054a06
- (id)keyboardPressInfo;	// IMP=0x00100000000549f0
- (void)handleTurnOffSoundAndCurtainEvent:(id)arg1;	// IMP=0x00100000000549da
- (void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(long long)arg2;	// IMP=0x00100000000549c4
- (void)handleAppleTVRemoteEvent:(id)arg1 eventOrigin:(long long)arg2 isRTL:(_Bool)arg3;	// IMP=0x0010000000054773
- (void)_wst_handleMenuButtonPress:(id)arg1;	// IMP=0x0010000000054761
- (void)handleMenuButtonPress:(id)arg1;	// IMP=0x00100000000546e6
- (void)_wst_handleVolumeButtonPress:(id)arg1;	// IMP=0x00100000000546d4
- (void)handleVolumeButtonPress:(id)arg1;	// IMP=0x001000000005448c
- (void)_selfDestruct;	// IMP=0x0010000000054302
@property(readonly, nonatomic) _Bool isInternalInstall; // @dynamic isInternalInstall;
- (void)stop:(int)arg1;	// IMP=0x0010000000053f9b
- (void)outputRequestFinished:(id)arg1;	// IMP=0x0010000000053f2e
- (void)_stopRunLoop;	// IMP=0x0010000000053f12
- (void)punctuationGroupsChanged:(id)arg1;	// IMP=0x001000000005373e
- (id)defaultPunctuationGroup;	// IMP=0x001000000005361b
@property(readonly, nonatomic) NSArray *punctuationGroups;
- (id)punctuationGroupForUUID:(id)arg1;	// IMP=0x00100000000533b6
- (void)systemSpokenLanguageChanged:(id)arg1;	// IMP=0x00100000000532df
@property(retain, nonatomic) AXVoiceOverActivity *selectedActivity; // @synthesize selectedActivity=_selectedActivity;
- (id)phoneticStringForCharacter:(id)arg1 andVoiceIdentifier:(id)arg2;	// IMP=0x0010000000053155
- (void)_preferencesScreenCurtainChanged:(id)arg1;	// IMP=0x0010000000053141
- (void)_preferencesTypingModeChanged:(id)arg1;	// IMP=0x0010000000053126
- (void)preferencesBrailleLanguageRotorItemsChanged:(id)arg1;	// IMP=0x0010000000052ea1
- (void)preferencesLanguageRotorItemsChanged:(id)arg1;	// IMP=0x0010000000052be8
- (void)preferencesKeyboardClickStatusChange:(id)arg1;	// IMP=0x0010000000052bd4
- (void)_preferencesSpeakNotifications;	// IMP=0x0010000000052aed
- (void)_preferencesSpeakingRateInRotorChanged;	// IMP=0x0010000000052a8d
- (void)_preferencesSpeechRateChange;	// IMP=0x0010000000052a49
- (void)_preferencesNavigateImagesOptionChange;	// IMP=0x00100000000529e9
- (void)_preferencesSpeakHintsChange;	// IMP=0x0010000000052984
- (void)_preferencesTypingPitchChange;	// IMP=0x0010000000052924
- (void)setUseDigitalCrownNavigationEnabled:(_Bool)arg1;	// IMP=0x00100000000528cd
- (void)_preferenceUseDigitalCrownNavigationChanged;	// IMP=0x0010000000052877
- (void)_preferenceUseSiriVoiceChanged;	// IMP=0x0010000000052871
- (void)_preferencesAlwaysUseNemethForMathChange;	// IMP=0x001000000005282d
@property(readonly, nonatomic) _Bool brailleInputActive;
@property(readonly, nonatomic) NSArray *focusedApplications;
@property(readonly, nonatomic) VOTElement *currentElement;
- (void)postKeyboardEventWithCharacters:(id)arg1 originalCharacters:(id)arg2 modifiers:(unsigned int)arg3 keyCode:(unsigned short)arg4;	// IMP=0x00100000000525ad
- (void)postKeyboardEvent:(_Bool)arg1 modifiers:(unsigned int)arg2 keyCode:(unsigned short)arg3;	// IMP=0x0010000000052499
- (void)_postKeyboardEvent:(id)arg1 modifiers:(id)arg2 keyCode:(id)arg3;	// IMP=0x00100000000522fc
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 characters:(id)arg2 originalCharacters:(id)arg3 modifierState:(unsigned int)arg4 eventType:(unsigned int)arg5;	// IMP=0x00100000000521c2
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 characters:(id)arg2 originalCharacters:(id)arg3 modifierState:(unsigned int)arg4 isKeyDown:(_Bool)arg5;	// IMP=0x001000000005219d
- (void)_postKeyboardEventWithKeyCode:(unsigned short)arg1 modifierState:(unsigned int)arg2 isKeyDown:(_Bool)arg3;	// IMP=0x0010000000052171
- (void)_postKeyboardEventsForModifiers:(unsigned int)arg1 isKeyDown:(_Bool)arg2;	// IMP=0x001000000005209a
- (void)_postKeyboardEventWithCharacters:(id)arg1 originalCharacters:(id)arg2 modifiers:(id)arg3 keyCode:(id)arg4;	// IMP=0x0010000000051f14
- (void)dispatchCommand:(id)arg1;	// IMP=0x0010000000051efe
@property(nonatomic) int typingMode;
- (void)_voiceOverTouchEnabledChange:(struct __CFString *)arg1;	// IMP=0x00100000000517f6
- (void)_voiceOverUsageConfirmed;	// IMP=0x00100000000517af
- (void)_checkVoiceOverWasConfirmed;	// IMP=0x001000000005173c
- (void)_showVOTNoHomeButtonGestureAlert;	// IMP=0x00100000000516ee
- (void)_showConfirmPanel;	// IMP=0x00100000000516a5
- (_Bool)voiceOverIsConfirmed;	// IMP=0x001000000005167c
- (void)loadUIKit;	// IMP=0x001000000005160d
- (void)run;	// IMP=0x0010000000051366
- (void)_sendGreetingMessage;	// IMP=0x001000000005109a
- (id)_systemBootTime;	// IMP=0x0010000000050ff3
- (void)_registerWithSystem;	// IMP=0x0010000000050eed
- (void)_updateScreenCurtainEnabled:(_Bool)arg1;	// IMP=0x0010000000050d1b
- (void)_registerWithSpringBoard;	// IMP=0x001000000005096c
- (_Bool)isVoiceOverTouchPreferenceEnabled;	// IMP=0x001000000005095c
- (_Bool)isAccessibilityEnabled;	// IMP=0x001000000005094c
- (void)handleSystemWideServerDied;	// IMP=0x00100000000506b0
- (_Bool)isSystemWideServerAlive;	// IMP=0x00100000000506a7
- (void)_registerForExternalDevices;	// IMP=0x00100000000506a1
- (void)_preferencesActivitiesChanged;	// IMP=0x001000000005036b
- (void)_updateActivityListeners;	// IMP=0x0010000000050365
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x0000000000050308
- (void)_preferencesSelectedLanguageChanged;	// IMP=0x0010000000050253
- (void)_preferencesSelectedActivityChanged;	// IMP=0x0010000000050191
- (void)dealloc;	// IMP=0x00100000000500cd
- (void)_registerForPreferenceChanges;	// IMP=0x001000000004f027
- (void)_handleReachabilityChanges;	// IMP=0x001000000004f021
- (void)willSwitchUser;	// IMP=0x001000000004f01b
- (void)_registerForUserSwitches;	// IMP=0x001000000004f015
- (void)_migratePreferencesIfNeeded;	// IMP=0x001000000004efb9
- (void)_updateMainScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x001000000004efaf
- (void)_initialize;	// IMP=0x001000000004d8a5
- (void)_replaceHighMemoryVoiceIDWithDefaultVoiceIDForLanguage:(id)arg1 preferredFallbackLanguage:(id)arg2;	// IMP=0x001000000004d4db
- (void)_attemptRecoveryFromCrashloopDueToVoiceMemoryPressure;	// IMP=0x001000000004d337
@property(readonly) _Bool usesDisplayManager;
- (_Bool)softwareKeyboardManagerShouldSetHardwareKeyboardAttached:(id)arg1 hardwareKeyboardIsCurrentlyAttached:(_Bool)arg2 newHardwareKeyboardAttachedValue:(_Bool *)arg3;	// IMP=0x001000000004d312
- (void)softwareKeyboardManagerDidChangeHardwareKeyboardAttached:(id)arg1;	// IMP=0x001000000004d305
- (void)softwareKeyboardManager:(id)arg1 didSetHardwareKeyboardAttached:(_Bool)arg2;	// IMP=0x001000000004d2fc
- (void)softwareKeyboardManagerWillUpdateKeyboardState:(id)arg1;	// IMP=0x001000000004d021
@property long long tvInteractionMode;
- (void)setTvInteractionModeWithoutSaving:(long long)arg1;	// IMP=0x001000000004cfad
@property(nonatomic) _Bool allowSingleLetterSearching; // @dynamic allowSingleLetterSearching;
- (id)_assetUpdaterClient;	// IMP=0x001000000004ce9e
- (void)_archerNotifyUserOfNavigationChanges;	// IMP=0x001000000004cd8f
- (void)_hunterMigrateDigitalCrownNavigation;	// IMP=0x001000000004cd89
- (void)_hunterMigrateDefaultRotors;	// IMP=0x001000000004cd83
- (void)_yukonMigrateLanguageRotors;	// IMP=0x001000000004caab
- (void)_tigrisMigrateLanguageRotors;	// IMP=0x001000000004c60b
- (void)_screenChange:(id)arg1;	// IMP=0x001000000004c56c
- (double)activeBrailleAutoAdvanceDuration;	// IMP=0x001000000004c3a9
- (_Bool)activeBrailleGeneralStatusCellPreference;	// IMP=0x001000000004c1ec
- (_Bool)activeBrailleAlertsPreference;	// IMP=0x001000000004c044
- (_Bool)activeBrailleTextStatusCellPreference;	// IMP=0x001000000004be75
- (long long)activeBrailleOutputPreference;	// IMP=0x001000000004bcb8
- (long long)activeBrailleInputPreference;	// IMP=0x001000000004bafb
@property(nonatomic) _Bool hintsEnabled;
- (void)_applyVoiceOverMigrations;	// IMP=0x001000000004b717
@property(readonly, nonatomic) VOTEventFactory *eventFactory;
- (void)_callStatusChanged:(id)arg1;	// IMP=0x001000000004b5b8
- (id)init;	// IMP=0x001000000004afe1
- (void)notePostedEventForUnitTesting:(id)arg1;	// IMP=0x00100000000588dc
- (id)lastPostedEventForUnitTesting;	// IMP=0x00100000000588cb
- (id)currentElementRotorString;	// IMP=0x0010000000058926
- (id)lastScreenChangeTime;	// IMP=0x00100000000588f0
- (void)_testFetchWebElementRects;	// IMP=0x001000000005897a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

