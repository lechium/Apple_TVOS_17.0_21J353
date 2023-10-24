//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardUsageTracking : NSObject
{
}

+ (void)variantDeleteIncrement;	// IMP=0x0080000000c4806c
+ (void)showVariantsIncrement;	// IMP=0x0080000000c48038
+ (void)letterCaseToggleIncrement;	// IMP=0x0080000000c48004
+ (void)keyboardSupportsTouch:(_Bool)arg1;	// IMP=0x0080000000c47fcd
+ (void)signupPasswordFromKeyboardIncrement;	// IMP=0x0080000000c47f99
+ (void)signupPasswordFromAutofillIncrement;	// IMP=0x0080000000c47f65
+ (void)loginPasswordFromKeyboardIncrement;	// IMP=0x0080000000c47ee0
+ (void)loginPasswordFromAutofillIncrement;	// IMP=0x0080000000c47e5b
+ (void)appAutofillCredentialFromSafariUI;	// IMP=0x0080000000c47e27
+ (void)appAutofillExtraKeyTapped;	// IMP=0x0080000000c47df3
+ (void)appAutofillFilled;	// IMP=0x0080000000c47d6e
+ (void)appAutofillDetectedDecrement;	// IMP=0x0080000000c47ce9
+ (void)appAutofillDetectedIncrement;	// IMP=0x0080000000c47c64
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1;	// IMP=0x0080000000c47c30
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1;	// IMP=0x0080000000c47be1
+ (void)restAndTypeTriggered;	// IMP=0x0080000000c47bad
+ (void)normalPunctuationKeyCount;	// IMP=0x0080000000c47b52
+ (void)undoKeyCount;	// IMP=0x0080000000c47af7
+ (void)redoKeyCount;	// IMP=0x0080000000c47a9c
+ (void)panAlternateKeyFlickDownCount;	// IMP=0x0080000000c47a41
+ (void)singleStringKeyFlickUpCount;	// IMP=0x0080000000c479e6
+ (void)dualStringsKeyFlickUpCount;	// IMP=0x0080000000c4798b
+ (void)keyboardReachabilityDistribution:(double)arg1;	// IMP=0x0080000000c478c7
+ (void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2;	// IMP=0x0080000000c477ec
+ (void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2;	// IMP=0x0080000000c47786
+ (void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2;	// IMP=0x0080000000c476df
+ (void)keyboardGestureOneFingerForcePress:(_Bool)arg1 withPressCount:(int)arg2;	// IMP=0x0080000000c4767f
+ (void)keyboardGestureOneFingerForcePan:(_Bool)arg1;	// IMP=0x0080000000c4763e
+ (void)keyboardGestureTwoFingerTap:(_Bool)arg1 withTapCount:(int)arg2;	// IMP=0x0080000000c475db
+ (void)showLowercaseKeyplanePreference:(_Bool)arg1;	// IMP=0x0080000000c475a1
+ (void)showCharacterPreviewPreference:(_Bool)arg1;	// IMP=0x0080000000c47567
+ (void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(_Bool)arg2 index:(unsigned long long)arg3;	// IMP=0x0080000000c471d3
+ (void)keyboardGestureSelectedPredictiveInputCandidate;	// IMP=0x0080000000c4719c
+ (void)keyboardGestureSetPredictionPreference:(_Bool)arg1;	// IMP=0x0080000000c47158
+ (void)inputSwitcherSetPredictionPreference:(_Bool)arg1;	// IMP=0x0080000000c47114
+ (void)predictionViewState:(_Bool)arg1 forInputMode:(id)arg2;	// IMP=0x0080000000c46fd8
+ (void)keyboardExtensionsOnDevice;	// IMP=0x0080000000c46bff
+ (void)keyboardExtensionCrashed;	// IMP=0x0080000000c46bc8
+ (void)keyboardExtensionPrimaryLanguageChanged;	// IMP=0x0080000000c46b91
+ (void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2;	// IMP=0x0080000000c46986

@end
