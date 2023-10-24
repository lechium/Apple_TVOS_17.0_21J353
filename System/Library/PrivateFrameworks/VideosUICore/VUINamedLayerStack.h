//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;
@protocol UINamedLayerStack;

__attribute__((visibility("hidden")))
@interface VUINamedLayerStack : NSObject
{
    id <UINamedLayerStack> _layerStack;	// 8 = 0x8
    UIImage *_cornerRadiusFlatImage;	// 16 = 0x10
    UIImage *_originalImage;	// 24 = 0x18
    NSArray *_replacementLayers;	// 32 = 0x20
}

+ (id)decodedNamedLayerStackWithImage:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3;	// IMP=0x001000000000d652
+ (id)namedLayerStackWithImage:(id)arg1;	// IMP=0x001000000000d2a9
- (void).cxx_destruct;	// IMP=0x000000000000e02e
@property(copy, nonatomic) NSArray *replacementLayers; // @synthesize replacementLayers=_replacementLayers;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImage *cornerRadiusFlatImage; // @synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage;
@property(retain, nonatomic) id <UINamedLayerStack> layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;
- (id)_init;	// IMP=0x000000000000d27a
- (id)init;	// IMP=0x000000000000d26c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

