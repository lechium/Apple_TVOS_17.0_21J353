//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@class BSUICAPackageView;

@interface TVSSVolumeControlRenderer : TVSPRenderer
{
    BSUICAPackageView *_packageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012efa0
@property(retain, nonatomic) BSUICAPackageView *packageView; // @synthesize packageView=_packageView;
- (id)_stateNameForVolumeLevel:(id)arg1;	// IMP=0x001000000012ee00
- (void)applyContent:(id)arg1 animator:(id)arg2;	// IMP=0x001000000012ed50
- (id)overrideStylingForIdentifier:(id)arg1;	// IMP=0x001000000012ebb0
- (void)configureContentView:(id)arg1;	// IMP=0x001000000012e710
- (void)contentDidChange;	// IMP=0x001000000012e630

@end

