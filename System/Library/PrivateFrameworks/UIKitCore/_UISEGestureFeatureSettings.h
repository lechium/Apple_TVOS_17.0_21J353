//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISEGestureFeatureSettings : NSObject
{
    double _backProjectTime;	// 8 = 0x8
    double _bottomEdgeAngleWindow;	// 16 = 0x10
    double _bottomEdgeRegionSize;	// 24 = 0x18
    double _cornerAngleWindow;	// 32 = 0x20
    double _edgeAngleWindow;	// 40 = 0x28
    double _edgeAngleWindowDecayTime;	// 48 = 0x30
    double _edgeRegionSize;	// 56 = 0x38
    double _hysteresis;	// 64 = 0x40
    unsigned long long _interfaceBottomEdge;	// 72 = 0x48
    unsigned long long _minimumNumberOfSubfeatures;	// 80 = 0x50
    double _maximumBackProjectTimeFactor;	// 88 = 0x58
    double _maximumSwipeDuration;	// 96 = 0x60
    unsigned long long _targetEdges;	// 104 = 0x68
    struct CGRect _bounds;	// 112 = 0x70
}

@property(nonatomic) unsigned long long targetEdges; // @synthesize targetEdges=_targetEdges;
@property(nonatomic) double maximumSwipeDuration; // @synthesize maximumSwipeDuration=_maximumSwipeDuration;
@property(nonatomic) double maximumBackProjectTimeFactor; // @synthesize maximumBackProjectTimeFactor=_maximumBackProjectTimeFactor;
@property(nonatomic) unsigned long long minimumNumberOfSubfeatures; // @synthesize minimumNumberOfSubfeatures=_minimumNumberOfSubfeatures;
@property(nonatomic) unsigned long long interfaceBottomEdge; // @synthesize interfaceBottomEdge=_interfaceBottomEdge;
@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(nonatomic) double edgeRegionSize; // @synthesize edgeRegionSize=_edgeRegionSize;
@property(nonatomic) double edgeAngleWindowDecayTime; // @synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime;
@property(nonatomic) double edgeAngleWindow; // @synthesize edgeAngleWindow=_edgeAngleWindow;
@property(nonatomic) double cornerAngleWindow; // @synthesize cornerAngleWindow=_cornerAngleWindow;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) double bottomEdgeRegionSize; // @synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize;
@property(nonatomic) double bottomEdgeAngleWindow; // @synthesize bottomEdgeAngleWindow=_bottomEdgeAngleWindow;
@property(nonatomic) double backProjectTime; // @synthesize backProjectTime=_backProjectTime;
- (id)init;	// IMP=0x000000000081177f

@end

