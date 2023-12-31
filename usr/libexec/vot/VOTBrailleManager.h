//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXIndexMap, BRLTTable, MISSING_TYPE, NSAttributedString, NSCondition, NSData, NSDictionary, NSMutableCharacterSet, NSString, SCRCTargetSelectorTimer, SCRCThreadKey, SCROBrailleClient, VOTElement;

@interface VOTBrailleManager : NSObject
{
    VOTElement *_brailleElement;	// 8 = 0x8
    struct _NSRange _brailleDescriptionRange;	// 16 = 0x10
    struct _NSRange _brailleLineRange;	// 32 = 0x20
    long long _brailleLineOffset;	// 48 = 0x30
    SCRCTargetSelectorTimer *_hintTimer;	// 56 = 0x38
    unsigned long long _brailleElementIndex;	// 64 = 0x40
    _Bool _usesBrailleSubstitutions;	// 72 = 0x48
    NSDictionary *_brailleSubstitutions;	// 80 = 0x50
    NSMutableCharacterSet *_delimiters;	// 88 = 0x58
    BRLTTable *_currentDefaultTable;	// 96 = 0x60
    BRLTTable *_currentSetTable;	// 104 = 0x68
    MISSING_TYPE *_status;	// 112 = 0x70
    _Bool _hasActiveDisplay;	// 120 = 0x78
    _Bool _testingHasActiveDisplay;	// 121 = 0x79
    _Bool _testingKeyboardHelpOn;	// 122 = 0x7a
    AXIndexMap *_commands;	// 128 = 0x80
    id _rotorSelection;	// 136 = 0x88
    _Bool _shouldPreferPositionOverRotorSelection;	// 144 = 0x90
    int _primaryDisplayToken;	// 148 = 0x94
    _Bool _primaryDisplayIsBluetooth;	// 152 = 0x98
    SCROBrailleClient *_brailleClient;	// 160 = 0xa0
    NSCondition *_brailleClientConnectionCondition;	// 168 = 0xa8
    int _lastBraillePanDirection;	// 176 = 0xb0
    SCRCThreadKey *_threadKey;	// 184 = 0xb8
    unsigned int _toggledModifiers;	// 192 = 0xc0
    NSData *_testingAggregatedStatus;	// 200 = 0xc8
    SCRCTargetSelectorTimer *_updateRealtimeStatusTimer;	// 208 = 0xd0
    double _lastRealtimeUpdate;	// 216 = 0xd8
    _Bool _autoAdvanceEnabled;	// 224 = 0xe0
    int _cachedContractionMode;	// 228 = 0xe4
    _Bool _cachedAutoBrailleTranslationEnabled;	// 232 = 0xe8
    double _lastPanTime;	// 240 = 0xf0
    _Bool _panEnabled;	// 248 = 0xf8
    _Bool _testingBrailleElementLocked;	// 249 = 0xf9
    int _lastRefreshTrigger;	// 252 = 0xfc
    BRLTTable *_brailleTableFromSettings;	// 256 = 0x100
    VOTElement *_previousTouchContainer;	// 264 = 0x108
    VOTElement *_previousElement;	// 272 = 0x110
    NSString *_brailleSubstitutionLanguage;	// 280 = 0x118
    double _lastUserInteractionTime;	// 288 = 0x120
    long long _bookCursorPosition;	// 296 = 0x128
    long long _trailingBookCursorPosition;	// 304 = 0x130
    SCROBrailleClient *_testingBrailleClient;	// 312 = 0x138
    double _threadWaitTime;	// 320 = 0x140
    CDUnknownBlockType _tableSetCallback;	// 328 = 0x148
    CDUnknownBlockType _elementSetCallback;	// 336 = 0x150
    CDUnknownBlockType _keypressCallback;	// 344 = 0x158
    CDUnknownBlockType _brailleStringSetCallback;	// 352 = 0x160
}

+ (double)currentDefaultBrailleAlertTimeout;	// IMP=0x00400000000ecd7d
+ (id)manager;	// IMP=0x00100000000ecd6c
+ (void)initialize;	// IMP=0x00100000000ecd37
- (void).cxx_destruct;	// IMP=0x00200000000fabe2
@property(copy, nonatomic) CDUnknownBlockType brailleStringSetCallback; // @synthesize brailleStringSetCallback=_brailleStringSetCallback;
@property(copy, nonatomic) CDUnknownBlockType keypressCallback; // @synthesize keypressCallback=_keypressCallback;
@property(copy, nonatomic) CDUnknownBlockType elementSetCallback; // @synthesize elementSetCallback=_elementSetCallback;
@property(copy, nonatomic) CDUnknownBlockType tableSetCallback; // @synthesize tableSetCallback=_tableSetCallback;
@property(nonatomic) double threadWaitTime; // @synthesize threadWaitTime=_threadWaitTime;
@property(nonatomic) _Bool testingBrailleElementLocked; // @synthesize testingBrailleElementLocked=_testingBrailleElementLocked;
@property(retain, nonatomic) SCROBrailleClient *testingBrailleClient; // @synthesize testingBrailleClient=_testingBrailleClient;
@property(nonatomic) int lastRefreshTrigger; // @synthesize lastRefreshTrigger=_lastRefreshTrigger;
@property(nonatomic) long long trailingBookCursorPosition; // @synthesize trailingBookCursorPosition=_trailingBookCursorPosition;
@property(nonatomic) long long bookCursorPosition; // @synthesize bookCursorPosition=_bookCursorPosition;
@property(readonly, nonatomic) struct _NSRange brailleLineRange; // @synthesize brailleLineRange=_brailleLineRange;
@property(nonatomic) double lastUserInteractionTime; // @synthesize lastUserInteractionTime=_lastUserInteractionTime;
@property(retain) NSString *brailleSubstitutionLanguage; // @synthesize brailleSubstitutionLanguage=_brailleSubstitutionLanguage;
@property(nonatomic) _Bool panEnabled; // @synthesize panEnabled=_panEnabled;
@property(retain, nonatomic) VOTElement *previousElement; // @synthesize previousElement=_previousElement;
@property(retain, nonatomic) VOTElement *previousTouchContainer; // @synthesize previousTouchContainer=_previousTouchContainer;
@property(retain, nonatomic) BRLTTable *brailleTableFromSettings; // @synthesize brailleTableFromSettings=_brailleTableFromSettings;
@property(nonatomic) _Bool usesBrailleSubstitutions; // @synthesize usesBrailleSubstitutions=_usesBrailleSubstitutions;
- (void)refreshBrailleForTerminalCommand:(id)arg1 cursor:(long long)arg2;	// IMP=0x00100000000fa803
- (void)refreshBrailleForTerminalOutput:(id)arg1;	// IMP=0x00100000000fa6bf
- (void)refreshBrailleForTerminalOff;	// IMP=0x00100000000fa6ad
- (void)handleStartTerminalMode;	// IMP=0x00100000000fa64e
- (_Bool)_isTerminalModeOn;	// IMP=0x00100000000fa5ff
- (void)resetTestingAggregatedStatus;	// IMP=0x00100000000fa58b
- (id)testingAggregatedStatus;	// IMP=0x00100000000fa560
- (_Bool)testingKeyboardHelpIsOn;	// IMP=0x00100000000fa557
@property(readonly, nonatomic) _Bool brailleEnabled; // @dynamic brailleEnabled;
- (void)configureForUnitTesting;	// IMP=0x00100000000fa4de
- (void)unitTestHandleBrailleKeypress:(id)arg1;	// IMP=0x00100000000fa4cc
- (struct _NSRange)rangeOfCellRepresentingCharacterAtIndex:(long long)arg1;	// IMP=0x00100000000fa38d
@property(readonly, nonatomic) NSAttributedString *testingMainAttributedString;
- (id)testingBrailleElement;	// IMP=0x00100000000fa366
@property(readonly, nonatomic) unsigned long long testingBrailleElementIndex;
@property(nonatomic) _Bool testingHasActiveDisplay;
- (id)_localeIdentifierForTableIdentifier:(id)arg1;	// IMP=0x00100000000fa22d
- (id)_localeIdentifierForCurrentTable;	// IMP=0x00100000000fa217
- (id)_tableIdentifierFromDefaultRotorItem:(id)arg1 forLocale:(id)arg2;	// IMP=0x00100000000fa172
- (id)_defaultLanguageRotorItem;	// IMP=0x00100000000f9fa5
- (id)currentBrailleTableIdentifier;	// IMP=0x00100000000f9e62
- (void)handleBrailleStartEditing;	// IMP=0x00100000000f9ce3
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;	// IMP=0x00100000000f9c4c
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;	// IMP=0x00100000000f9bb5
- (void)_handleDisplayModeChanged:(id)arg1;	// IMP=0x00100000000f9b24
- (void)handleDisplayModeChanged:(id)arg1;	// IMP=0x00100000000f9aac
- (void)_handleBraillePlayCommandNotSupportedSound;	// IMP=0x00100000000f9a34
- (void)handleBraillePlayCommandNotSupportedSound;	// IMP=0x00100000000f99d3
- (void)_handleBraillePlayBorderHitSound;	// IMP=0x00100000000f995b
- (void)handleBraillePlayBorderHitSound;	// IMP=0x00100000000f98fa
- (void)_handleBraillePlayDisplayConnectionSound:(id)arg1;	// IMP=0x00100000000f9863
- (void)handleBraillePlayDisplayConnectionSound:(id)arg1;	// IMP=0x00100000000f97eb
@property(nonatomic) unsigned int persistentKeyModifiers;
- (void)_dispatchBrailleDidPanWithSuccess:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 direction:(id)arg4 lineOffset:(id)arg5;	// IMP=0x00100000000f8d20
- (_Bool)_brailleShouldTryToTurnPage:(id)arg1 direction:(long long)arg2;	// IMP=0x00100000000f8bfa
- (void)handleBrailleDisplayCopyStringToClipboard:(id)arg1;	// IMP=0x00100000000f8bf4
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4;	// IMP=0x00100000000f8aab
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4;	// IMP=0x00100000000f8965
- (void)handleBrailleSpeechRequest:(id)arg1 language:(id)arg2;	// IMP=0x00100000000f888e
- (void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;	// IMP=0x00100000000f8360
- (void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;	// IMP=0x00100000000f7f71
- (void)_handleBrailleReplaceTextRange:(id)arg1 withString:(id)arg2 cursor:(id)arg3;	// IMP=0x00100000000f7819
- (_Bool)_handleKeyboardModifierCommands:(id)arg1;	// IMP=0x00100000000f6d8e
- (void)_handleBrailleKeypress:(id)arg1;	// IMP=0x00100000000f57b0
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;	// IMP=0x00100000000f5264
- (void)handleUserEventOccured;	// IMP=0x00100000000f5220
- (void)handleBrailleKeypress:(id)arg1;	// IMP=0x00100000000f5173
- (void)_updateOnscreenKeyboardSettings;	// IMP=0x00100000000f4d5e
- (_Bool)handleShowOnscreenKeyboardToggle;	// IMP=0x00100000000f4aec
- (void)updateKeyboardSettings;	// IMP=0x00100000000f4ada
- (void)_handleBrailleConfigurationChanged:(id)arg1;	// IMP=0x00100000000f4570
- (void)handleBrailleDidReconnect:(id)arg1;	// IMP=0x00100000000f4518
- (void)handleBrailleDidDisconnect:(id)arg1;	// IMP=0x00100000000f44c3
- (void)handleBrailleConfigurationChanged:(id)arg1;	// IMP=0x00100000000f43fd
- (void)_displayBrailleElementHint;	// IMP=0x00100000000f416f
@property(retain, nonatomic) VOTElement *brailleElement; // @synthesize brailleElement=_brailleElement;
- (void)_refreshBrailleLinePreferringPositionOverRotorSelection:(_Bool)arg1 knownLineRange:(_Bool)arg2 updatedPosition:(id)arg3;	// IMP=0x00100000000f3a38
- (void)_refreshBrailleLine;	// IMP=0x00100000000f3a1f
- (void)refreshBrailleLine;	// IMP=0x00100000000f39be
- (void)_resetBrailleCursor;	// IMP=0x00100000000f398a
- (void)_setBrailleElement:(id)arg1 resetBrailleCursor:(id)arg2 rotorSelection:(id)arg3;	// IMP=0x00100000000f35de
- (void)setBrailleElement:(id)arg1 resetBrailleCursor:(_Bool)arg2 rotorSelection:(id)arg3;	// IMP=0x00100000000f34cb
- (void)_setBrailleString:(id)arg1 type:(id)arg2 timeout:(id)arg3 priority:(id)arg4 langCode:(id)arg5 brailleLineRangeValue:(id)arg6;	// IMP=0x00100000000f2cb3
- (void)setBrailleString:(id)arg1 type:(int)arg2 timeout:(double)arg3 langCode:(id)arg4 brailleLineRange:(struct _NSRange)arg5 isBrailleLineRangeKnown:(_Bool)arg6;	// IMP=0x00100000000f2ab1
- (void)_filterUnacceptableBrailleStrings:(id)arg1;	// IMP=0x00100000000f2986
- (void)applyBrailleSubstitutions:(id)arg1;	// IMP=0x00100000000f28b2
- (void)_handleStatusRouterForIndex:(long long)arg1;	// IMP=0x00100000000f26a8
- (void)_updateStatusCells;	// IMP=0x00100000000f1cd3
- (_Bool)statusCellShowsText;	// IMP=0x00100000000f1cbd
- (_Bool)statusCellShowsGeneral;	// IMP=0x00100000000f1ca7
- (void)_updateStatusCellPrefs;	// IMP=0x00100000000f1b7b
@property(readonly, nonatomic) _Bool bluetoothBrailleDisplayConnected;
- (void)setSingleLetterQuickNavOn:(_Bool)arg1;	// IMP=0x00100000000f1b45
- (void)_updateHelpEnabled;	// IMP=0x00100000000f1a9f
@property(nonatomic) _Bool autoAdvanceEnabled;
- (void)_updateBrailleAutoAdvancePrefs;	// IMP=0x00100000000f1a27
- (void)updateBrailleAutoAdvancePrefs;	// IMP=0x00100000000f19c6
- (void)_updateBrailleKeyDebouncePrefs;	// IMP=0x00100000000f1965
- (void)_updateWordWrapPrefs;	// IMP=0x00100000000f1876
- (void)_initializeExpandedStatusCellDictionaries;	// IMP=0x00100000000f12b2
- (void)_handleBrailleTranslate:(id)arg1;	// IMP=0x00100000000f12ac
- (void)_handleBrailleStatusRouter:(id)arg1;	// IMP=0x00100000000f122d
- (void)_handleBrailleRouter:(id)arg1;	// IMP=0x00100000000f0be4
- (void)_handleBrailleAnnouncementModeOn:(id)arg1;	// IMP=0x00100000000f0b9a
- (void)testingExitDisplayMode;	// IMP=0x00100000000f0b39
- (void)_exitDisplayMode;	// IMP=0x00100000000f0b20
- (void)_handleBrailleToggleEightDot:(id)arg1;	// IMP=0x00100000000f0987
- (void)_handleBrailleNextOutputMode:(id)arg1;	// IMP=0x00100000000f0973
- (void)_handleBrailleNextInputMode:(id)arg1;	// IMP=0x00100000000f095c
- (void)_handleBrailleMode:(id)arg1 input:(_Bool)arg2;	// IMP=0x00100000000f070b
- (void)updateBrailleMode:(_Bool)arg1;	// IMP=0x00100000000f060e
- (long long)inputContractionMode;	// IMP=0x00100000000f059e
- (long long)outputContractionMode;	// IMP=0x00100000000f052e
- (_Bool)_supportsMode:(long long)arg1;	// IMP=0x00100000000f049f
- (void)_handleBrailleToggleContractions:(id)arg1;	// IMP=0x00100000000f0346
- (void)_handleBraillePanRight:(id)arg1;	// IMP=0x00100000000f01e0
- (void)_handleBraillePanEnd:(id)arg1;	// IMP=0x00100000000f00a0
- (void)_handleBraillePanBeginning:(id)arg1;	// IMP=0x00100000000eff60
- (void)_handleBraillePanLeft:(id)arg1;	// IMP=0x00100000000efdfa
- (void)_initializeCommands;	// IMP=0x00100000000ef99b
- (void)_handleEvent:(id)arg1;	// IMP=0x00100000000ef894
- (void)handleEvent:(id)arg1;	// IMP=0x00100000000ef81c
- (void)updateStatusCellPrefs;	// IMP=0x00100000000ef7bb
- (void)handleSettingsChange:(id)arg1;	// IMP=0x00100000000ef774
- (_Bool)_languageIsNBSC;	// IMP=0x00100000000ef725
- (_Bool)_languageIsCJK;	// IMP=0x00100000000ef606
- (void)setTextSearchModeOn:(_Bool)arg1;	// IMP=0x00100000000ef5ed
- (void)updateUsesNemethForMath;	// IMP=0x00100000000ef589
- (void)_setBrailleSubstitutionLanguage:(id)arg1;	// IMP=0x00100000000ef577
- (void)_setBrailleTable:(id)arg1;	// IMP=0x00100000000ef419
- (void)_setCurrentDefaultTable:(id)arg1;	// IMP=0x00100000000ef408
- (void)updateBrailleLanguage;	// IMP=0x00100000000ef242
- (void)handleKeyboardChanged;	// IMP=0x00100000000ef09c
- (long long)_adjustedRotorIndex:(long long)arg1 inDirection:(long long)arg2 rotorItems:(id)arg3;	// IMP=0x00100000000ef058
- (_Bool);	// IMP=0x00100000000eebf2
- (long long)_indexOfBrailleTable:(id)arg1 inRotorItems:(id)arg2;	// IMP=0x00100000000eea44
- (void)announceBrailleTable:(id)arg1 isDefault:(_Bool)arg2;	// IMP=0x00100000000ee892
- (id)adjustBrailleLanguageRotorInDirection:(long long)arg1 isDefault:(out _Bool *)arg2;	// IMP=0x00100000000ee4c9
- (void)_updateRealtimeElementStatus;	// IMP=0x00100000000edf98
- (void)_updateRealtimeElementStatusFromTimer;	// IMP=0x00100000000edf55
- (void)updateRealtimeElements:(id)arg1;	// IMP=0x00100000000edf12
- (void)_waitForBrailleClientConnection;	// IMP=0x00100000000ede77
- (void)_updateBrailleInputSettings;	// IMP=0x00100000000edd61
- (void)_setAutomaticBrailleTranslationEnabled:(_Bool)arg1;	// IMP=0x00100000000edd35
- (void)_setInputContractionMode:(int)arg1;	// IMP=0x00100000000edd0c
- (void)updateBrailleInputSettings;	// IMP=0x00100000000edcd9
- (void)updateBrailleOutputSettings;	// IMP=0x00100000000edca9
- (void)_updateBrailleOutputSettings;	// IMP=0x00100000000edb94
- (void)_thread_initiateScrodConnection;	// IMP=0x00100000000edaa5
- (void)_initiateScrodConnection;	// IMP=0x00100000000eda76
- (void)dealloc;	// IMP=0x00100000000eda08
- (id)init;	// IMP=0x00100000000ece1f

@end

