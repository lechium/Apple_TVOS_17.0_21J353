//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEInitialEdgesFailGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    _Bool _useEdgeRegionSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000008133e7
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x000000000081325d
- (id)initWithSettings:(id)arg1 useEdgeRegionSize:(_Bool)arg2;	// IMP=0x00000000008131f7

@end

