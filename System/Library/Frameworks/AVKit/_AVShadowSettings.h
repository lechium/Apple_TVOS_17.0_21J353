//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _AVShadowSettings : NSObject
{
    UIColor *_color;	// 8 = 0x8
    double _radius;	// 16 = 0x10
    struct CGSize _offset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001317fd
@property(readonly, nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) double verticalOffset;
@property(readonly, nonatomic) double opacity;
- (id)initWithColor:(id)arg1 radius:(double)arg2 offset:(struct CGSize)arg3;	// IMP=0x000000000013171c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
