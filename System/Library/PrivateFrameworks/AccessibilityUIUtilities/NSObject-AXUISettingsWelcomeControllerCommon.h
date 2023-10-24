//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface NSObject (AXUISettingsWelcomeControllerCommon)
@property(retain, nonatomic, setter=ax_setBuddyDynamicHeightConstraints:) NSMutableArray *ax_buddyDynamicHeightConstraints;
@property(retain, nonatomic, setter=ax_setBuddyObservedTableViews:) NSMutableArray *ax_buddyObservedTableViews;
- (id)_accessibilityUIFindSubviewDescendant:(CDUnknownBlockType)arg1;	// IMP=0x0030000000014f1d
- (id)_accessibilityUIFindAXDescendants:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;	// IMP=0x0030000000014dcb
- (id)_accessibilityUIFindAnyAXDescendant:(CDUnknownBlockType)arg1 byAddingElements:(CDUnknownBlockType)arg2;	// IMP=0x0030000000014cb6
- (id)_atvaccessibilityLabel;	// IMP=0x00300000000234c3
@property(readonly, nonatomic) NSDictionary *_atvaccessibilitySemanticContext;
- (id)_atvaccessibilityITMLSemanticContext;	// IMP=0x0030000000023346
- (id)_accessibilityBadgeTextForTextElement:(id)arg1;	// IMP=0x0030000000023057
- (id)_atvaccessibilityITMLClass;	// IMP=0x0030000000022fba
@property(readonly, nonatomic) NSString *_atvaccessibilityITMLAccessibilityContent;
- (id)_atvAccessibilityITMLAccessibilityContentWithElement:(id)arg1;	// IMP=0x00300000000226f2
- (id)_atvaccessibilityAncestorHasAXID:(id)arg1;	// IMP=0x0030000000022609
- (id)_atvaccessibilityClosestElementAbove:(id)arg1;	// IMP=0x00300000000223ef
- (id)_atvaccessibilityGeometricNearestHeader;	// IMP=0x00300000000222bc
@end
