//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIColorPickerColorQueueContainer : NSObject
{
    _Bool _isVolatile;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
    NSString *_colorSpace;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000823089
@property(nonatomic) _Bool isVolatile; // @synthesize isVolatile=_isVolatile;
@property(retain, nonatomic) NSString *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

@end

