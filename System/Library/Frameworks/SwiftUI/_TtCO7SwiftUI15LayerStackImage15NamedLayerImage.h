//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtCO7SwiftUI15LayerStackImage15NamedLayerImage : NSObject
{
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *frame;	// 24 = 0x18
    MISSING_TYPE *contents;	// 56 = 0x38
    MISSING_TYPE *opacity;	// 64 = 0x40
    MISSING_TYPE *blendMode;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000d8c83f
- (id)init;	// IMP=0x0000000000d8c7ff
- (id)imageObj;	// IMP=0x0000000000d8c7a4
@property(nonatomic, readonly) int blendMode; // @synthesize blendMode;
@property(nonatomic, readonly) double opacity; // @synthesize opacity;
@property(nonatomic, readonly) struct CGRect frame; // @synthesize frame;
@property(nonatomic, readonly) NSString *name;

@end
