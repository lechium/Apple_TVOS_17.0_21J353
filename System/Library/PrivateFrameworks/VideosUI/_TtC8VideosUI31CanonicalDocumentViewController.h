//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s8VideosUI29DocumentRequestViewControllerCN.h"

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI31CanonicalDocumentViewController : _$s8VideosUI29DocumentRequestViewControllerCN
{
    MISSING_TYPE *delegate;	// 240 = 0xf0
    MISSING_TYPE *browserInset;	// 256 = 0x100
    MISSING_TYPE *shouldConfigureBackgroundVideo;	// 265 = 0x109
    MISSING_TYPE *smartEpisodeIndex;	// 272 = 0x110
    MISSING_TYPE *backgroundMediaController;	// 288 = 0x120
    MISSING_TYPE *$__lazy_storage_$_playbackInteractionManager;	// 296 = 0x128
    MISSING_TYPE *$__lazy_storage_$_canonicalConfig;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x000000000031cbff
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)vui_loadView;	// IMP=0x000000000031c719
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000031c635
- (void)vui_viewDidLayoutSubviews;	// IMP=0x000000000031b491
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x000000000031b25f

@end

