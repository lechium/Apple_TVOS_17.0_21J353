//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_CarPlay : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x001000000111ba9a
- (_Bool)supportsLinearMovementDebugOverlay;	// IMP=0x000000000111bd8b
- (_Bool)shouldCallAccessibilityOverrides;	// IMP=0x000000000111bd83
- (long long)focusSystemDeactivationMode;	// IMP=0x000000000111bd7b
- (_Bool)autoDismissesPopoverControllersOnFocusIntersection;	// IMP=0x000000000111bd73
- (_Bool)tabBasedMovementLoops;	// IMP=0x000000000111bd6b
- (long long)skipKeyCommandsForKeyEvents;	// IMP=0x000000000111bd63
- (long long)deliverKeyEventsToFocusEngine;	// IMP=0x000000000111bd5b
- (_Bool)shouldSupressIndirectMovementOnSelect;	// IMP=0x000000000111bd53
- (_Bool)shouldEnableFocusOnSelect;	// IMP=0x000000000111bd4b
- (long long)indirectMovementPriority;	// IMP=0x000000000111bd43
- (_Bool)supportsTabKey;	// IMP=0x000000000111bd3b
- (long long)pageButtonScrollingStyle;	// IMP=0x000000000111bd33
- (_Bool)supportsArrowKeys;	// IMP=0x000000000111bd2b
- (_Bool)supportsGameControllers;	// IMP=0x000000000111bd23
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;	// IMP=0x000000000111bd1b
- (_Bool)supportsIndirectRotaryMovement;	// IMP=0x000000000111bd13
- (_Bool)supportsIndirectPanningMovement;	// IMP=0x000000000111bd0b
- (_Bool)showsFocusRingForItem:(id)arg1;	// IMP=0x000000000111bd03
- (_Bool)supportsParentFocusRings;	// IMP=0x000000000111bcfb
- (long long)focusRingVisibility;	// IMP=0x000000000111bcf3
- (long long)buttonSelectionMode;	// IMP=0x000000000111bce8
- (_Bool)refinesIndexBarTargetContentOffset;	// IMP=0x000000000111bce0
- (_Bool)isContainerEligibleForFocusUpdateSearchRoot:(id)arg1;	// IMP=0x000000000111bccb
- (double)stabilizedLinearFocusMovementTimeout;	// IMP=0x000000000111bcbd
- (_Bool)wantsTreeLocking;	// IMP=0x000000000111bcb5
- (_Bool)throttlesProgrammaticFocusUpdates;	// IMP=0x000000000111bcad
- (long long)focusCastingMode;	// IMP=0x000000000111bca5
- (_Bool)supportsClipToBounds;	// IMP=0x000000000111bc91
- (_Bool)supportViewTransparencyAndMultipleWindows;	// IMP=0x000000000111bc89
- (_Bool)treatFirstAndLastHeadingsAsGlobal;	// IMP=0x000000000111bc81
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;	// IMP=0x000000000111bc79
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;	// IMP=0x000000000111bc71
- (_Bool)preventsCellFocusabilityWhileEditing;	// IMP=0x000000000111bc69
- (long long)cellFocusability;	// IMP=0x000000000111bc61
- (_Bool)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;	// IMP=0x000000000111bc59
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;	// IMP=0x000000000111bc51
- (long long)scrollingMode;	// IMP=0x000000000111bc46
- (unsigned long long)defaultFocusScrollOffsetResolver;	// IMP=0x000000000111bc3e
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;	// IMP=0x000000000111bc36
- (unsigned long long)focusGroupContainmentBehavior;	// IMP=0x000000000111bc2e
- (unsigned long long)focusGroupMovementBehavior;	// IMP=0x000000000111bc26
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;	// IMP=0x000000000111bc1e
- (_Bool)searchBarTextFieldCanBecomeFocused;	// IMP=0x000000000111bc16
- (_Bool)tabBarButtonCanBecomeFocused;	// IMP=0x000000000111bc0e
- (_Bool)tabBarCanBecomeFocused;	// IMP=0x000000000111bc06
- (_Bool)textViewCanBecomeFocused:(id)arg1;	// IMP=0x000000000111bbf1
- (_Bool)controlCanBecomeFocused:(id)arg1;	// IMP=0x000000000111bbe9
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;	// IMP=0x000000000111bbe1
- (long long)focusDeferral;	// IMP=0x000000000111bbd9
- (_Bool)syncsFocusAndResponder;	// IMP=0x000000000111bbd1
- (long long)requiredInputDevices;	// IMP=0x000000000111bbc9
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;	// IMP=0x000000000111bbc1
- (_Bool)wantsFocusSystemForScene:(id)arg1;	// IMP=0x000000000111bac9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

