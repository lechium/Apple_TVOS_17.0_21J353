//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AXVoiceOverActivity, NSArray, NSNumber, NSString, VOTElement, VOTEvent, VOTRotor;
@protocol VOTElementUpdateProtocol;

@protocol VOTElementManagementProtocol <NSObject>
@property(retain, nonatomic) NSString *tutorialPage;
@property(nonatomic) __weak id <VOTElementUpdateProtocol> updateDelegate;
- (void)updateRotorForCurrentElement:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)updateCursorFrameAfterLift;
- (_Bool)isItemChooserVisible;
- (double)lastScreenChangeNotificationTime;
- (VOTRotor *)elementRotor;
- (void)moveToElementMatchingRotorType:(long long)arg1 inDirection:(long long)arg2;
- (NSArray *)currentApplications;
- (VOTElement *)currentElement;
- (void)systemServerDied;
- (_Bool)shouldSnarfCrown;
- (_Bool)isReadingAll;
- (_Bool)shouldAllowSpeaking;
- (void)processExternalScrollToVisible:(struct CGPoint)arg1;
- (void)processExternalElementUpdate;
- (void)updateApplicationAndSpeak:(NSNumber *)arg1;
- (_Bool)determineFullImageDescriptionsEnabled:(VOTElement *)arg1;
- (long long)modifierKeyChoiceForElement:(VOTElement *)arg1;
- (_Bool)speakTableRowAndColumnForElement:(VOTElement *)arg1;
- (_Bool)speakTableHeadersForElement:(VOTElement *)arg1;
- (AXVoiceOverActivity *)determineActivityForElement:(VOTElement *)arg1;
- (void)voiceOverDidRegisterWithSystem;
- (struct CGRect)currentLineFrame;
- (void)updateCurrentElementFrame;
- (_Bool)allowsSystemControlEventForPosition:(int)arg1;
- (_Bool)handleTVMenuButtonClicked;
- (_Bool)handleTVSelectButtonClicked;
- (void)handlePlayPauseButtonPress;
- (void)handleStateReset;
- (void)handleHomeButtonPress;
- (void)updateNavigationModeForClassicRemote;
- (void)handleNotification:(int)arg1 withData:(id)arg2 forElement:(struct __AXUIElement *)arg3;
- (void)handleEvent:(VOTEvent *)arg1;
@end

