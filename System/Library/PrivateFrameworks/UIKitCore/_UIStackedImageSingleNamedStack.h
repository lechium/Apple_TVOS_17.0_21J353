//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _UIStackedImageSingleNamedLayerImage;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedStack : NSObject
{
    _UIStackedImageSingleNamedLayerImage *_layerImage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001434222
@property(retain, nonatomic) _UIStackedImageSingleNamedLayerImage *layerImage; // @synthesize layerImage=_layerImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

