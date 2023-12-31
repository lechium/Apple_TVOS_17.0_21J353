//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas
{
    void *_mapEngine;	// 128 = 0x80
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;	// 136 = 0x88
    struct shared_ptr<md::OverlayContainer> _overlayContainer;	// 160 = 0xa0
}

- (id).cxx_construct;	// IMP=0x0000000000268a1a
- (void).cxx_destruct;	// IMP=0x00000000002689df
- (void)tileGroupDidChange;	// IMP=0x00000000002689ad
- (void)cancelTileRequests;	// IMP=0x000000000026898d
- (void)clearScene;	// IMP=0x000000000026895b
- (void)addOverlay:(id)arg1;	// IMP=0x0000000000268890
- (void)updateOverlays;	// IMP=0x0000000000268778
- (void)setMapType:(int)arg1;	// IMP=0x0000000000268763
- (void)resetCameraController;	// IMP=0x000000000026856a
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x000000000026846a
- (void)dealloc;	// IMP=0x00000000002683f1
@property(readonly, nonatomic) NSArray *overlays;
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x0000000000267ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

