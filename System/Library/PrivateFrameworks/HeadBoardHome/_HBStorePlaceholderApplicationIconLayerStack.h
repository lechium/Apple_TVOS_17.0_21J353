//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PBSAppInfo, UIImage;

__attribute__((visibility("hidden")))
@interface _HBStorePlaceholderApplicationIconLayerStack : NSObject
{
    NSArray *_layers;	// 8 = 0x8
    PBSAppInfo *_application;	// 16 = 0x10
    UIImage *_flattenedUIImage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f96f
@property(readonly, nonatomic, getter=_flattenedUIImage) UIImage *flattenedUIImage; // @synthesize flattenedUIImage=_flattenedUIImage;
@property(readonly, nonatomic, getter=_application) PBSAppInfo *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)imageConfigurationForConfiguration:(id)arg1;	// IMP=0x000000000000f87b
- (id)initWithApplication:(id)arg1;	// IMP=0x000000000000f61b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

