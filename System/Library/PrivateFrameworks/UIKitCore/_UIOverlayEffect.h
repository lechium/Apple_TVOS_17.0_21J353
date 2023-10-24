//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIVisualEffect.h"

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffect : UIVisualEffect
{
    NSString *_filterType;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    double _alpha;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016b369
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x000000000016b219
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016b1ea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016b1bb
- (id)init;	// IMP=0x000000000016b172

@end

