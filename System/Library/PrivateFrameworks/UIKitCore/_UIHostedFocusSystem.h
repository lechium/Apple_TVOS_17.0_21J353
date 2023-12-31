//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFocusSystem.h"

@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

__attribute__((visibility("hidden")))
@interface _UIHostedFocusSystem : UIFocusSystem
{
    _Bool _didSetFocusSoundGenerator;	// 8 = 0x8
    id <UIFocusEnvironment> _hostEnvironment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000073fc32
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> hostEnvironment; // @synthesize hostEnvironment=_hostEnvironment;
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x000000000073fb8e
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x000000000073fb05
- (_Bool)_focusSystemIsValid;	// IMP=0x000000000073fa8c
- (_Bool)_prefersDeferralForFocusUpdateInContext:(id)arg1;	// IMP=0x000000000073fa84
- (_Bool)_postsFocusUpdateNotifications;	// IMP=0x000000000073fa7c
- (_Bool)_requiresFocusedItemToHaveContainingView;	// IMP=0x000000000073fa74
- (void)_setFocusSoundGenerator:(id)arg1;	// IMP=0x000000000073fa3a
- (id)_focusSoundGenerator;	// IMP=0x000000000073f998
- (id)_hostFocusSystem;	// IMP=0x000000000073f91c
- (_Bool)containsChildOfHostEnvironment:(id)arg1;	// IMP=0x000000000073f82b
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <_UIHostedFocusSystemDelegate> delegate;
- (id)_initWithHostEnvironment:(id)arg1;	// IMP=0x000000000073f48d

@end

