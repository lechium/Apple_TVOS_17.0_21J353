//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem;
@protocol _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionSearchContextState : NSObject
{
    id <_UIFocusRegionContainer> _regionContainer;	// 8 = 0x8
    UIFocusSystem *_regionContainerFocusSystem;	// 16 = 0x10
    struct CGRect _clippingRect;	// 24 = 0x18
}

+ (id)stateWithRegionContainer:(id)arg1 focusSystem:(id)arg2 clippingRect:(struct CGRect)arg3;	// IMP=0x006000000072ad35
- (void).cxx_destruct;	// IMP=0x000000000072ade8
@property(readonly, nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(readonly, nonatomic) UIFocusSystem *regionContainerFocusSystem; // @synthesize regionContainerFocusSystem=_regionContainerFocusSystem;
@property(readonly, nonatomic) id <_UIFocusRegionContainer> regionContainer; // @synthesize regionContainer=_regionContainer;
- (id)initWithRegionContainer:(id)arg1 focusSystem:(id)arg2 clippingRect:(struct CGRect)arg3;	// IMP=0x000000000072ac87

@end

