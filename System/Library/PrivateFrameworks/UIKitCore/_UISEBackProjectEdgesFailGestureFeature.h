//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEBackProjectEdgesFailGestureFeature
{
    id <_UISEGestureFeatureSettings> _settings;	// 8 = 0x8
    _Bool _hasDoneTest;	// 16 = 0x10
    struct CGPoint _initialLocation;	// 24 = 0x18
    double _initialTimestamp;	// 40 = 0x28
    unsigned long long _touchedEdges;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000080848b
@property(readonly, nonatomic) unsigned long long touchedEdges; // @synthesize touchedEdges=_touchedEdges;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x0000000000808277
- (id)debugDictionary;	// IMP=0x00000000008081c8
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000000808132

@end

