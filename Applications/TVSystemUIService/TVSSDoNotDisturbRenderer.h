//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@class BSUICAPackageView, NSString, TVSSDoNotDisturbController;

@interface TVSSDoNotDisturbRenderer : TVSPRenderer
{
    TVSSDoNotDisturbController *_doNotDisturbController;	// 8 = 0x8
    BSUICAPackageView *_packageView;	// 16 = 0x10
    BSUICAPackageView *_focusedPackageView;	// 24 = 0x18
    _Bool _focused;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001e9b0
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
- (void)doNotDisturbControllerDidUpdate:(id)arg1;	// IMP=0x001000000001e920
- (void)updatePackageViewStateAnimated:(_Bool)arg1;	// IMP=0x001000000001e840
- (void)updateContentView;	// IMP=0x001000000001e740
- (void)configureContentView:(id)arg1;	// IMP=0x001000000001dee0
- (void)dealloc;	// IMP=0x001000000001de80
- (id)initWithIdentifier:(id)arg1 doNotDisturbControllerer:(id)arg2 overrideStylings:(id)arg3;	// IMP=0x001000000001dd40
- (id)initWithIdentifier:(id)arg1 doNotDisturbControllerer:(id)arg2;	// IMP=0x001000000001dc90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

