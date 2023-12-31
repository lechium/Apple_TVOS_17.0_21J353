//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIDelayedAction;
@protocol UIKeyboardInputModeIndicatorControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputModeIndicatorController : NSObject
{
    id <UIKeyboardInputModeIndicatorControllerDelegate> _delegate;	// 8 = 0x8
    UIDelayedAction *_dismissAction;	// 16 = 0x10
    UIDelayedAction *_idleAction;	// 24 = 0x18
}

+ (_Bool)enabled;	// IMP=0x00600000000acac7
- (void).cxx_destruct;	// IMP=0x00000000000ad90a
@property(retain, nonatomic) UIDelayedAction *idleAction; // @synthesize idleAction=_idleAction;
@property(retain, nonatomic) UIDelayedAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(nonatomic) __weak id <UIKeyboardInputModeIndicatorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)inputModeUpdateTime;	// IMP=0x00000000000ad856
- (void)clear;	// IMP=0x00000000000ad7aa
- (void)dismissIndicator;	// IMP=0x00000000000ad44a
- (void)presentIndicatorWithReason:(id)arg1 force:(_Bool)arg2;	// IMP=0x00000000000ad274
- (void)showIndicatorWithReason:(id)arg1 force:(_Bool)arg2;	// IMP=0x00000000000ad092
- (void)inputModeSelectorDidOpen;	// IMP=0x00000000000ad038
- (void)willResignActive;	// IMP=0x00000000000acf7a
- (void)keyPressed;	// IMP=0x00000000000acebc
- (void)keyboardWindowEnabled:(_Bool)arg1;	// IMP=0x00000000000acdcf
- (void)hardwareKeyboardDettached;	// IMP=0x00000000000acd11
- (void)inputModeChanged;	// IMP=0x00000000000acc44
- (void)idle;	// IMP=0x00000000000acb7d
- (_Bool)enabled;	// IMP=0x00000000000acae0

@end

