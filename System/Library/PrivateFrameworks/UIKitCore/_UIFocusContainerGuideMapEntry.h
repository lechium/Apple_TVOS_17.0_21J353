//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIFocusContainerGuide;

__attribute__((visibility("hidden")))
@interface _UIFocusContainerGuideMapEntry
{
    UIFocusContainerGuide *_focusContainerGuide;	// 96 = 0x60
    double _axisAlignedDistanceFromFocusedRect;	// 104 = 0x68
    struct CGRect _focusContainmentFrame;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000071d80b
@property(nonatomic) double axisAlignedDistanceFromFocusedRect; // @synthesize axisAlignedDistanceFromFocusedRect=_axisAlignedDistanceFromFocusedRect;
@property(nonatomic) struct CGRect focusContainmentFrame; // @synthesize focusContainmentFrame=_focusContainmentFrame;
@property(nonatomic) __weak UIFocusContainerGuide *focusContainerGuide; // @synthesize focusContainerGuide=_focusContainerGuide;
- (id)description;	// IMP=0x000000000071d63f
- (void)drawVisualRepresentationInContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2;	// IMP=0x000000000071d460
- (id)visualRepresentationColor;	// IMP=0x000000000071d22d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000071d193

@end

