//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _HBFileCacheFolderIconLayerStack : NSObject
{
    NSArray *_layers;	// 8 = 0x8
    UIImage *_flattenedUIImage;	// 16 = 0x10
    UIImage *_radiosityUIImage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006701d
@property(readonly, nonatomic, getter=_radiosityUIImage) UIImage *radiosityUIImage; // @synthesize radiosityUIImage=_radiosityUIImage;
@property(readonly, nonatomic, getter=_flattenedUIImage) UIImage *flattenedUIImage; // @synthesize flattenedUIImage=_flattenedUIImage;
@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSString *name;
- (id)initWithFolder:(id)arg1;	// IMP=0x0000000000066b81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

