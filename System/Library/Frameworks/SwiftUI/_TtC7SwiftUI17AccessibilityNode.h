//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIResponder.h>

@class AXChartDescriptor, MISSING_TYPE, NSArray, NSAttributedString, NSString, UIBezierPath;
@protocol _TtP7SwiftUI28PlatformAccessibilityElement_;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI17AccessibilityNode : UIResponder
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *version;	// 16 = 0x10
    MISSING_TYPE *children;	// 24 = 0x18
    MISSING_TYPE *bridgedChild;	// 32 = 0x20
    MISSING_TYPE *parent;	// 40 = 0x28
    MISSING_TYPE *viewRendererHost;	// 48 = 0x30
    MISSING_TYPE *environment;	// 64 = 0x40
    MISSING_TYPE *attachmentsStorage;	// 80 = 0x50
    MISSING_TYPE *cachedCombinedAttachment;	// 88 = 0x58
    MISSING_TYPE *platformElementPropertiesDirty;	// 104 = 0x68
    MISSING_TYPE *platformRotorStorage;	// 112 = 0x70
    MISSING_TYPE *queuedUpdateFocusResponder;	// 120 = 0x78
    MISSING_TYPE *focusResponder;	// 128 = 0x80
    MISSING_TYPE *cachedIsPlaceholderOrIgnored;	// 144 = 0x90
    MISSING_TYPE *relationshipScope;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000eb8e8d
- (id)init;	// IMP=0x0000000000ec0cf6
@property(nonatomic, readonly) UIResponder *nextResponder;
- (void)dealloc;	// IMP=0x0000000000eb8e70
- (id)_accessibilityNativeFocusAncestor;	// IMP=0x0000000000bb5cb2
- (_Bool)_accessibilityIsRTL;	// IMP=0x0000000000bb5bd7
@property(nonatomic, copy) NSArray *accessibilityCustomRotors;
- (_Bool)_accessibilityCanPerformAction:(int)arg1;	// IMP=0x0000000000bb5ae0
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x0000000000bb5a4f
@property(nonatomic, readonly) NSArray *_accessibilityUserDefinedLinkedUIElements;
- (id)accessibilityURL;	// IMP=0x0000000000bb5726
- (void)accessibilityElementDidLoseFocus;	// IMP=0x0000000000bb5598
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x0000000000bb5571
- (_Bool)accessibilityPerformMagicTap;	// IMP=0x0000000000bb552a
- (_Bool)_accessibilityCanPerformEscapeAction;	// IMP=0x0000000000bb5460
- (_Bool)accessibilityPerformEscape;	// IMP=0x0000000000bb5396
- (_Bool)_accessibilitySupportsActivateAction;	// IMP=0x0000000000bb52cc
- (_Bool)accessibilityActivate;	// IMP=0x0000000000bb5202
@property(nonatomic) unsigned long long accessibilityDirectTouchOptions;
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
- (_Bool)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000bb4e31
- (_Bool)accessibilityZoomInAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000bb4d6d
- (void)accessibilityDecrement;	// IMP=0x0000000000bb4d48
- (void)accessibilityIncrement;	// IMP=0x0000000000bb4d0f
@property(nonatomic, readonly) _Bool _accessibilityExplicitlyNonInteractable;
@property(nonatomic) _Bool accessibilityRespondsToUserInteraction;
@property(nonatomic) long long accessibilityContainerType;
@property(nonatomic) long long accessibilityNavigationStyle;
@property(nonatomic) _Bool shouldGroupAccessibilityChildren;
@property(nonatomic) _Bool accessibilityElementsHidden;
@property(nonatomic) _Bool accessibilityViewIsModal;
@property(nonatomic) struct CGPoint accessibilityActivationPoint;
- (id)_accessibilityUserTestingVisibleAncestor;	// IMP=0x0000000000bb4692
- (id)_accessibilityUserTestingParent;	// IMP=0x0000000000bb45d2
- (id)accessibilityContainer;	// IMP=0x0000000000bb4541
- (id)_accessibilityUserTestingChildren;	// IMP=0x0000000000bb421a
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic, readonly) NSArray *_accessibilityNodeChildrenUnsorted;
@property(nonatomic, readonly) id <_TtP7SwiftUI28PlatformAccessibilityElement_> _accessibilityNodeRepresentedElement;
@property(nonatomic, readonly) _Bool _accessibilityIsHostNode;
@property(nonatomic, retain) UIBezierPath *accessibilityPath;
@property(nonatomic) struct CGRect accessibilityFrame;
- (id)_accessibilityHeadingLevel;	// IMP=0x0000000000bb3a77
@property(nonatomic, copy) NSString *accessibilityTextualContext;
@property(nonatomic, copy) NSString *accessibilityLanguage;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property(nonatomic, copy) NSArray *accessibilityAttributedUserInputLabels;
@property(nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSString *accessibilityIdentifier;
- (unsigned long long)_accessibilityAutomationType;	// IMP=0x0000000000bb88e0
- (id)_accessibilityRoleDescription;	// IMP=0x0000000000bb8afd
- (double)_accessibilityNumberValue;	// IMP=0x0000000000bb8d8d
- (double)_accessibilityMaxValue;	// IMP=0x0000000000bb8c8d
- (double)_accessibilityMinValue;	// IMP=0x0000000000bb8b0f
- (long long)_accessibilityExpandedStatus;	// IMP=0x0000000000bb8f4a
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;	// IMP=0x0000000000bbcb73
- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;	// IMP=0x0000000000bbc1bf
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;	// IMP=0x0000000000bbbb31
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;	// IMP=0x0000000000bbb55a
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;	// IMP=0x0000000000bbb00e
- (id)_accessibilityDataSeriesTitleForAxis:(long long)arg1;	// IMP=0x0000000000bba9b7
- (id)_accessibilityDataSeriesValuesForAxis:(long long)arg1;	// IMP=0x0000000000bba325
- (double)_accessibilityDataSeriesSonificationDuration;	// IMP=0x0000000000bb9c6b
- (_Bool)_accessibilityDataSeriesIncludesTrendlineInSonification;	// IMP=0x0000000000bb9ab5
- (_Bool)_accessibilityDataSeriesSupportsSonification;	// IMP=0x0000000000bb990f
- (_Bool)_accessibilityDataSeriesSupportsSummarization;	// IMP=0x0000000000bb9765
- (long long)_accessibilityDataSeriesType;	// IMP=0x0000000000bb95c3
- (id)_accessibilityDataSeriesName;	// IMP=0x0000000000bb93eb
- (id)accessibilityCustomAttribute:(id)arg1;	// IMP=0x0000000000bbcd6f
- (_Bool)_accessibilityIsChartElement;	// IMP=0x00000000011503a8
@property(nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
- (id)accessibilityCustomContent;	// IMP=0x0000000001370fd5

@end
