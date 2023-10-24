//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBatteryViewAXHUDImageCacheInfo : NSObject
{
    _Bool _showBolt;	// 8 = 0x8
    _Bool _reverseLayoutDirection;	// 9 = 0x9
    _Bool _showsPercentage;	// 10 = 0xa
    UIImage *_cachedImage;	// 16 = 0x10
    UIColor *_fillColor;	// 24 = 0x18
    UIColor *_tintColor;	// 32 = 0x20
    double _capacity;	// 40 = 0x28
    double _scale;	// 48 = 0x30
    NSString *_contentSizeCategory;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000f3d744
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) _Bool showsPercentage; // @synthesize showsPercentage=_showsPercentage;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool reverseLayoutDirection; // @synthesize reverseLayoutDirection=_reverseLayoutDirection;
@property(nonatomic) _Bool showBolt; // @synthesize showBolt=_showBolt;
@property(nonatomic) double capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
- (_Bool)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 tintColor:(id)arg3 showingBolt:(_Bool)arg4 reverseLayout:(_Bool)arg5 scale:(double)arg6 showsPercentage:(_Bool)arg7 contentSizeCategory:(id)arg8;	// IMP=0x0000000000f3d4a4

@end
