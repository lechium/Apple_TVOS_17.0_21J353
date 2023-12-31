//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, UITapGestureRecognizer, _UIRotaryGestureRecognizer;

__attribute__((visibility("hidden")))
@interface AVGestureRecognizerDelegate : NSObject
{
    NSSet *_exclusiveGestureRecognizers;	// 8 = 0x8
    NSSet *_gestureRecognizersThatMustFail;	// 16 = 0x10
    UITapGestureRecognizer *_dismissalMenuTapRecognizer;	// 24 = 0x18
    UITapGestureRecognizer *_otherMenuTapRecognizer;	// 32 = 0x20
    CDUnknownBlockType _userInteractionAllowedBlock;	// 40 = 0x28
    CDUnknownBlockType _shouldBeginDismissalMenuTapGesture;	// 48 = 0x30
    CDUnknownBlockType _shouldBeginOtherMenuTapBlockGesture;	// 56 = 0x38
    _UIRotaryGestureRecognizer *_rotaryGestureRecognizer;	// 64 = 0x40
    CDUnknownBlockType _shouldBeginRotary;	// 72 = 0x48
    CDUnknownBlockType _mustRotaryBeginFromRest;	// 80 = 0x50
    CDUnknownBlockType _beganRotaryClassification;	// 88 = 0x58
    CDUnknownBlockType _updatedRotaryClassification;	// 96 = 0x60
    CDUnknownBlockType _failedRotaryClassification;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000ea232
@property(copy, nonatomic) CDUnknownBlockType failedRotaryClassification; // @synthesize failedRotaryClassification=_failedRotaryClassification;
@property(copy, nonatomic) CDUnknownBlockType updatedRotaryClassification; // @synthesize updatedRotaryClassification=_updatedRotaryClassification;
@property(copy, nonatomic) CDUnknownBlockType beganRotaryClassification; // @synthesize beganRotaryClassification=_beganRotaryClassification;
@property(copy, nonatomic) CDUnknownBlockType mustRotaryBeginFromRest; // @synthesize mustRotaryBeginFromRest=_mustRotaryBeginFromRest;
@property(copy, nonatomic) CDUnknownBlockType shouldBeginRotary; // @synthesize shouldBeginRotary=_shouldBeginRotary;
@property(retain, nonatomic) _UIRotaryGestureRecognizer *rotaryGestureRecognizer; // @synthesize rotaryGestureRecognizer=_rotaryGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType shouldBeginOtherMenuTapBlockGesture; // @synthesize shouldBeginOtherMenuTapBlockGesture=_shouldBeginOtherMenuTapBlockGesture;
@property(copy, nonatomic) CDUnknownBlockType shouldBeginDismissalMenuTapGesture; // @synthesize shouldBeginDismissalMenuTapGesture=_shouldBeginDismissalMenuTapGesture;
@property(copy, nonatomic) CDUnknownBlockType userInteractionAllowedBlock; // @synthesize userInteractionAllowedBlock=_userInteractionAllowedBlock;
@property(retain, nonatomic) UITapGestureRecognizer *otherMenuTapRecognizer; // @synthesize otherMenuTapRecognizer=_otherMenuTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *dismissalMenuTapRecognizer; // @synthesize dismissalMenuTapRecognizer=_dismissalMenuTapRecognizer;
@property(retain, nonatomic) NSSet *gestureRecognizersThatMustFail; // @synthesize gestureRecognizersThatMustFail=_gestureRecognizersThatMustFail;
@property(retain, nonatomic) NSSet *exclusiveGestureRecognizers; // @synthesize exclusiveGestureRecognizers=_exclusiveGestureRecognizers;
- (void)rotaryGestureRecognizerFailedClassifyingMovement:(id)arg1;	// IMP=0x00000000000ea063
- (void)rotaryGestureRecognizerUpdatedClassifyingMovement:(id)arg1;	// IMP=0x00000000000e9fe3
- (void)rotaryGestureRecognizerBeganClassifyingMovement:(id)arg1;	// IMP=0x00000000000e9f63
- (_Bool)rotaryGestureRecognizerMustBeginFromRest:(id)arg1;	// IMP=0x00000000000e9ed7
- (_Bool)rotaryGestureRecognizerCanBeginFromRest:(id)arg1;	// IMP=0x00000000000e9e4b
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000e9ddb
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000000e9d0e
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000e9c5a
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000e9aa6
@property(readonly, nonatomic, getter=isUserInteractionAllowed) _Bool userInteractionAllowed;
- (id)init;	// IMP=0x00000000000e9997

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

