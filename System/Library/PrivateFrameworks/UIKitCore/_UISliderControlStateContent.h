//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UISliderControlStateContent : NSObject
{
    UIImage *_thumb;	// 8 = 0x8
    UIImage *_minTrack;	// 16 = 0x10
    UIImage *_maxTrack;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000014ae9e0
@property(retain, nonatomic) UIImage *maxTrack; // @synthesize maxTrack=_maxTrack;
@property(retain, nonatomic) UIImage *minTrack; // @synthesize minTrack=_minTrack;
@property(retain, nonatomic) UIImage *thumb; // @synthesize thumb=_thumb;
@property(readonly, nonatomic) _Bool isEmpty;

@end

