//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/NSObject-Protocol.h>

@class AFDialogPhase, AceObject, NSString, NSUUID;
@protocol AFConversationStorable;

@protocol SiriSharedUIViewControlling <NSObject>
@property(nonatomic, getter=isUtteranceUserInteractionEnabled) _Bool utteranceUserInteractionEnabled;
@property(retain, nonatomic) AceObject *aceObject;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;

@optional
@property(nonatomic) _Bool isInAmbientInteractivity;
@property(nonatomic) _Bool isInAmbient;
@property(retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
- (void)configureForConversationStorable:(id <AFConversationStorable>)arg1;
- (_Bool)hasSash;
- (void)siriDidReceiveViewsWithDialogPhase:(AFDialogPhase *)arg1;
- (_Bool)shouldHidePriorViews;
- (void)siriDidUpdateASRWithRecognition:(NSString *)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(_Bool)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (double)baselineOffsetFromBottom;
- (double)desiredPinnedTopPadding;
- (void)siriIsIdleAndQuiet;
- (void)siriWillStartRequest;
- (void)siriDidTapOutsideContent;
- (void)siriDidScrollVisible:(_Bool)arg1;
- (void)siriWillBeginScrolling;
- (void)handleAceCommand:(AceObject *)arg1;
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint)arg1;
- (void)endEditingAndCorrect:(_Bool)arg1;
- (NSString *)navigationTitle;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredHeight;
@end
