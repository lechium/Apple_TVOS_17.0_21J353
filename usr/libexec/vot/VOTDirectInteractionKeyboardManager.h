//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXAccessQueueTimer, NSMutableDictionary, VOTElement;
@protocol VOTGestureKeyboardDelegate;

@interface VOTDirectInteractionKeyboardManager : NSObject
{
    AXAccessQueue *_dispatchAccessQueue;	// 8 = 0x8
    AXAccessQueueTimer *_dispatchTimer;	// 16 = 0x10
    NSMutableDictionary *_dispatchTable;	// 24 = 0x18
    _Bool _inDirectInteractionTypingMode;	// 32 = 0x20
    _Bool _inGestureMode;	// 33 = 0x21
    id <VOTGestureKeyboardDelegate> _delegate;	// 40 = 0x28
    VOTElement *_keyboardElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000010172e
@property(nonatomic) _Bool inGestureMode; // @synthesize inGestureMode=_inGestureMode;
@property(retain, nonatomic) VOTElement *keyboardElement; // @synthesize keyboardElement=_keyboardElement;
@property(nonatomic) __weak id <VOTGestureKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool inDirectInteractionTypingMode; // @synthesize inDirectInteractionTypingMode=_inDirectInteractionTypingMode;
- (void)_handleCommitTyping:(id)arg1;	// IMP=0x0010000000101662
- (void)_handleTypingPeriod:(id)arg1;	// IMP=0x00100000001015c6
- (void)_handleTypingEnter:(id)arg1;	// IMP=0x001000000010152a
- (void)_handleShift:(id)arg1;	// IMP=0x00100000001014bb
- (void)_handleShiftLock:(id)arg1;	// IMP=0x001000000010144c
- (void)_handleDelete:(id)arg1;	// IMP=0x00100000001013dd
- (void)_handleKeyboardSelection:(id)arg1;	// IMP=0x001000000010131b
- (void)_handleKeyplaneSelection:(id)arg1;	// IMP=0x001000000010125d
- (void)_handleSuggestionSelection:(id)arg1;	// IMP=0x001000000010119f
- (void)_processEvent:(id)arg1;	// IMP=0x0010000000101112
- (_Bool)processEvent:(id)arg1;	// IMP=0x0010000000100fba
@property(readonly, nonatomic) struct CGRect gestureKeyboardRegion;
- (_Bool)inGestureTypingMode;	// IMP=0x0010000000100d4f
- (void)_updateTypingMode;	// IMP=0x00100000001007be
- (void)updateKeyboardElement;	// IMP=0x0010000000100755
- (void)_updateKeyboardElement;	// IMP=0x0010000000100724
- (void)updateTypingMode;	// IMP=0x00100000001006bb
- (void)screenChange:(id)arg1;	// IMP=0x001000000010068d
- (void)_initializeDispatchTable;	// IMP=0x001000000010011a
- (void)dealloc;	// IMP=0x00100000001000a5
- (id)init;	// IMP=0x00100000000fff55

@end

