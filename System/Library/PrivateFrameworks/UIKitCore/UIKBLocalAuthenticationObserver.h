//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol UIKeyInput;

__attribute__((visibility("hidden")))
@interface UIKBLocalAuthenticationObserver : NSObject
{
    _Bool _isListeningForLAUINotifications;	// 8 = 0x8
    _Bool _localAuthenticationPresented;	// 9 = 0x9
    _Bool _isRestoringPreLocalAuthenticationDelegate;	// 10 = 0xa
    _Bool _inputUIResuming;	// 11 = 0xb
    _Bool _isRestoringInputViews;	// 12 = 0xc
    id <UIKeyInput> _delegateResignedDuringLocalAuthentication;	// 16 = 0x10
    NSUUID *_uuidOfDelegateResignedDuringLocalAuthentication;	// 24 = 0x18
    NSUUID *_uuidOfSessionEndedDuringLocalAuthentication;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000014c51ec
@property(nonatomic) _Bool isRestoringInputViews; // @synthesize isRestoringInputViews=_isRestoringInputViews;
@property(nonatomic) _Bool inputUIResuming; // @synthesize inputUIResuming=_inputUIResuming;
@property(nonatomic) _Bool isRestoringPreLocalAuthenticationDelegate; // @synthesize isRestoringPreLocalAuthenticationDelegate=_isRestoringPreLocalAuthenticationDelegate;
@property(retain, nonatomic) NSUUID *uuidOfSessionEndedDuringLocalAuthentication; // @synthesize uuidOfSessionEndedDuringLocalAuthentication=_uuidOfSessionEndedDuringLocalAuthentication;
@property(retain, nonatomic) NSUUID *uuidOfDelegateResignedDuringLocalAuthentication; // @synthesize uuidOfDelegateResignedDuringLocalAuthentication=_uuidOfDelegateResignedDuringLocalAuthentication;
@property(nonatomic) __weak id <UIKeyInput> delegateResignedDuringLocalAuthentication; // @synthesize delegateResignedDuringLocalAuthentication=_delegateResignedDuringLocalAuthentication;
@property _Bool localAuthenticationPresented; // @synthesize localAuthenticationPresented=_localAuthenticationPresented;
- (void)_stopListeningForLAUINotifications;	// IMP=0x00000000014c513f
- (void)_startListeningForLAUINotificationsIfNeeded;	// IMP=0x00000000014c5139
- (_Bool)localAuthenticationPresentedOrBeingRecoveredFrom;	// IMP=0x00000000014c50d8
- (void)_applicationResumed:(id)arg1;	// IMP=0x00000000014c506c
- (void)_localAuthenticationDismissed;	// IMP=0x00000000014c4edd
- (void)_localAuthenticationPresented;	// IMP=0x00000000014c4db4
- (_Bool)_applicationStateIsActive;	// IMP=0x00000000014c4d49
- (void)inputDelegateWillTeardown:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x00000000014c4c92
- (void)didTryToBecomeFirstResponder:(id)arg1;	// IMP=0x00000000014c4b88
- (void)willTryToBecomeFirstResponder:(id)arg1;	// IMP=0x00000000014c4a7b
- (id)sessionIDForInputDelegate:(id)arg1;	// IMP=0x00000000014c49e6
- (void)dealloc;	// IMP=0x00000000014c49a8
- (id)init;	// IMP=0x00000000014c48b2

@end

