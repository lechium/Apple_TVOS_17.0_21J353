//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionCustomViewRepresentationView
{
    UIView *_actionContentView;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000000cbd9c
- (void)_removeLoadedContentsFromViewHierarcy;	// IMP=0x00000000000cbd7f
- (void)_insertLoadedContentsIntoHierarchy;	// IMP=0x00000000000cbd05
- (id)_actionContentView;	// IMP=0x00000000000cbcf0
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x00000000000cbcb2
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;	// IMP=0x00000000000cbbe7
- (id)_fittingContentSizingView;	// IMP=0x00000000000cbbd2
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000cbb4f
- (long long)_focusItemDeferralMode;	// IMP=0x00000000000cbafb
- (id)description;	// IMP=0x00000000000cba4c
- (id)initWithAction:(id)arg1;	// IMP=0x00000000000cb9b5

@end
