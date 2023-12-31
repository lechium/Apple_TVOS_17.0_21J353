//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@interface UIAccessibilityElement (Private)
@property(nonatomic) struct CGRect bounds; // @dynamic bounds;
- (void)delegateSpecificsForAttribute:(long long)arg1 delegate:(id *)arg2 selector:(SEL *)arg3;	// IMP=0x0030000000059d61
- (void)setDelegate:(id)arg1 forAttribute:(long long)arg2 withSelector:(SEL)arg3;	// IMP=0x0030000000059c12
- (void)setTableCellYOffset:(float)arg1;	// IMP=0x0030000000059c0c
- (id)dataForKey:(id)arg1;	// IMP=0x0030000000059bfa
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x0030000000059be8
- (_Bool)_accessibilityViewIsVisible;	// IMP=0x0030000000059ba4
- (id)_accessibilityProxyView;	// IMP=0x0030000000059b92
@property(nonatomic) __weak id accessibilityDelegate; // @dynamic accessibilityDelegate;

// Remaining properties
@property(readonly, nonatomic) _Bool _accessibilityUsesFrameInContainerSpace; // @dynamic _accessibilityUsesFrameInContainerSpace;
@end

