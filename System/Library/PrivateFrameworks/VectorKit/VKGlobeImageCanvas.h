//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKCamera;

__attribute__((visibility("hidden")))
@interface VKGlobeImageCanvas
{
    void *_globeView;	// 128 = 0x80
    VKCamera *_vkCamera;	// 136 = 0x88
    struct unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> _globeAdapter;	// 144 = 0x90
    void *_loadingStatusTracker;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x00000000008c3295
- (void).cxx_destruct;	// IMP=0x00000000008c3264
- (void)cancelTileRequests;	// IMP=0x00000000008c323b
- (void)_updateViewport;	// IMP=0x00000000008c3109
- (void)didLayout;	// IMP=0x00000000008c30a3
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000008c3008
- (void)setMapType:(int)arg1;	// IMP=0x00000000008c2f74
- (void)dealloc;	// IMP=0x00000000008c2eec
- (void)willDealloc;	// IMP=0x00000000008c2e8f
- (id)initWithMapEngine:(void *)arg1;	// IMP=0x00000000008c299f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

