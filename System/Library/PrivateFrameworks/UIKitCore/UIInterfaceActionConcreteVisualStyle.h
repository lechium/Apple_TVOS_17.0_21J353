//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle : NSObject
{
}

- (id)newRepresentationViewForAction:(id)arg1;	// IMP=0x00000000000b20f5
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000b20ef
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000b20e9
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000000b20e3
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x00000000000b20d6
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x00000000000b20d0
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x00000000000b20c3
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000b20bd
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x00000000000b20b0
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000b20aa
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x00000000000b209d
- (double)actionSpacingForGroupViewState:(id)arg1;	// IMP=0x00000000000b2094
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000000b208c
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x00000000000b207a
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x00000000000b2068
- (id)actionTitleLabelCompositingFilterForViewState:(id)arg1;	// IMP=0x00000000000b2060
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x00000000000b2047
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x00000000000b2024
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x00000000000b201c
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000000b2014
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000000b200c
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x00000000000b2004
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x00000000000b1ffc
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x00000000000b1fee
- (_Bool)selectionFeedbackEnabled;	// IMP=0x00000000000b1fe6
- (_Bool)selectByPressGestureRequired;	// IMP=0x00000000000b1fde
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x00000000000b1fcb
- (double)actionSectionSpacing;	// IMP=0x00000000000b1fc2
- (_Bool)allowsZeroSizedSectionSeparators;	// IMP=0x00000000000b1fba
- (double)verticalImageContentSpacing;	// IMP=0x00000000000b1fb1
- (double)horizontalImageContentSpacing;	// IMP=0x00000000000b1fa8
- (struct CGSize)minimumActionContentSize;	// IMP=0x00000000000b1f92
- (struct UIEdgeInsets)contentMargin;	// IMP=0x00000000000b1f7f
- (double)contentCornerRadius;	// IMP=0x00000000000b1f76
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x00000000000b1ee9
- (id)defaultScreen;	// IMP=0x00000000000b1ed0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b1ebe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

