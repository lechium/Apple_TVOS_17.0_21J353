//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

__attribute__((visibility("hidden")))
@interface TVPUINamedLayerImage : NSObject
{
    _Bool _fixedFrame;	// 8 = 0x8
    int _blendMode;	// 12 = 0xc
    struct CGImage *_image;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    double _opacity;	// 32 = 0x20
    UIImage *_imageObj;	// 40 = 0x28
    struct CGRect _frame;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000ffa38
@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
@property(nonatomic) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;

// Remaining properties
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

