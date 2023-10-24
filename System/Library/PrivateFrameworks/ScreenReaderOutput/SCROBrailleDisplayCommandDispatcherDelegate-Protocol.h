//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class SCROBrailleKey;
@protocol SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDisplayInputManagerProtocol;

@protocol SCROBrailleDisplayCommandDispatcherDelegate <NSObject>
- (void)handleUnsupportedKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandToggleEightDotBrailleEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandToggleContractedBrailleEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandWordDescriptionEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandReturnBrailleEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandTranslateForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandEscapeKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandForwardDeleteKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandDeleteKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandRouterKeyEvent:(SCROBrailleKey *)arg1 forDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg2;
- (void)handleCommandMoveRightForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandMoveLeftForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandPanRightForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (void)handleCommandPanLeftForDispatcher:(id <SCROBrailleDisplayCommandDispatcherProtocol>)arg1;
- (id <SCROBrailleDisplayInputManagerProtocol>)brailleInputManager;
@end

