//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuPresentingAnimationController
{
    UICollectionView *_sourceCollectionView;	// 16 = 0x10
}

+ (id)_opacityTimingParameters;	// IMP=0x0010000000109194
+ (id)_transformTimingParameters;	// IMP=0x001000000010914d
- (void).cxx_destruct;	// IMP=0x0000000000109660
@property(nonatomic) __weak UICollectionView *sourceCollectionView; // @synthesize sourceCollectionView=_sourceCollectionView;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000001091e6
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000001091d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

